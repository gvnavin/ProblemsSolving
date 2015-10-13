package com.tree;

/**
 * Created by gnavin on 9/27/15.
 */
public class TreeNode {

    public int value;
    public TreeNode left;
    public TreeNode right;
    public int level;

    public int noOfNodesInLeftSubtree;
    public int noOfNodesInRightSubtree;

    public TreeNode(int value) {
        this.value = value;
        noOfNodesInLeftSubtree = 0;
        noOfNodesInRightSubtree = 0;
        level = 0;
    }

}
