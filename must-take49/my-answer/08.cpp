#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int alpha[26],alpha1[26];
void toupp(string &s){
	for(char &c:s){
		if(c>='a'&&c<='z'){
			c = toupper(c);
		}
	}
}
void countalpha(string ss){
	for(char cc:ss){
		if(cc>='A'&&cc<='Z'){
			alpha[cc-'A']++;
		}
	}
}
int main(){
	int a;
	string sentence;
	cin >>a;
	for(int i=0;i<26;i++)
		alpha[i]=0;
		
		
	for(int i=0;i<=a;i++){
		getline(cin,sentence);
		toupp(sentence);
//		cout <<sentence<<endl;
		
		countalpha(sentence);
	}
	
//	for(int i=0;i<26;i++)
//		cout <<"asdfadfad"<<alpha[i]<<endl;
	
	for(int i=0;i<26;i++)
		alpha1[i]=alpha[i];
		
	sort(alpha1,alpha1+26);
	
	for(int i=25;i>=0;i--){
		if(alpha1[i]==0)break;
		for(int j=0;j<26;j++){
			if(alpha1[i]==alpha[j]){
				char A='A';
				A = A+j;
				cout << A<<" "<<alpha[j]<<endl;
				alpha[j]=0;
			}
		}
	}

	return 0;
}