package com.leetcode;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.HashMap;
import java.util.HashSet;
import java.util.List;
import java.util.Map;
import java.util.Set;

/**
 * https://leetcode.com/problems/word-break-ii/
 * Created by gnavin on 7/11/15.
 */
public class WordBreakII {

    public static void test1() {
        Set<String> s = new HashSet<String>();
        s.add("a");
        s.add("abc");
        s.add("b");
        s.add("cd");

        System.out.println("output : " + new WordBreakII().wordBreak("abcd", s));
    }

    public static void test2() {
        Set<String> s = new HashSet<String>();
        s.add("dog");
        s.add("s");
        s.add("gs");

        System.out.println("output : " + new WordBreakII().wordBreak("dogs", s));
    }

    public static void test3() {
        Set<String> s = new HashSet<String>();

        System.out.println("output : " + new WordBreakII().wordBreak("", s));
    }

    public static void test4() {
        Set<String> s = new HashSet<String>();
        s.add("go");
        s.add("goal");
        s.add("goals");
        s.add("special");

        System.out.println("output : " + new WordBreakII().wordBreak("goalspecial", s));


    }

    public static void test5() {
        Set<String> s = new HashSet<String>(Arrays.asList(new String[] {"a","aa","aaa","aaaa","aaaaa","aaaaaa","aaaaaaa","aaaaaaaa","aaaaaaaaa","aaaaaaaaaa"}));
        System.out.println("output : " + new WordBreakII().wordBreak("aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", s));
    }

    public static void test6() {
        Set<String> s = new HashSet<String>(Arrays.asList(new String[] {"a","aa","aaa","aaaa","aaaaa","aaaaaa","aaaaaaa","aaaaaaaa","aaaaaaaaa","aaaaaaaaaa"}));
        System.out.println("output : " + new WordBreakII().wordBreak("aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", s));
    }

    private Map<String, List<String> > memo;

    public List<String> wordBreak(String s, Set<String> dict) {
        memo = new HashMap<String, List<String> >();

        boolean[] mp = new boolean[256];

        for(String str:dict) {
            for(int i=0;i<str.length();i++) {
                mp[str.charAt(i)] = true;
            }
        }

        for(int i=0;i<s.length();i++) {
            if (mp[s.charAt(i)]) {

            } else {
                return Collections.emptyList();
            }
        }

        return wordBreakRec(s, dict);
    }

    public List<String> wordBreakRec(String s, Set<String> dict) {
        System.out.println("enter : " + s);
        if (memo.containsKey(s)) {
            System.out.println("memo contains : " + s);
            return memo.get(s);
        }
        if (dict.contains(s)) {
            System.out.println("contains : " + s);
            memo.put(s, Arrays.asList(new String[]{s}));
            return Arrays.asList(new String[]{s});
        }

        List<String> l = new ArrayList<String>();
        for(int i = 0; i < s.length()-1; i++) {
            String s1 = s.substring(0,i+1);
            String s2 = s.substring(i+1);
            System.out.println(s1 + " - " + s2);

            List<String> ret1 = wordBreakRec(s1, dict);
            List<String> ret2 = wordBreakRec(s2, dict);

            //System.out.println(s1 + " " + ret1);
            //System.out.println(s2 + " " + ret2);

            if (ret1.size() > 0 && ret2.size() > 0) {
                StringBuffer sb = new StringBuffer();
                for(String ss:ret1) {
                    sb.append(ss).append(' ');
                }
                for (String ss:ret2) {
                    sb.append(ss).append(' ');
                }
                l.add(sb.toString().trim());
            }
        }
        memo.put(s, l);
        return l;
    }
}
