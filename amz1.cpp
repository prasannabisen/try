
bool match(node1,node2){
	if(node1->value!=node2->value){
		return 0;
	}
	if(node2==NULL){
		return 1;
	}
	match(node->right,node2->right);
	match(node->left,node2->left);
	return 1;
}

while(node1!=NULL){
if(node2==a){
	break;
}
else{
		if(a>node1->value){
			node1=node1->right;
		}
		else{
			node1=node1->left;
		}
	}
}
if(match(node1,node2)){
return -1;
}
return 1;