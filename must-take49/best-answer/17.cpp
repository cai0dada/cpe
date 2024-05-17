#include<iostream>
using namespace std;
int main(){
long long day,n;
while(cin>>n>>day){
while(n<day){
day-=n;
n++;
}
cout<<n<<endl;
}
}