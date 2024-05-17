#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	char table[500][500]={};
	cin>>t;
	while(t--){
		int m,n,C;
		cin>>m>>n>>C;
		cout<<m<<" "<<n<<" "<<C<<endl;
		for(int i=0;i<m;i++){
			for(int j=0;j<n;j++){
				cin>>table[i][j];
			}
		}
		while(C--){
			int r,c;
			cin>>r>>c;
			int k=1,ok=1,count=0;
			char tmp = table[r][c];
			while(ok){
				for(int i=r-k;i<=r+k;i++){
					for(int j=c-k;j<=c+k;j++){
						if(tmp != table[i][j]){
							ok = 0;
							break;
						}
					}
				}	
				k++;
				count++;
			}
			cout<<1+(count-1)*2<<endl;
		}
	}
}