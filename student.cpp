#include<iostream>
#include<string.h>
using namespace std;
class student
{
	public:
		int rollNumber;
		
	public:
		string name;
		float marks;
		
		void displayinfo()
		{
			cout<<"roll number"<<rollNumber<<endl;
			cout<<"name"<<name<<endl;
			cout<<"marks"<<marks<<endl;
			calculateGrade();
		}
		private:
		 void calculateGrade();
	};
		void student::calculateGrade()
		{
			if(marks>=75.0)
			{
				cout<<"grade A"<<endl;
			}
			else if(marks>=60.0)
			{
				cout<<"grade B"<<endl;
			}
			else
			{
				cout<<"grade C"<<endl;
			}
		}
int main()
{
	student student1;
	
	student1.rollNumber=101;
	student1.name=":shetul sir";
	student1.marks=50.5;
	
	cout<<"student information:"<<endl;
	student1.displayinfo();
	return 0;
}
