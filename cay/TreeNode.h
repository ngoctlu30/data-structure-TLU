#ifndef TREENODE_H
#define TREENODE_H
template<class T>
struct TreeNode
{
	T value;
	TreeNode<T> *l;
	TreeNode<T> *r;
};
#endif