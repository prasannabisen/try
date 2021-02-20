#include<iostream>
using namespace std;
struct Node{
	int data;
	Node *next;
};

Node *head=NULL;
Node *createNode(int a){
	Node *node=new Node();
	node->data=a;
	node->next=NULL;
	return node;
}
Node *insert(int a){
	Node *n;
	if(head==NULL){
		n=createNode(a);
		head=n;
	}
	else{
		n=createNode(a);
		n->next=head;
		head=n;
	}
	return head;
}
void print(Node *n){
	while(n!=NULL){
		cout<<n->data<<" ";
		n=n->next;
	}
}
int main(){
	Node *node;
	node=insert(5);
	node=insert(4);
	node=insert(3);
	node=insert(2);
	node=insert(1);
	print(node);
}