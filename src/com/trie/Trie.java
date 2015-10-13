package com.trie;

import java.util.Arrays;
import java.util.List;

/**
 * Created by gnavin on 10/6/15.
 */
public class Trie {

    private TrieNode root;

    public Trie() {
        root = new TrieNode();
    }

    public static void main(String[] args) {
        Trie trie = new Trie();
        trie.build(Arrays.asList("navin", "navin"));
        System.out.println(trie.getCount("navin"));
        System.out.println(trie.getCount("nan"));
    }

    public int getCount(final String word) {
        return getCount(word, root);
    }

    private int getCount(final String word, final TrieNode trieNode) {
        if (word == null || word.isEmpty() || trieNode == null) {
            return 0;
        }
        final char firstChar = word.charAt(0);
        final int childIndex = firstChar;

        System.out.println("getCount : " + " word : " + word + " firstChar : " + firstChar + " trieNode.value : " + trieNode.value);

        final TrieNode nextTrieNode = trieNode.children[childIndex];
        if (nextTrieNode == null) {
            System.out.println("getCount next trieNode is null");
            return 0;
        }

        System.out.println("getCount : " + "nextTrieNode.value : " + nextTrieNode.value);
        if (word.length() > 1) {
            final String nextWord = word.substring(1);
            //ascii code for zero(0) is 0 "NULL"
            return getCount(nextWord, nextTrieNode);
        } else {
            if (nextTrieNode.isWordEnd()) {
                return nextTrieNode.getCount();
            } else {
                return 0;
            }
        }
    }

    public void build(final List<String> words) {
        for (String word : words) {
            add(word, root);
        }
    }

    private void add(final String word, final TrieNode trieNode) {
        if (word == null || word.isEmpty()) {
            return;
        }
        final char firstChar = word.charAt(0);
        final int childIndex = firstChar;

        System.out.println("word : " + word);
        System.out.println("firstChar : " + firstChar);
        System.out.println("child Index : " + childIndex);

        if (trieNode.children[childIndex] == null) {
            trieNode.children[childIndex] = new TrieNode(firstChar);
        }
        final TrieNode nextTrieNode = trieNode.children[childIndex];
        if (word.length() > 1) {
            final String nextWord = word.substring(1);
            //ascii code for zero(0) is 0 "NULL"
            add(nextWord, nextTrieNode);
        } else {
            nextTrieNode.setEndOfWord();
        }

    }

}
