#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	int n,i,j,l;
	cin>>n;
	for (i = 1;i <= n;i++)
	{
		cout<<"X ";
	}
	for (j =1; j <= n;j++)
	{
		cout<<endl<<"X ";
	}
	for (l = 1;l <= n-1;l++)
	{
		cout<<"X ";
	}
	return 0;
}
