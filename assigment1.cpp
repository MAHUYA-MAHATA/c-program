#include<iostream>
using std::string;
class student
{
	public:
		string name;
		int roll;
		double marks1,marks2,marks3;
		
		student(); //default constructor
		student(const string &n,int r,double ms1,double ms2,double ms3);//parameterized constructor
		student(student &s); //copy constructor
};
