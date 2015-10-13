

package com.problems;

import com.tree.Tree;
import com.tree.TreeNode;

import java.util.Arrays;

/*
 * Created by gnavin on 10/12/15.
 */
public class InversionCount {

    public static void main(String[] args) {
        final int[] inp1 = new int[]{2, 4, 1, 3, 5};
        final int[] inp2 = new int[]{1, 20, 6, 4, 5};

        final InversionCount inversionCount = new InversionCount();
        inversionCount.solve(inp1);
        inversionCount.solve(inp2);
    }

    public void solve(final int[] inp) {
        final int[] bruteForceInp = Arrays.copyOf(inp, inp.length);
        final int[] divideAndConguerInp = Arrays.copyOf(inp, inp.length);
        final int[] bstInp = Arrays.copyOf(inp, inp.length);

        final int bruteForce = bruteForce(bruteForceInp);
        final int byDivideAndConquer = byDivideAndConquer(divideAndConguerInp, 0, divideAndConguerInp.length - 1);
        System.out.println("after sorting by divide and conquer(merge sort)");
        print(inp);

        final int byBST = byBST(bstInp);

        System.out.println("inversion count bruteForce : " + bruteForce);
        System.out.println("inversion count byDivideAndConquer : " + byDivideAndConquer);
        System.out.println("inversion count byBST : " + byBST);

        if (byDivideAndConquer == bruteForce) {
            System.out.println("Divide and Conquer Accepted");
        } else {
            System.out.println("Divide and Conquer Wrong Answer");
        }

        if (byBST == bruteForce) {
            System.out.println("BST Accepted");
        } else {
            System.out.println("BST Wrong Answer");
        }
    }

    public int bruteForce(final int[] inp) {
        int cnt = 0;
        for (int i = 0; i < inp.length; i++) {
            for (int j = i + 1; j < inp.length; j++) {
                if (inp[i] > inp[j]) {
                    cnt++;
                }
            }
        }
        return cnt;
    }

    public int byDivideAndConquer(int[] inp, int s, int e) {

        //System.out.println("s : " + s + " e : " + e + "  e-s : " + (e-s));

        //print(inp);

        if (e - s <= 0) {
            return 0;
        }

        final int m = s + (e - s) / 2;
        int lc = byDivideAndConquer(inp, s, m);
        int rc = byDivideAndConquer(inp, m + 1, e);

        int i = s;
        int j = m + 1;

        int out[] = new int[e - s + 1];
        int k = 0;

        int cnt = 0;
        while (i <= m && j <= e) {
            //System.out.println("i = " + i + " j = " + j + " m : " + m + " e : " + e);
            if (i <= m && inp[i] < inp[j]) {
                out[k++] = inp[i];
                i++;
            } else if (j <= e) {
                cnt += (m - i) + 1;
                out[k++] = inp[j];
                j++;
            }
        }

        while (i <= m) {
            out[k++] = inp[i];
            i++;
        }

        while (j <= e) {
            out[k++] = inp[j];
            j++;
        }

        int kk = s;
        for (int val : out) {
            inp[kk++] = val;
        }

        //System.out.println("after sort out");
        //print(out);

        //System.out.println("after copy inp");
        //print(inp);

        //System.out.println("s : " + s + " e : " + e + "  e-s : " + (e-s));

        return lc + rc + cnt;
    }

    private void print(int[] inp) {
        for (int val : inp) {
            System.out.print(val + " ");
        }
        System.out.println();
    }

    public int byBST(final int[] inp) {
        TreeNode root = new TreeNode(inp[0]);
        int cnt = 0;
        for (int i = 1; i < inp.length; i++) {
            int c = insertNodeAndGetNumOfNodeGreaterThanCurrent(root, new TreeNode(inp[i]));
            //System.out.println("value : " + inp[i] + " inv : " + c);
            cnt += c;
            //System.out.println(root);
        }
        //System.out.println("inversion count byBST : " + cnt);
        Tree tree = new Tree(root);
        tree.printByLevel();
        return cnt;
    }

    public int insertNodeAndGetNumOfNodeGreaterThanCurrent(TreeNode root, TreeNode node) {
        /*System.out.println(root);
        System.out.println(node.value);
        if (root == null) {
            root = node;
            return;
        }*/

        if (node.value < root.value) {
            root.noOfNodesInLeftSubtree++;
            if (root.left == null) {
                root.left = node;
                //System.out.println("root.left == null root.value : " + root.value + " node.value : " + node.value + " " + node.noOfNodesInRightSubtree);
                return root.noOfNodesInRightSubtree + 1;
            } else {
                int cnt = insertNodeAndGetNumOfNodeGreaterThanCurrent(root.left, node);
                cnt += root.noOfNodesInRightSubtree + 1;
                //System.out.println("root.value : " + root.value + " node.value : " + node.value + " " + node.noOfNodesInRightSubtree);
                return cnt;
            }
        } else {
            root.noOfNodesInRightSubtree++;
            if (root.right == null) {
                root.right = node;
            } else {
                return insertNodeAndGetNumOfNodeGreaterThanCurrent(root.right, node);
            }
        }
        return 0;
    }

}
