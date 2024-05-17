#include<iostream>
#include<set>
using namespace std;
int main(){
int a,n,b;
while(cin>>n){
	set<int>tank;
	cin>>a;
	for(int i=1;i<n;i++){
		cin>>b;
		int d=abs(a-b);
		if(d && d<n)tank.insert(d);
		a=b;
	}
	(tank.size()==n-1)?cout<<"Jolly":"Not jolly";
	cout<<endl;
}
}