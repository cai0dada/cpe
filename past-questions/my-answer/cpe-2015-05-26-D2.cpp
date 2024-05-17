#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int a,b,cas=0;
	while(cin>>a>>b && (a || b)){
		int n[10000],c[10000];
		for(int i=0;i<a;i++)
			cin >> n[i];
		for(int i=0;i<b;i++)
			cin >> c[i];
		sort(n,n+a);
		cout << "CASE# "<<++cas<<":"<<endl;
		for(int i=0;i<b;i++){
			bool t=true;
			for(int j=0;j<a;j++){
				if(c[i]== n[j]){
					cout << c[i] <<" found at "<<j+1<<endl;
					t = false;
					break;
				}
			}
			
			if(t)cout <<c[i]<<" not found"<<endl;
		}
		
	}

	return 0;
}