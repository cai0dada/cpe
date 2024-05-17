#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
	
	int n,num[3000],check[3000];
	while(cin>>n){
		bool h=true;
		for(int i=0;i<n;i++)
			cin>>num[i];
		for(int i=0;i<n-1;i++)
			check[i]=abs(num[i+1]-num[i]);
		sort(check,check+(n-1));
		
		for(int i=0;i<n-1;i++)
			if(check[i]!=(i+1)){h=false;}
			
		(h)?cout<<"Jolly"<<endl:cout<<"Not jolly"<<endl;
	}
	return 0;
}