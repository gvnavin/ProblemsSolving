package com.tree.algo;

import com.tree.BalancedTree;
import com.tree.ImbalancedTree;
import com.tree.Tree;
import com.tree.TreeNode;

/**
 * Created by gnavin on 9/28/15.
 */
public class IsBalanced {
    public static void main(String[] args) {

        testBalanced(new BalancedTree());
        testBalanced(new ImbalancedTree());

    }

    public static void testBalanced(final Tree tree) {
        boolean isBalanced = isBalanced(tree.getRoot());
        System.out.println(isBalanced);
    }

    public static boolean isBalanced(TreeNode root) {
        if (root == null) {
            return true;
        }

        int lh = Height.getHeight(root.left);
        int rh = Height.getHeight(root.right);

        int diff = Math.abs(lh - rh);

        //if short circuit is enabled, only diff only will run if diff is true
        //only isBalanced(root.left) only will run
        //return diff && isBalanced(root.left) && isBalanced(root.right);

        if (diff > 1) {
            return false;
        }

        boolean isLeftBalanced = isBalanced(root.left);
        if (!isLeftBalanced) {
            return false;
        }

        return isBalanced(root.right);
    }
}
