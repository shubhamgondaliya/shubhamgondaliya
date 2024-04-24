#include<iostream>
using namespace std;
class shubham
{
      public:
      	void displayinfo()
      	{	  
		cout<<"details of child"<<endl;
	}	
};
class person:public shubham
{
	public:
		void displaypersoninfo()
		{
			cout<<"person details"<<endl;
			displayinfo();
		}
	
};
int main()
{
	person person;
	person.displaypersoninfo();
	return 0;
}
