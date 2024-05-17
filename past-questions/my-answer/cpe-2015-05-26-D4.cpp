#include <iostream>
#include <queue>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
	int t,n,e,a,r=0;
	while(cin >> t && t!=0){
	
	cout << "Scenario #"<<++r<<endl;
	vector<vector<int>> row(t,vector<int>(1000));
	
	for(int i=0;i<t;i++){
		cin >> n;
		for(int j=0;j<n;j++)
			cin >> row[i][j];
	}

	queue<int> queues[t+1];
	string s;
	vector<int> vec;

	while(cin>>s && s !="STOP"){
		
		bool br = false;
		if(s=="ENQUEUE"){
			cin >> a;
			//cout <<"a:"<< a<<" , ";
			for(int i=0;i<t;i++){
			
				for(int j=0;j<row[i].size();j++){
					if(a == row[i][j]){
					//	cout <<"i:"<<i<<" ";
						queues[i].push(a);					
						vec.push_back(i);
					/*	cout <<"vec:";
						for(int h=0;h<vec.size();h++)
							cout <<	" "<<vec[h];
						cout << endl;*/					
						br = true;
						break;
					}	
				}
				if(br)break;
			}
			if(!br){
				queues[t].push(a);
				
				vec.push_back(t);
			}
		}
		if(s=="DEQUEUE"){
			int m;
			for(int i=0;i<vec.size();i++){
				if(vec[i]==-1)continue;
				else{
					cout<<queues[vec[i]].front()<<endl;
					queues[vec[i]].pop();
				
						if(queues[vec[i]].empty()==true){
							m = vec[i];
							for(int h=0;h<vec.size();h++){
								if(vec[h]==m)vec[h]=-1;
							}
						}
						
						
					break;
				}
				
			}
		}
	
	
	
}
cout <<endl;}
	return 0;
}