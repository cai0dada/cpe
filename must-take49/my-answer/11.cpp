#include <iostream>
using namespace std;

int main(){
	string s1,s2;
	
	while(getline(cin,s1)&&getline(cin,s2)){
		if(s1=="\r\n"||s2=="\r\n"){cout<<endl;}
		int h[256]={0};
		for(char a:s1){
			for(char& b:s2){
				if(a==b){
					h[b]++;
					b=' ';
					break;
				}
			}
		}
		for(char i='a';i<='z';i++){
			if(h[i]!=0){
				for(int j=0;j<h[i];j++)
					cout<<i;
			}
		}
		cout<<endl;
	}
	return 0;
}