#include <iostream>
#include <string>
using namespace std;

int main(){
	string s;
	int i=1;
	while(getline(cin,s)){
		for(char a:s){
			if(a=='\"'){
				(i%2)?cout<<"``":cout<<"''";
				i++;
			}else cout<<a;
		}
		
		cout<<endl;
	}


	return 0;
}