#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main(){
	int s,n,i;
	double p,q,answer;
	cin >> s;
	for(int j=0;j<s;j++){
		cin>>n>>p>>i;
		q = 1-p;
		answer = round(( p *(pow(q,i-1)/(1-pow(q,n))))*10000)/10000;
		if(p ==0)cout <<"0.0000"<<endl;
		else
		 (answer)? cout <<fixed <<setprecision(4)<< answer<<endl:cout << "0.0000"<<endl;
	}
	return 0;
}