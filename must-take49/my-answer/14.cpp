#include <iostream>
#include <string>
using namespace std;
int main(){
int a,a1[12]={31,28,31,30,31,30,31,31,30,31,30,31},m,d;
string dayy[7]={"Saturday","Sunday","Monday","Tuesday","Wednesday","Thursday","Friday"};
	cin >>a;
	while(cin >>m>>d){
	
		if(m!=1){
			for(int i=0;i<m-1;i++){
				d = d +a1[i];
			}
		}
		cout << dayy[(d-1)%7]<<endl;
		
	
	}

	return 0;
} 