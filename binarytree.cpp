#include<iostream>
using namespace std;
struct node
{
	node *left,*right;
	int data;
};
node *inorder(node *root)
{
	if(root==NULL)
		return root;
	else
	{	
		root->left=inorder(root->left);
		cout<<root->data<<"\n";
		root->right=inorder(root->right);
		return root;
	}
}
node *preorder(node *root)
{
	if(root==NULL)
		return root;
	else
	{
		cout<<root->data<<"\n";
		root->left=preorder(root->left);
		root->right=preorder(root->right);
		return root;		
	}
}
node *postorder(node *root)
{
	if(root==NULL)
		return root;
	else
	{
		root->left=postorder(root->left);
		root->right=postorder(root->right);
		cout<<root->data<<"\n";	
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
node* deletion(node *root,int no)
{
	if(root==NULL)
	{
		cout<<"Not found";
	}
	else
	{
		if(root->data>no)
		{
			root->right=deletion(root->right,no);
		}
		else if(root->data<no)
		{
			root->left=deletion(root->left,no);
		}
		else
			
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
	cout<<"Inorder\n";
	inorder(root);
	cout<<"Preorder\n";
	preorder(root);
	cout<<"Postorder\n";
	postorder(root);
	return 0;
}
