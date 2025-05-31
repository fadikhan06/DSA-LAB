//#include <iostream>
//#include <conio.h>
//using namespace std;
////#define numnodes 500
////struct treenode
////{
////	int info;
////int left,right,father};
////treenode bt[numnodes];
////
////class binarytree {
////	int root ;
////	int nextfree;
////public:
////	binarytree()
////	{
////		root = -1;
////		nextfree = 0;
////	}
////	int createnode(int info, int parent = -1)
////	{
////		if (nextfree >= numnodes)return -1;
////		bt[nextfree] = { info,-1,-1,parent };
////		return nextfree;
////	}
////	int createroot(int info)
////	{
////		if (root != -1)return -1;
////		root = createnode(info);
////		return root;
////	}
////	int insertleft(int parentindex, int info)
////	{
////		if (bt[parentindex].left != -1)return -1;
////		int index = createnode(info, parentindex);
////		bt[parentindex].left = index;
////		return index;
////
////	}
////	int insertright(int parentindex, int info)
////	{
////		if (bt[parentindex].right != -1)return -1;
////		int index = createnode(info, parentindex);
////		bt[parentindex].right = index;
////		return index;
////
////	}
////	bool isempty()const {
////		return root == -1;
////	}
////	int getleftchild(int index)const
////	{
////		return bt[index].left;
////	}
////	int getrighttchild(int index)const
////	{
////		return bt[index].right;
////	}
////	int getdata(int index)const
////	{
////		return bt[index].info;
////	}
////	int getroot()const
////	{
////		return root;
////	}
////};
//
//template <typename T>
//struct TreeNode {
//    T info;
//    TreeNode* left;
//    TreeNode* right;
//
//    TreeNode(T value) : info(value), left(nullptr), right(nullptr) {}
//}; 
//
//
//
//template <typename T>
//class BinaryTree {
//private:
//    TreeNode<T>* root;
//
//    void pretrav(TreeNode<T>* node) {
//        if (node != nullptr) {
//            cout << node->info << " ";
//            pretrav(node->left);
//            pretrav(node->right);
//        }
//    }
//
//    void intrav(TreeNode<T>* node) {
//        if (node != nullptr) {
//            intrav(node->left);
//            cout << node->info << " ";
//            intrav(node->right);
//        }
//    }
//
//    void posttrav(TreeNode<T>* node) {
//        if (node != nullptr) {
//            posttrav(node->left);
//            posttrav(node->right);
//            cout << node->info << " ";
//        }
//    }
//
//    void destroy(TreeNode<T>* node) {
//        if (node != nullptr) {
//            destroy(node->left);
//            destroy(node->right);
//            delete node;
//        }
//    }
//
//public:
//    BinaryTree() : root(nullptr) {}
//
//    ~BinaryTree() {
//        destroy(root);
//    }
//
//    TreeNode<T>* getRoot() {
//        return root;
//    }
//
//    void createRoot(T value) {
//        if (root == nullptr)
//            root = new TreeNode<T>(value);
//    }
//
//    TreeNode<T>* insertLeft(TreeNode<T>* parent, T value) {
//        if (parent->left == nullptr) {
//            parent->left = new TreeNode<T>(value);
//            return parent->left;
//        }
//        return nullptr;
//    }
//
//    TreeNode<T>* insertRight(TreeNode<T>* parent, T value) {
//        if (parent->right == nullptr) {
//            parent->right = new TreeNode<T>(value);
//            return parent->right;
//        }
//        return nullptr;
//    }
//
//    void preOrder() {
//        pretrav(root);
//        cout << endl;
//    }
//
//    void inOrder() {
//        intrav(root);
//        cout << endl;
//    }
//
//    void postOrder() {
//        posttrav(root);
//        cout << endl;
//    }