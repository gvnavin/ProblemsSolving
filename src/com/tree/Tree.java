package com.tree;

import com.tree.algo.Height;

import java.util.*;

/**
 * Created by gnavin on 9/27/15.
 */
public class Tree {

    private final TreeNode root;

    public Tree() {
        this.root = createTree();
        assignLevelToNode();
    }

    public Tree(TreeNode root) {
        this.root = root;
        assignLevelToNode();
    }

    public static void printByLevel(final List<TreeNode> order) {
        int currentLevel = 0;
        for (TreeNode node : order) {
            if (currentLevel != node.level) {
                System.out.println();
                currentLevel = node.level;
            }
            System.out.print(node.value);
            System.out.print(" ");
        }
        System.out.println();
    }

    public TreeNode getRoot() {
        return root;
    }

    protected TreeNode createTree() {
        return null;
    }

    public void ZigZagTraversalRightToLeft() {
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

    public void ZigZagTraversalLeftToRight() {
        /*
        ---->  l, r
            |
        <----  r, l
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
                if (temp.left != null) {
                    st2.push(temp.left);
                }
                if (temp.right != null) {
                    st2.push(temp.right);
                }
            }
            while (!st2.isEmpty()) {
                final TreeNode temp = st2.pop();
                if (temp == null) {
                    return;
                }

                zigZagOrder.add(temp);
                if (temp.right != null) {
                    st1.push(temp.right);
                }
                if (temp.left != null) {
                    st1.push(temp.left);
                }
            }

        }
        BalancedTree.printByLevel(zigZagOrder);
    }

    public boolean isBalanced() {
        return isBalanced(root);
    }

    private boolean isBalanced(TreeNode root) {
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

    public int getHeight() {
       return getHeight(root);
    }

    private int getHeight(TreeNode root) {
        if (root == null) {
            return 0;
        }

        int lh = getHeight(root.left);
        int rh = getHeight(root.right);

        return Math.max(lh, rh) + 1;
    }

    public void assignLevelToNode() {
        root.level = 0;
        final Queue<TreeNode> queue = new ArrayDeque<TreeNode>();
        queue.add(root);
        //List<TreeNode> levelOrder = new ArrayList<TreeNode>();

        while (!queue.isEmpty()) {
            final TreeNode temp = queue.poll();
            if (temp == null) {
                break;
            }

            //levelOrder.add(temp);
            if (temp.left != null) {
                temp.left.level = temp.level + 1;
                queue.add(temp.left);
            }
            if (temp.right != null) {
                temp.right.level = temp.level + 1;
                queue.add(temp.right);
            }
        }
    }

    public List<TreeNode> getLevelOrder() {
        TreeNode tempRoot = root;
        //tempRoot.level = 0;
        final Queue<TreeNode> queue = new ArrayDeque<TreeNode>();
        queue.add(tempRoot);
        final List<TreeNode> levelOrder = new ArrayList<TreeNode>();

        while (!queue.isEmpty()) {
            final TreeNode temp = queue.poll();
            if (temp == null) {
                continue;
            }

            //System.out.println(temp.value);
            levelOrder.add(temp);

            /*
            if (temp.left == null && temp.right == null) {
                continue;
            }
            */

            /*
            if (temp.value == -1) {
                continue;
            }
            */

            if (temp.left != null) {
                //temp.left.level = temp.level + 1;
                queue.add(temp.left);
            }
            /*
            else {
                TreeNode dummy = new TreeNode(-1);
                dummy.level = temp.level + 1;
                queue.add(dummy);
            }
            */
            if (temp.right != null) {
                //temp.right.level = temp.level + 1;
                queue.add(temp.right);
            }
            /*
            else {

                TreeNode dummy = new TreeNode(-1);
                dummy.level = temp.level + 1;
                queue.add(dummy);
            }
            */
        }
        return levelOrder;
    }

    public void printByLevel() {
        System.out.println("Print Tree By Level");
        final List<TreeNode> levelOrder = getLevelOrder();
        int currentLevel = 0;
        for (TreeNode node : levelOrder) {
            if (currentLevel != node.level) {
                System.out.println();
                currentLevel = node.level;
            }
            System.out.print(
                    node.value + "(" + node.level + "," + node.noOfNodesInLeftSubtree + "," + node.noOfNodesInRightSubtree
                            + ")");
            System.out.print(" ");
        }
    }

}
