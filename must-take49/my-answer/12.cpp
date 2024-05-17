#include <iostream>
using namespace std;
int main(){
  	string lines[100], line;
  	int count = 0, len[100], max = 0;
  	while(getline(cin, line)){
  		lines[count++] = line;
  		if(line.length() > max) max = line.length();
  		//cout << lines[count] = line << endl;		
  	}
  	//cout << max;
  	for(int j=0; j<max; j++){
  	//for(int i=count-1; i>0; i--){
  		//cout << len[i] << endl;
  		int gap = 0;
  		for(int i=count-1; i>=0; i--){
  			if(j >= lines[i].length()){
  				gap++;
  			} else {
  				for(gap;gap>0;gap--)
  					cout << " ";
  				cout << lines[i][j];
  			}
  		}
  		cout << endl;
  	}
}

