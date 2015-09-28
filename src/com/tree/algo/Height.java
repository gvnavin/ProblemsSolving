package com.tree.algo;

import com.tree.BalancedTree;
import com.tree.ImbalancedTree;
import com.tree.Tree;
import com.tree.TreeNode;

/**
 * Created by gnavin on 9/28/15.
 */
public class Height {

    public static void main(String[] args) {
        testHeight(new BalancedTree());
        testHeight(new ImbalancedTree());
    }

    public static void testHeight(final Tree tree) {
        int h = getHeight(tree.getRoot());
        System.out.println(h);
    }

    public static int getHeight(TreeNode root) {
        if (root == null) {
            return 0;
        }

        int lh = getHeight(root.left);
        int rh = getHeight(root.right);

        return Math.max(lh, rh) + 1;

    }

}
