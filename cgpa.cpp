#include<iostream>
using namespace std;
int main()
{
	double course1, course2, course3, course4, unit1, unit2, unit3, a, b, c, d, e, f, gp1, gp2, gp3, gp4, gpa, fin;
	
	unit1=3;
	unit2=2;
	unit3=1;
	a=5;
	b=4;
	c=3;
	d=2;
	e=1;
	f=0;
	cout<<"welcome"<<"\n";
	cout<<"what was the score for your 1st 3 units course "<<"\n";
	cin>>course1;
	cout<<"what was the score for your 2nd 3 units course "<<"\n";
	cin>>course2;
	cout<<"what was the score for your 2 units course"<<"\n";
	cin>>course3;
	cout<<"what was the score for your 1 unit course"<<"\n";
	cin>>course4;
	
	{
	if (course1 >= 80 && course1 <= 100)
	{
		gp1 = a * unit1;
	}
	else if(course1 >= 60 && course1 <=79)
	{
		gp1 = b * unit1;
	}
	else if(course1 >= 50 && course1 <=59)
	{
		gp1 = c * unit1;
	}
	else if(course1 >= 45 && course1 <=49)
	{
		gp1 = d * unit1;
	}
	else if(course1 >= 40 && course1 <=44)
	{
		gp1 = e * unit1;
	}
	else if(course1 <=39)
	{
		gp1 = f * unit1;
	}
	else
	{
		cout<<"invalid score"<<"\n";
	}
}
	{
	if (course2 >= 80 && course2 <= 100)
	{
		gp2 = a * unit1;
	}
	else if(course2 >= 60 && course2 <=79)
	{
		gp2 = b * unit1;
	}
	else if(course2 >= 50 && course2 <=59)
	{
		gp2 = c * unit1;
	}
	else if(course2 >= 45 && course2 <=49)
	{
		gp2 = d * unit1;
	}
	else if(course2 >= 40 && course2 <=44)
	{
		gp2 = e * unit1;
	}
	else if(course2 <=39)
	{
		gp2 = f * unit1;
	}
	else
	{
		cout<<"invalid score"<<"\n";
	}
}
	{
	if (course3 >= 80 && course3 <= 100)
	{
		gp3 = a * unit2;
	}
	else if(course3 >= 60 && course3 <=79)
	{
		gp3 = b * unit2;
	}
	else if(course3 >= 50 && course3 <=59)
	{
		gp3 = c * unit2;
	}
	else if(course3 >= 45 && course3 <=49)
	{
		gp3 = d * unit2;
	}
	else if(course3 >= 40 && course3 <=44)
	{
		gp3 = e * unit2;
	}
	else if(course3 <=39)
	{
		gp3 = f * unit2;
	}
	else
	{
		cout<<"invalid score"<<"\n";
	}
}

	{
	if (course4 >= 80 && course4 <= 100)
	{
		gp4 = a * unit3;
	}
	else if(course4 >= 60 && course4 <=79)
	{
		gp4 = b * unit3;
	}
	else if(course4 >= 50 && course4 <=59)
	{
		gp4 = c * unit3;
	}
	else if(course4 >= 45 && course4 <=49)
	{
		gp4 = d * unit3;
	}
	else if(course4 >= 40 && course4 <=44)
	{
		gp4 = e * unit3;
	}
	else if(course4 <=39)
	{
		gp4 = f * unit3;
	}
	else
	{
		cout<<"invalid score"<<"\n";
	}
}
fin = 9;

gpa = (gp1 + gp2 + gp3 + gp4)/fin;
cout<<"your GPA is : "<< gpa <<endl;

	
return 0;
}
