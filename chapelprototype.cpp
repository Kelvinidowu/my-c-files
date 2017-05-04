/* C++ Program - Calculate  chapel seminar Grade of Student */
		
#include<iostream>
#include<conio.h>
using namespace std;


int main()
{

	int noOfStudents[100];
	int attendance[12], i;
	string surname, name, matric, department;
	int sum=0,avg;
		cout << "					WELCOME TO BABCOCK UNIVERSITY CHAPEL SEMINAR GRADING PORTAL \n";
	cout << "					==================================================================" << "\n";
	
	cout << "				      	ENTER THE NAME OF THE DEPARTMENT\n";
	cout << "					============================================" << "\n";
	cin  >>department;
		
	cout << "					THESE ARE THE GRADES OF STUDENTS IN  " << department << "\n";

		cout << "					ENTER THE NUMBER OF STUDENTS " << department << "\n";

	cin >> noOfStudents[i];
	for(int i=0; i< noOfStudents[i]; i++){
	
	cout << "	PLEASE ENTER THE FOLLOWING DETAILS OF THE STUDENT\n";
		for(int i=0; i< noOfStudents[i]; i++){
	cout << "            LAST NAME : \n ";
	cin >> surname;
	cout << "			 FIRST NAME : \n";
	cin >> name;
	cout <<"			 MATRIC NUMBER : \n";
	cin >> matric;
	cout <<"			WELCOME " << surname << "  " << name << " WITH " << matric << "\n";
	
	cout <<"			=======================================" << "\n";
	cout<<"			ENTER THE TOTAL NUMBER OF ATTENDANCE FOR CHAPEL SEMINAR "<<"\n";
	cout<<"			======================================================="<<"\n";
	cout<<"			NOTE: THERE ARE ONLY 12 WEEKS FOR CHAPEL SEMINAR IN A SEMESTER"<<"\n";
	for(i=0; i<12; i++)
	{
		a:
		cout<<"		ENTER 1 IF PRESENT & ENTER 0 IF ABSENT"<<"\n";
		cout<<"		WEEK  "<<i+1<<"\n";
		
			
		
		cin>>attendance[i];
		if(attendance[i]==0 || attendance[i]==1)
		{
			
		
		sum=sum+attendance[i];
	}
	else
	{
		cout<<"wrong input"<<"\n";
		goto a;
	}
	}
	cout<<"			 "<< surname << "  " << name << " \n " << "MATRIC NUMBER : "  << matric << "\n " <<" ATTENDANCE:  " << sum << "\n" << "CHAPEL SEMINAR GRADE IS : "<<"\n";
	{
	
	if(sum>=11 && sum<=12)
	{
		cout<<"	A"<<"\n";
	}
	else if(sum>=10 && sum<11)
	{
		cout<<"	B"<<"\n";
	}
	else if(sum>=9 && sum<10)
	{
		cout<<"	C"<<"\n";
	}
	else
	{
		cout<<"	F"<<"\n";
	}
}
	getch();
}
}
}


