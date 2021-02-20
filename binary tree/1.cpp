#include<iostream>
using namespace std;

struct Node{
	int data;
	Node *left;
	Node *right;
};

Node *buildtree(int data){
	Node *node=new Node();
	node->data=data;
	node->left=NULL;
	node->right=NULL;
	return node;
}

Node *insert(Node *node,int data){
	if(node==NULL){
		node=buildtree(data);
		return node;
	}
	if(node->data<data){
		node->right=insert(node->right,data);
	}
	else{
		node->left=insert(node->left,data);
	}
	return node;
}

void printtree(Node *node){
	if(node==NULL){
		return;
	}
	printtree(node->left);
	cout<<node->data<<" ";
	printtree(node->right);
	return;
}

int main(){
	Node *node;
	node=insert(node,5);
	node=insert(node,6);
	node=insert(node,4);
	node=insert(node,3);
	printtree(node);
}