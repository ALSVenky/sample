#include<bits/stdc++.h>
using namespace std;
struct node
{
	int data;
	struct node *left;
	struct node *right;
};
node* requiredTree(node *root, int min, int max){
    if (root == NULL)
    	return NULL;
    root->left = requiredTree(root->left, min, max);
    root->right = requiredTree(root->right, min, max);
    if (root->data < min){
    	node *rChild = root->right;
    	delete root;
    	return rChild;
    }
    if (root->data > max){
    	node *lChild = root->left;
    	delete root;
    	return lChild;
}
return root;
}
node* newNode(int num){
	node* temp = new node;
	temp->data = num;
	temp->left = temp->right = NULL;
	return temp;
}
node* insert(node* root, int data){
	if (root == NULL)
	return newNode(data);
	if (root->data > data)
	root->left = insert(root->left, data);
	else
	root->right = insert(root->right, data);
	return root;
}
void inorderTraversal(node* root){
	if (root){
		inorderTraversal( root->left );
		cout << root->data << " ";
		inorderTraversal( root->right );
	}
}
int main(){
	node* root = NULL;
	root = insert(root, 6);
	root = insert(root, -1);
	root = insert(root, 14);
	root = insert(root, -8);
	root = insert(root, 0);
	root = insert(root, 13);
	root = insert(root, 7);
	cout << "Inorder traversal of the given tree is: ";
	inorderTraversal(root);
	int max=13,min=-1;
	root = requiredTree(root, min, max);
	cout << "\nInorder traversal of the modified tree is: ";
	inorderTraversal(root);
	return 0;
}
