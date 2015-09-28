package com.leetcode;

import java.util.HashMap;
import java.util.HashSet;
import java.util.Map;
import java.util.Set;

/**
 * https://leetcode.com/problems/word-break/
 * Created by gnavin on 7/11/15.
 */
public class WordBreak {

    public static void test1() {
        Set<String> s = new HashSet<String>();
        s.add("a");
        s.add("abc");
        s.add("b");
        s.add("cd");

        System.out.println("output : " + new WordBreak().wordBreak("abcd", s));
    }

    public static void test2() {
        Set<String> s = new HashSet<String>();
        s.add("dog");
        s.add("s");
        s.add("gs");

        System.out.println("output : " + new WordBreak().wordBreak("dogs", s));
    }

    public static void test3() {
        Set<String> s = new HashSet<String>();

        System.out.println("output : " + new WordBreak().wordBreak("", s));
    }

    public static void test4() {
        Set<String> s = new HashSet<String>();
        s.add("go");
        s.add("goal");
        s.add("goals");
        s.add("special");

        System.out.println("output : " + new WordBreak().wordBreak("goalspecial", s));
    }

    private Map<String, Boolean> memo;

    public boolean wordBreak(String s, Set<String> dict) {
        memo = new HashMap<String, Boolean>();
        return wordBreakRec(s, dict);
    }

    public boolean wordBreakRec(String s, Set<String> dict) {
        System.out.println("enter : " + s);
        if (memo.containsKey(s)) {
            System.out.println("memo contains : " + s);
            return memo.get(s).booleanValue();
        }
        if (dict.contains(s)) {
            System.out.println("contains : " + s);
            memo.put(s, Boolean.TRUE);
            return true;
        }

        for(int i = 0; i < s.length()-1; i++) {
            String s1 = s.substring(0,i+1);
            String s2 = s.substring(i+1);
            System.out.println(s1 + " " + s2);

            boolean ret1 = wordBreakRec(s1, dict);
            boolean ret2 = wordBreakRec(s2, dict);

            System.out.println(s1 + " " + ret1);
            System.out.println(s2 + " " + ret2);

            if (ret1 && ret2) {
                memo.put(s, Boolean.TRUE);
                return true;
            }
        }
        memo.put(s, Boolean.FALSE);
        return false;
    }
}
