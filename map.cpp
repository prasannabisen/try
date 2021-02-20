#include<iostream>
using namespace std;

struct Node{
	Node *left;
	int data;
	Node *right;
};

Node *createNode(int data){
	Node *node= new Node();
	node->data=data;
	return node;
}

Node *insert(Node *node,int data){
	if(node==NULL){
		node=createNode(data);	
	}
	else{
		if(data>node->data){
			node->right=insert(node->right,data);
		}
		else{
			node->left=insert(node->left,data);
		}
	}
	return node;
}

void print(Node *node)
{
	if(node==NULL){
		return;
	}
	cout<<node->data<<" ";
	print(node->left);
	print(node->right);
}

// Node *addp1(Node *node,int data,int rep){
// 	while(node->data==data){
		
// 	}
// }

int main(){
	Node *node;
	node=insert(node,15);
	node=insert(node,14);
	node=insert(node,13);
	node=insert(node,12);
	node=insert(node,11);
	print(node);
	// node=addP1(node,21,12);
	// print(node);
}