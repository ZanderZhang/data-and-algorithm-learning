#include <iostream>
using namespace std;

int max(int x, int y)
{
	return x>y?x:y;
}
int main()
{
	int a,b,m;
	cin>>a>>b;
	m=max(a,b);
	cout<<"max="<<m<<"\n";
	return 0;
}
