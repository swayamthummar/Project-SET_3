#include<iostream>
using namespace std;
int main()
{
	char str;
	cout<<"Enter character=";
	cin>>str;
	if(str>='0' && str<='9')
	{
		cout<<"the string is numeric!!";
	}
	else
	{
		cout<<"the string is not numeric!!";
	}
	return 0;
}
