#include<iostream>
using namespace std;
class shubham
{
	public:
		void displayinfo()
		
		{
		
		cout<<"display is"<<endl;
	}
		
		
};
class child
{
	public:
		void displaychildinfo()
		
		{
			cout<<"child is"<<endl;
		}
};
class all:public shubham,public child
{
	public:
		void displayallinfo()
		{
			cout<<"all class in one"<<endl;
			displayinfo();
			displaychildinfo();
			
		}
};
int main()
{
	all All;
	All.displayallinfo();
}
