#include <iostream>
#include <string>

using namespace std;


string g(string s){
	int h=0;
	for(char a:s){
		h+=a-'0';
	}
	return to_string(h);
}

int main(){
	string s;
	while(cin>>s){
		if(s=="0"){break;}
		for(;;){
			if(s.length()==1)break;
			s=g(s);
		}
		cout << s<<endl;
	}

	return 0;
}