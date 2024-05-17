#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	string s1,s2;
	while(getline(cin,s1) && getline(cin,s2)){
		int i=0, a_len, b_len;
		while(i<26){
			a_len = count(s1.begin(), s1.end(), 'a'+i);
			b_len = count(s2.begin(), s2.end(), 'a'+i);
			cout << string(min(a_len, b_len), 'a'+i);
			i++;
		}
		cout << endl;
	}
}