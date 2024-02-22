#include<iostream>
using namespace std;
int main()
{
	enum weekday{mon,tue,wed,thur,fri,sat,sun,}
   weekday=wed;
	switch(wed)
	{
		case mon:cout<<"monday";
		break;
		case tue:cout<<"tuesday";
		break;
		case wed:cout<<"wednesday";
		break;
		case thur:cout<<"thursday";
		break;
		case fri:cout<<"friday";
		break;
		case sat:cout<<"saturday";
		break;
		case sun:cout<<"sunday";
		break;
	}
	return 0;
}
