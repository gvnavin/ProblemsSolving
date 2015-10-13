package com.trie;

/**
 * Created by gnavin on 10/6/15.
 */
public class TrieNode {
    public char value;
    public TrieNode[] children;
    private boolean isWordEnd;
    private int count;

    public TrieNode() {
        this('/');
    }

    public TrieNode(final char value) {
        this.value = value;
        children = new TrieNode[256];
        isWordEnd = false;
        count = 0;
    }

    public boolean isWordEnd() {
        return isWordEnd;
    }

    public void setEndOfWord() {
        isWordEnd = true;
        count++;
        System.out.println("setEndOfWord value : " + value + " count : " + count);
    }

    public int getCount() {
        return count;
    }
}
