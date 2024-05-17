#include <iostream>
#include <string>
using namespace std;
int main(){
	int t,m,n,q,r,c,ans=0;
	char h;
	cin >> t;
	string s[200];
	for(int i=0;i<t;i++){
		cin >> m >> n >> q;
		for(int j=0;j<m;j++)
			cin>>s[j];
		cout << m<<" "<<n<<" "<<q<<endl;
		for(int k=0;k<q;k++){
			cin >> r >> c;
			
			h = s[r][c];
			bool sq = true;
			
		for(int l=0;l<(m>n)?m:n;l++){
			
			if(r - l<0 || r+l>m || c-l<0 || c+l>n)
				break;
				
			for(int o=0;o<=l;o++){
				for(int p = 0;p<=l;p++){
					if(s[r-o][c-p]!=h||s[r-o][c+p]!=h||s[r+o][c-p]!=h||s[r+o][c+p]!=h){
						sq = false;
						break;
					}
				}
				
			}
			if(sq)ans = l*2+1;
			
			
		}
		cout << ans<<endl;
			
		}
			
	}



	return 0;
}