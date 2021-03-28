#include<bits/stdc++.h>
using namespace std;
int main(){
	unordered_map<string,int>um;
	//insert by make_pair
	um.insert(make_pair("mango",3));
	//insert by pair
	pair<string,int>p;
	p.first="Apple";
	p.second=4;
	um.insert(p);

	//insert by array 
	// um["Banana"]=5;
	// for (auto a:um){
	// 	cout<<a.first<<" "<<a.second<<"\n";
	// }
	// for()
	auto a=um.find("mango");
	cout<<a->second;
}