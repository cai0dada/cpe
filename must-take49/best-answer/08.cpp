#include <iostream>
using namespace std;
int x[256],l;
int main()
{
	char n;
	while(cin>>n)
	{
		l++;
		x[toupper(n)]++;
	}
	while(--l)
	{
		for(n='A';n<='Z';n++)
		{
			if(x[n]==l)cout<<n<<" "<<x[n]<<endl;
		}
	}
}