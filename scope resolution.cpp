#include<iostream>
#include<conio.h>
using namespace std;
int a=5;
int main()
{
	 int a=7;
	 cout<<"\n the global value is ="<<::a;
	 cout<<"\n the local value is ="<<a;
	 return 0;
}
