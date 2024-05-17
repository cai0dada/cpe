#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
template <class T>
string pre(T pb,T pe,T ib,T ie){
	if(pb-pe==0){return "";}
	auto root = *pb;
	int l = find(ib,ie,root)-ib;
	return pre(pb+1,pb+l+1,ib,ib+l)+pre(pb+l+1,pe,ib+l+1,ie)+root;
}
int main(){
	string preo,ino;
	while(cin>>preo>>ino){
		cout << pre(preo.begin(),preo.end(),ino.begin(),ino.end())<<endl;
	}


	return 0;
}