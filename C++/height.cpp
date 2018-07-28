#include<iostream>
using namespace std;
struct node
{
	node *left,*right;
	int data,ht;
};
node *height(node *root)
{
	if(root->left==NULL && root->right==NULL)
	{
		root->ht=1;
	}
	else if(root->right!=NULL && root->left==NULL)  
	{
		root->ht=root->right->ht+1;
	}
	else if(root->left!=NULL && root->right==NULL)
	{	
		root->ht=root->left->ht+1;
	}
	else if(root->left!=NULL && root->right==NULL)
	{	
		root->ht=root->left->ht+1;
	}
	else if(root->right!=NULL && root->left==NULL)
	{	
		root->ht=root->right->ht+1;
	}
	else if(root->left->ht > root->right->ht)
	{	
		root->ht=root->left->ht+1;
	}
	else if(root->right->ht > root->left->ht)
	{	
		root->ht=root->right->ht+1;
	}
	else
	{	
		root->ht=root->right->ht+1;
	}
	return root;
}
node *postorder(node *root)
{
	if(root==NULL)
		return root;
	else
	{
		root->left=postorder(root->left);
		root->right=postorder(root->right);
		root=height(root);	
		return root;		
	}
}
node* insert(node *root,int no)
{
	if(root==NULL)
	{
		node *temp=new node();
		temp->data=no;
		temp->left=NULL;
		temp->right=NULL;
		root=temp;
		return root;
	}
	else
	{
		if(root->data>no)
		{
			root->left=insert(root->left,no);
		}
		else
		{
			root->right=insert(root->right,no);
		}
		return root;
	}
	
}
node *inorder(node *root)
{
	if(root==NULL)
		return root;
	else
	{	
		root->left=inorder(root->left);
		root->right=inorder(root->right);
		cout<<root->data<<"\n";
		return root;
	}
}
int main()
{
	node *root=NULL;
	int n;
	for(int i=0;i<7;i++)
	{
		cin>>n;
		root=insert(root,n);
	}
	postorder(root);
	cout<<root->ht;	
	return 0;
}
