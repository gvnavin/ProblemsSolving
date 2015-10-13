package com.tree.algo;

import com.tree.BalancedTree;
import com.tree.ImbalancedTree;
import com.tree.TreeNode;

import java.util.ArrayList;
import java.util.List;
import java.util.Stack;

/**
 * Created by gnavin on 10/6/15.
 */
public class ZigZagTraversalRightToLeft {

    public static void main(String[] args) {
        traverse(new BalancedTree().getRoot());
        traverse(new ImbalancedTree().getRoot());
    }


    public static void traverse(final TreeNode root) {
        /*
        <---- r, l
        |
        ----> l, r
        */

        final Stack<TreeNode> st1 = new Stack<TreeNode>();

        final Stack<TreeNode> st2 = new Stack<TreeNode>();

        st1.push(root);
        final List<TreeNode> zigZagOrder = new ArrayList<TreeNode>();

        while (!st1.isEmpty() || !st2.isEmpty()) {

            while (!st1.isEmpty()) {
                final TreeNode temp = st1.pop();
                if (temp == null) {
                    return;
                }

                zigZagOrder.add(temp);
                if (temp.right != null) {
                    st2.push(temp.right);
                }
                if (temp.left != null) {
                    st2.push(temp.left);
                }
            }
            while (!st2.isEmpty()) {
                final TreeNode temp = st2.pop();
                if (temp == null) {
                    return;
                }

                zigZagOrder.add(temp);
                if (temp.left != null) {
                    st1.push(temp.left);
                }
                if (temp.right != null) {
                    st1.push(temp.right);
                }
            }

        }
        BalancedTree.printByLevel(zigZagOrder);
    }

}
