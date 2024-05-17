#include <iostream>
using namespace std;
int main(){
	int a;
	while(cin >> a,a) cout << (a-1)%9+1 << endl;
}
//(100a+10b+c)%9 = (99a + a + 9b + b + c)%9 = 99a%9 + a%9 + 9b%9 + b%9 + c%9 = (a+b+c)%9
//但要注意如果结果为 0，则数根应该是 9，而不是 0。
//所以我们可以通过(n-1)%9+1来得到n數的根