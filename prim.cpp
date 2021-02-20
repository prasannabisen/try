#include<bits/stdc++.h>
using namespace std;
class Node{
public:
	int data;
	Node *next=NULL;
};

Node *head=NULL;

Node create(int data){
	Node *node=new Node();
	node->data=data;
	return *node;
}

void add(int data){
	Node *temp;
	if(head==NULL){
		*head=create(data);
	}
	else{
		*temp=create(data);
		temp->next=head;
		head=temp;
	}
}

void print(Node *head){
	Node *temp=head;
	while(temp!=NULL){
		cout<<temp->data<<"\n";
		temp=temp->next;
	}
}

int main(){
	add(5);
	add(4);
	add(3);
	add(2);
	add(1);
	print(head);
}