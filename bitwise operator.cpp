#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
int a=3,b=6;
int	And=a&b;
int Or=a|b;

int shubham=a^b;

int shiftleft=a<<1;

int shiftright=a>>3;
	
	cout<<"bitwise and ="<<And<<endl;
	cout<<"bitwise or ="<<Or<<endl;
	cout<<"bitwise xor ="<<shubham<<endl;
//	cout<<"bitwise not ="<<not<<end1
	cout<<"bitwise shiftleft ="<<shiftleft<<endl;
	
	cout<<"bitwise shiftright ="<<shiftright<<endl;
	return 0;
	
}
