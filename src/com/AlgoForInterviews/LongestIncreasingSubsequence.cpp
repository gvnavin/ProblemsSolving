/*
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
	vector<int> longestIncreasingSubsequence(vector<int> seq) {

		if (seq.empty()) return vector<int>();

		vector<int> longestSequence;
		for (int i=0; i<seq.size(); ++i) {
			int insertPosition = binarySearch(longestSequence, seq[i]);
			if (insertPosition == longestSequence.size()) {
				longestSequence.push_back(seq[i]);
			} else {
				longestSequence[insertPosition] = seq[i];
			}
		}
		return longestSequence;
	}

	int binarySearch(vector<int> &longestSequence, int target) {
		int low = 0;
		int high = longestSequence.size()-1;
		while (low < high) {
			int mid = low + (high-low)/2;
			if (longestSequence[mid] == target) {
				return mid;
			}
			else if (target <= longestSequence[mid]) {
				high = mid;
			} else if (target > longestSequence[mid]) {
				low = mid+1;
			}
		}
		if (low < longestSequence.size() && target <= longestSequence[low]) return low;
		return longestSequence.size();
	}
};

int main() {
	int seqArr[] = {0, 8, 4, 12, 2, 10, 6, 14, 1, 9, 5, 13, 3, 11, 7, 15};
	vector<int> seq(seqArr, seqArr+sizeof(seqArr)/sizeof(int));
	vector<int> incrSeq = Solution().longestIncreasingSubsequence(seq);
	system("pause");
}*/

#include<iostream>
#include<map>
#include<string>
#include<vector>
#include<queue>
#include<stack>
#include<math.h>
#include<stdlib.h>
using namespace std;
template <class comparable>
class avltree
{
 public:
	struct avlnode
	{
		comparable element;
        avlnode *left;
	    avlnode *right;
		int height;              
	};
    avlnode *root;
	avltree()
	{
		root=NULL;         
    }         
    int height(avlnode *t)const;
    void insert(const comparable &x, avlnode *&t);
	void rotatewithleftchild(avlnode *&k2);
	void rotatewithrightchild(avlnode *&k2);
	void doublewithleftchild(avlnode *&k3);
	void doublewithrightchild(avlnode *&k3);
	void print(avlnode *);
	void del(const comparable &x,avlnode *&t);
	void check(avlnode *&t);
	comparable findmin(avlnode *p) const;

};
template <class comparable>
comparable avltree<comparable>::findmin(avlnode *p) const
{
     while(p->left!=NULL) p=p->left;
     return p->element;                      
}
template<class comparable>
int avltree<comparable>::height(avlnode *t) const
{
	return t==NULL?-1:t->height;
}
template<class comparable>
void avltree<comparable>::insert(const comparable &x,avlnode *&t)
{
	 if(t==NULL)
	{
		t=new avlnode;
		t->left=t->right=NULL;
		t->element=x;                                      
	}     
	else if(x<t->element)
	{
		insert(x,t->left);
		//cout<<"Height="<<abs(height(t->right)-height(t->left))<<endl;
		if(abs(height(t->right)-height(t->left))==2)
		{
			if(x<t->left->element)
				rotatewithleftchild(t);
			else
				doublewithleftchild(t);
		}     
	}
	else if(x>t->element)
	{
		insert(x,t->right);
		//cout<<"Height="<<abs(height(t->right)-height(t->left))<<endl;
		if(abs(height(t->right)-height(t->left))==2)
		{
			if(x>t->right->element)
				rotatewithrightchild(t);
			else
				doublewithrightchild(t);
		}     
	}
	t->height=max(height(t->left),height(t->right))+1; 
}
template<class comparable>
void avltree<comparable>::rotatewithleftchild(avlnode *&k2)
{
	avlnode *k1=k2->left;
	k2->left=k1->right;
	k1->right=k2;
	k2->height=max(height(k2->left),height(k2->right))+1;
	k1->height=max(height(k1->left),height(k1->right))+1;                                                     
	k2=k1;
}
template<class comparable>
void avltree<comparable>::doublewithleftchild(avlnode *&k3)
{
	rotatewithrightchild(k3->left);
	rotatewithleftchild(k3);     
}
template<class comparable>
void avltree<comparable>::rotatewithrightchild(avlnode *&k2)
{
	avlnode *k1=k2->right;
	k2->right=k1->left;
	k1->left=k2;
	k2->height=max(height(k2->left),height(k2->right))+1;
	k1->height=max(height(k1->left),height(k1->right))+1;                                                     
	k2=k1;
}
template<class comparable>
void avltree<comparable>::doublewithrightchild(avlnode *&k3)
{
	rotatewithleftchild(k3->right);
	rotatewithrightchild(k3);     
}
template <class comparable> 
void avltree<comparable>::print(avlnode *t)
{
	if(t==NULL)
		return;
	cout<<t->element<<endl;
	print(t->left);
	print(t->right);         
}
template<class comparable>
void avltree<comparable>::check(avlnode *&t)
{
	int hleft=height(t->left);
	int hright=height(t->right);
	if(abs(hleft-hright)==2)
	{
		if(hright>hleft)
		{
			if(height(t->right->left)>height(t->right->right))
				doublewithrightchild(t);
			else
				rotatewithrightchild(t);
		}
		else
		{
			if(height(t->left->left)>height(t->left->right))
				rotatewithleftchild(t);
			else
				doublewithleftchild(t);
		}
	}
	t->height=max(height(t->left),height(t->right))+1;
}
template<class comparable>
void avltree<comparable>::del(const comparable &x,avlnode *&t)
{
	if(t==NULL)
    {
		cout<<"Element not found"<<endl;
        return;
    }
    if(x<t->element)
	{
        del(x,t->left);
		check(t);
	}
	else if(x>t->element)
	{
		del(x,t->right);
		check(t);
	}
	else if(t->left!=NULL&&t->right!=NULL)
    {
        t->element=findmin(t->right);
        del(t->element,t->right);
		check(t);
    }
    else 
    {
        avlnode *temp;
        temp=t;
        t=(t->left==NULL?t->right:t->left);
		delete temp;     
    }
}
int main()
{
	avltree<int> tree;
	tree.insert(3,tree.root);
	tree.insert(2,tree.root);
	tree.insert(1,tree.root);
	tree.insert(4,tree.root);
	tree.insert(5,tree.root);
	tree.insert(6,tree.root);
	tree.insert(7,tree.root);
	tree.insert(16,tree.root);
	tree.insert(15,tree.root);
	tree.insert(14,tree.root);
	tree.insert(13,tree.root);
	tree.insert(12,tree.root);
	tree.insert(11,tree.root);
	tree.insert(10,tree.root);
	tree.insert(9,tree.root);
	tree.insert(8,tree.root);
	tree.print(tree.root);
	cout<<"root="<<tree.root->element<<endl;
	tree.del(7,tree.root);
	tree.print(tree.root);
	cout<<"root="<<tree.root->element<<endl;
	return 0;     
}
