#include <iostream>
using namespace std;
int main(){
	long long int s,d;
	while(cin>>s>>d){
		long long int p,day=d,j;
		for(int i = s;i<=d;i++){
			day -= i;
			j = i;
			if(day <=0){break;}
		}		
		(s>d)?cout<<s<<endl:cout << j <<endl;			
	}


	return 0;
}