package com.tree;


/**
 * Created by gnavin on 9/27/15.
 */
public class BalancedTree extends Tree {

    public static void main(String[] args) {
        final BalancedTree tree = new BalancedTree();
        tree.printByLevel();
        tree.ZigZagTraversalLeftToRight();
        System.out.println("isBalanced : " + tree.isBalanced());
        System.out.println("getHeight : " + tree.getHeight());
    }

    protected TreeNode createTree() {

        TreeNode temp_root = new TreeNode(1);

        temp_root.left = new TreeNode(2);
        temp_root.right = new TreeNode(3);

        //------------------------------

        temp_root.left.left = new TreeNode(4);
        temp_root.left.right = new TreeNode(5);

        temp_root.right.left = new TreeNode(6);
        temp_root.right.right = new TreeNode(7);

        //------------------------------

        temp_root.left.left.left = new TreeNode(8);
        temp_root.left.left.right = new TreeNode(9);

        temp_root.left.right.left = new TreeNode(10);
        temp_root.left.right.right = new TreeNode(11);

        //------------------------------

        temp_root.right.left.left = new TreeNode(12);
        temp_root.right.left.right = new TreeNode(13);

        temp_root.right.right.left = new TreeNode(14);
        temp_root.right.right.right = new TreeNode(15);

        return temp_root;
    }

}
