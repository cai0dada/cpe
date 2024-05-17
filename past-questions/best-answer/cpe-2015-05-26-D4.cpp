#include<bits/stdc++.h>
using namespace std;
int b[1000000];
int main(){
 int n,p=0;
 while(cin>>n&&n){
   cout<<"Scenario #"<<++p<<endl;
   queue<int>a;
   queue<int> t[n+1];
   while(n--){
     int c;
     cin>>c;
     while(c--){
       int k;
       cin>>k;
       b[k]=n+1;
     }
   }
   string s;
   while(cin>>s){
     if(s[0]=='E'){
       int u;cin>>u;
       if(t[b[u]].size()==0)a.push(b[u]);
       t[b[u]].push(u);
       }
     if(s[0]=='D'){
       int y=a.front();
       cout<<t[y].front()<<endl;
       t[y].pop();
       if(t[y].size()==0)a.pop();
     }
     if(s[0]=='S')break;
   }
   cout<<endl;
   }
 }