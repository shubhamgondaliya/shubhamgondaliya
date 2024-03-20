 #include<iostream>
using namespace std;
class member
{
	private:
static int A;
static int B;
static int C;
	
	public:
	 static void disp()
{
cout<<"the value of the A is:"<<A<<endl;
cout<<"the value of B is:"<<B<<endl;
cout<<"the value of C is:"<<C<<endl;
}
};
int member::A=20;
int member::B=30;
int member::C=40;
int main()
{
	member mb;
	cout<<"print the static member through object name:"<<endl;
	mb.disp();
	cout<<"print the static member through object name:"<<endl;
	member::disp();
	return 0;
	
}
