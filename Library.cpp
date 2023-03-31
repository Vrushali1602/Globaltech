#include<iostream>
using namespace std;
void stud_login();
void lib_login();
int main()
{
	int ch;
	cout<<"\n***********LIBRARY MANAGMENT SYSTEM************\n";
	cout<<"\n\t\t\tL M S C++\n";
	cout<<"\nPLEASE CHOOSE ANY OPTION TO LOGIN\n";
	cout<<"\n1.STUDENT\n";
	cout<<"\n2.LIBRARIAN\n";
	cout<<"\n3.CLOSE THE APPLICATION\n";
	cout<<"\nENTER YOUR CHOICE\n";
	cin>>ch;
	
	   switch(ch)
	   {
	   	case 1: stud_login();
	   	break;
	   	
	   	case 2: lib_login();
	   	break;
	   	
	   	case3:break;
	   	
	   	default: cout<<"INVALID CHOICE: ";
	   }
	   return 0;
}





void stud_login()
{
	int ID;
	string name;
	int password;
	
	cout<<"\nENTER STUDENT ID: ";
	cin>>ID;
	cout<<"\nENTER STUDENT NAME: ";
	cin>>name;
	cout<<"\nENTER PASSWORD: ";
	cin>>password;
	
	cout<<"LOGGEDIN SUCCEFULLY";
	
}
void lib_login()
{
	int ID;
	string name;
	int password;
	
	cout<<"\nENTER LIBRARIAN  ID: ";
	cin>>ID;
	cout<<"\nENTER LIBRARIAN NAME: ";
	cin>>name;
	cout<<"\nENTER PASSWORD: ";
	cin>>password;
	
	cout<<"LOGGEDIN SUCCEFULLY";
}
