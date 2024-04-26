//uva409
#include <string>
#include <iostream>
#include <algorithm>
#include <sstream>
using namespace::std;
int k,e,ccount[21],arr1[21],uu=1;
string word[20],sentence[21],sentence1[21],s;
void getword(int a){
	for(int i=0;i<a;i++){
		cin>>word[i];
	}
}
void getsentence(int a){
	for(int i=0;i<=a;i++)
		getline(cin,sentence[i]);
}
void delpunct(){
	for(int i=1;i<=e;i++){		
		for(char& f:sentence[i]){
			if(!((f>='a'&&f<='z')||(f>='A'&&f<='Z'))){f=' ';}
		}
	}
}
int big_num(int arr[]){
	sort(arr,arr+21);
	return arr[20];
}
int main() {
	while(cin>>k>>e){
		for(int i=0;i<=20;i++)
			ccount[i]=0;
		getword(k);
		getsentence(e);
		for(int i=0;i<21;i++)
			sentence1[i]=sentence[i];
		delpunct();
		for(int i=1;i<=e;i++){
			istringstream iss(sentence[i]);
			while(iss>>s){
				for(int j=0;j<k;j++){
					if(word[j] == s){ccount[i]++;}
					else{	
						for(char& p:word[j]){
							p=toupper(p);
						}
						if(word[j] == s){ccount[i]++;}
						for(char& p:word[j]){
							p=tolower(p);
						}
					}
				}
			}
		}
		for(int i=1;i<=20;i++)
			arr1[i] = ccount[i];
		
		int big=big_num(arr1);
		cout<<"Excuse Set #"<<uu++<<endl;
		for(int i=1;i<=e;i++){
			if(ccount[i]==big){cout<<sentence1[i]<<endl;}
		}
		cout<<endl;
	}
	return 0;
}