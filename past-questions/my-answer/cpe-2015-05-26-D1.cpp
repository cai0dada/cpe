#include <iostream>
#include <string>
using namespace std;
int main(){
	int a;
	string s;
	cin >> a;
	for(int i=0;i<=a;i++){
		
		getline(cin,s);
		if(i==0) continue;
		int sum = 0,ad =0;
		for(char c:s){
			if(c=='X'){
				ad=0;
			}else{
				ad++;
				sum +=ad;
			}
		}
		cout << sum << endl;
	}
	return 0;
}