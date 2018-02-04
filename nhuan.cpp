#include <iostream>
using namespace std;

int main()
{
	int y;
	cin>>y;
	if (((y % 4 == 0) && (y % 100 != 0) || (y % 400 == 0)) && (y % 900 == 200) || (y % 900 == 600))
	cout<<"la nam nhuan\n";
	else
	cout<<"ko la nam nhuan\n";
	return 0;
}