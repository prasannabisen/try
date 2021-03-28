#include<iostream>
using namespace std;

struct Node{
	int data;
	Node *right;
	Node *left;
};

Node *create(int data){
	Node *node=new Node();
	node->data=data;
	node->right=NULL;
	node->left=NULL;
	return node;
}

Node *insert(int data,Node *node ){
	if(node==NULL){
		Node *newNode=create(data);
		return newNode;
	}
	if(node->data<data){
		node->right=insert(data,node->right);
	}
	if(node->data>data){
		node->left=insert(data,node->left);
	}
	return node;
}

void print(Node *node){
	if(node==NULL){
		return;
	}
	print(node->left);
	cout<<node->data<<" ";
	print(node->right);

}

int main(){
	Node *node;
	node=insert(5,node);
	node=insert(3,node);
	node=insert(4,node);
	node=insert(2,node);
	node=insert(1,node);
	node=insert(6,node);
	node=insert(8,node);
	node=insert(7,node);
	node=insert(9,node);
	print(node);
}