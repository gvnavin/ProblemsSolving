package com.tree.algo;

import com.tree.BalancedTree;
import com.tree.ImbalancedTree;
import com.tree.Tree;
import com.tree.TreeNode;

import java.util.ArrayList;
import java.util.List;
import java.util.Stack;

/**
 * Created by gnavin on 9/27/15.
 */
public class ZigZagTraversalLeftToRight {

    public static void main(String[] args) {
        traverse(new BalancedTree().getRoot());
        traverse(new ImbalancedTree().getRoot());
    }


    public static void traverse(final TreeNode root) {
        /*
        ---->
            |
        <----
        */

        final Stack<TreeNode> stLR = new Stack<TreeNode>();

        final Stack<TreeNode> stRL = new Stack<TreeNode>();

        stLR.push(root);
        final List<TreeNode> zigZagOrder = new ArrayList<TreeNode>();

        while (!stLR.isEmpty() || !stRL.isEmpty()) {

            while (!stLR.isEmpty()) {
                final TreeNode temp = stLR.pop();
                if (temp == null) {
                    return;
                }

                zigZagOrder.add(temp);
                if (temp.left != null) {
                    stRL.push(temp.left);
                }
                if (temp.right != null) {
                    stRL.push(temp.right);
                }
            }
            while (!stRL.isEmpty()) {
                final TreeNode temp = stRL.pop();
                if (temp == null) {
                    return;
                }

                zigZagOrder.add(temp);
                if (temp.right != null) {
                    stLR.push(temp.right);
                }
                if (temp.left != null) {
                    stLR.push(temp.left);
                }
            }

        }
        BalancedTree.printByLevel(zigZagOrder);
    }

}
