//project 
// cafeteria system by Mr Idowu Olusegun Kelvin
//c++ program of a cafeteria system 
//13/3184
//COMPUTER TECHNOLOGY

#include<iostream>
#include<string>
using namespace std;
class  hope
{
public:


	void Dayo(string fname, string sname, string num)
	{

		cout <<"			WELCOME " << fname << "  " << sname << " WITH " << num << "\n";
		cout <<"			=======================================" << "\n";

	}

	void Monday(int time, int t, int k, int l, int y)
	{

		if (time >= 6.00 && time <= 9.00)
		{
			cout << "			WHAT DO YOU WANT TO HAVE FOR BREAKFAST?\n";
			cout << "			=======================================" << "\n";
			cout << "			press 1 for CORNFLAKES AND BREAD\n";
			cout << "			press 2 for GRANOLA AND BREAD\n";
			cin >> t;
			switch (t)
			{
			case 1:
				cout << "			PLEASE BRING YOUR PLATE FORWARD\n";
				cout << "			HOW MANY LOAVES OF BREAD CAN YOU EAT?\n";
				cout << "			=====================================" << "\n";
				cin >> k;
				cout<<"			ENJOY YOUR MEAL \n";
				cout<<"				AND\n";
				cout << "			THANK YOU FOR COMING \n";
				cout << "			NEXT";
				break;

			case 2:
				cout << "			PLEASE BRING YOUR PLATE FORWARD\n";
				cout << "			HOW MANY LOAVES OF BREAD CAN YOU EAT?\n";
				cout << "			=====================================" << "\n";
				cin >> l;
				cout<<"			ENJOY YOUR MEAL \n";
				cout<<"				AND\n";
				cout << "			THANK YOU FOR COMING \n";
				cout << "			NEXT";
				break;

			}

		}
		else if (time >= 12.00 && time <= 15.00)
		{
			cout << "			WHAT DO YOU WANT TO HAVE FOR LUNCH?\n";
			cout << "			===================================" << "\n";
			cout << "			press 1 for RICE AND MOIMOI\n";
			cout << "			press 2 for RICE AND SALAD\n";
			cin >> t;
			switch (t)
			{
			case 1:
				cout << "			PLEASE BRING YOUR PLATE FORWARD\n";
				cout << "			HOW MANY WRAPS OF MOIMOI CAN YOU EAT WITH YOUR RICE?\n";
				cout << "			====================================================" << "\n";
				cin >> k;
				cout<<"			ENJOY YOUR MEAL \n";
				cout<<"				AND\n";
				cout << "			THANK YOU FOR COMING \n";
				cout << "			NEXT";
				break;

			case 2:
				cout << "			PLEASE BRING YOUR PLATE FORWARD\n";
				cout << "			HOW MANY SPOONS OF SALAD CAN YOU EAT WITH YOUR RICE?\n";
				cout << "			====================================================" << "\n";
				cin >> l;
				cout<<"			ENJOY YOUR MEAL \n";
				cout<<"				AND\n";
				cout << "			THANK YOU FOR COMING \n";
				cout << "			NEXT";
				break;

			}

		}
		else if (time >= 17.00 && time <= 21.00)
		{
			cout << "			WHAT DO YOU WANT TO HAVE FOR DINNER?\n";
			cout << "			====================================" << "\n";
			cout << "			press 1 for YAM AND STEW \n";
			cout << "			press 2 for POTATO PORIDGE \n";
			cin >> t;
			switch (t)
			{
			case 1:
				cout << "			PLEASE BRING YOUR PLATE FORWARD\n";
				cout << "			HOW MANY PIECES OF YAM CAN YOU EAT?\n";
				cout << "			===================================" << "\n";
				cin >> k;
				cout<<"			ENJOY YOUR MEAL \n";
				cout<<"				AND\n";
				cout << "			THANK YOU FOR COMING \n";
				cout << "			NEXT";
				break;

			case 2:
				cout << "			PLEASE BRING YOUR PLATE FORWARD\n";
				cout << "			HOW MANY SPOONS OF PORIDGE CAN YOU EAT?\n";
				cout << "			=======================================" << "\n";
				cin >> l;
				cout<<"			ENJOY YOUR MEAL \n";
				cout<<"				AND\n";
				cout << "			THANK YOU FOR COMING \n";
				cout << "			NEXT";
				break;

			}

		}

	}
	void Tuesday(int  time, int t, int k, int l, int  y)
	{

		if (time >= 6.00 && time <= 9.00)
		{
			cout << "			WHAT DO YOU WANT TO HAVE FOR BRREAKFAST?\n";
			cout << "			========================================" << "\n";
			cout << "			press 1 for PAP AND AKARA\n";
			cout << "			press 2 for OAT AND AKARA\n";
			cin >> t;
			switch (t)
			{
			case 1:
				cout << "				PLEASE BRING YOUR PLATE FORWARD\n";
				cout << "			HOW MANY BALLS OF AKARA CAN YOU EAT?\n";
				cout << "			====================================" << "\n";
				cin >> k;
				cout<<"			ENJOY YOUR MEAL \n";
				cout<<"				AND\n";
				cout << "			THANK YOU FOR COMING \n";
				cout << "			NEXT";
				break;

			case 2:
				cout << "			PLEASE BRING YOUR PLATE FORWARD\n";
				cout << "			HOW MANY BALLS OF AKARA CAN YOU EAT?\n";
				cout << "			====================================" << "\n";
				cin >> l;
				cout<<"			ENJOY YOUR MEAL \n";
				cout<<"				AND\n";
				cout << "			THANK YOU FOR COMING \n";
				cout << "			NEXT";
				break;

			}

		}
		else if (time >= 12.00 && time <= 15.00)
		{
			cout << "			WHAT DO YOU WANT TO HAVE FOR LUNCH?\n";
			cout << "			===================================" << "\n";
			cout << "			press 1 for EBA AND EGUSSI SOUP\n";
			cout << "			press 2 for SEMOVITA AND OKRO SOUP\n";
			cin >> t;
			switch (t)
			{
			case 1:
				cout << "			PLEASE BRING YOUR PLATE FORWARD\n";
				cout << "			HOW MANY WRAPS OF EBA CAN YOU EAT?\n";
				cout << "			==================================" << "\n";
				cin >> k;
				cout<<"			ENJOY YOUR MEAL \n";
				cout<<"				AND\n";
				cout << "			THANK YOU FOR COMING \n";
				cout << "			NEXT";
				break;

			case 2:
				cout << "			PLEASE BRING YOUR PLATE FORWARD\n";
				cout << "			HOW MANY WRAPS OF SEMOVITA CAN YOU EAT?\n";
				cout << "			=======================================" << "\n";
				cin >> l;
				cout<<"			ENJOY YOUR MEAL \n";
				cout<<"				AND\n";
				cout << "			THANK YOU FOR COMING \n";
				cout << "			NEXT";
				break;

			}

		}
		else if (time >= 17.00 && time <= 21.00)
		{
			cout << "			WHAT DO YOU WANT TO HAVE FOR DINNER?\n";
			cout << "			====================================" << "\n";
			cout << "			press 1 for RICE AND STEW \n";
			cout << "			press 2 for SPAGHETTI AND STEW \n";
			cin >> t;
			switch (t)
			{
			case 1:
				cout << "			PLEASE BRING YOUR PLATE FORWARD\n";
				cout << "			HOW MANY SPOONS OF RICE CAN YOU EAT?\n";
				cout << "			====================================" << "\n";
				cin >> k;
				cout<<"			ENJOY YOUR MEAL \n";
				cout<<"				AND\n";
				cout << "			THANK YOU FOR COMING \n";
				cout << "			NEXT";
				break;

			case 2:
				cout << "			PLEASE BRING YOUR PLATE FORWARD\n";
				cout << "			HOW MANY SPOONS OF SPAGHETTI CAN YOU EAT?\n";
				cout << "			=========================================" << "\n";
				cin >> l;
				cout<<"			ENJOY YOUR MEAL \n";
				cout<<"				AND\n";
				cout << "			THANK YOU FOR COMING \n";
				cout << "			NEXT";
				break;

			}

		}

	}
	void Wednesday(int  time, int t, int k, int l, int  y)
	{

		if (time >= 6.00 && time <= 9.00)
		{
			cout << "			WHAT DO YOU WANT TO HAVE FOR BREAKFAST?\n";
			cout << "			=======================================" << "\n";
			cout << "			press 1 for CORNFLAKES AND BREAD\n";
			cout << "			press 2 for GRANOLA AND BREAD\n";
			cin >> t;
			switch (t)
			{
			case 1:
				cout << "			PLEASE BRING YOUR PLATE FORWARD\n";
				cout << "			HOW MANY LOAVES OF BREAD CAN YOU EAT?\n";
				cout << "			=====================================" << "\n";
				cin >> k;
				cout<<"			ENJOY YOUR MEAL \n";
				cout<<"				AND\n";
				cout << "			THANK YOU FOR COMING \n";
				cout << "			NEXT";
				break;

			case 2:
				cout << "			PLEASE BRING YOUR PLATE FORWARD\n";
				cout << "			HOW MANY LOAVES OF BREAD CAN YOU EAT?\n";
				cout << "			=====================================" << "\n";
				cin >> l;
				cout<<"			ENJOY YOUR MEAL \n";
				cout<<"				AND\n";
				cout << "			THANK YOU FOR COMING \n";
				cout << "			NEXT";
				break;

			}

		}
		else if (time >= 12.00 && time <= 15.00)
		{
			cout << "			WHAT DO YOU WANT TO HAVE FOR LUNCH?\n";
			cout << "			===================================" << "\n";
			cout << "			press 1 for BEANS AND GARRI\n";
			cout << "			press 2 for MOIMOI AND GARRI\n";
			cin >> t;
			switch (t)
			{
			case 1:
				cout << "			PLEASE BRING YOUR PLATE FORWARD\n";
				cout << "			HOW MANY SPOONS OF BEANS CAN YOU EAT?\n";
				cout << "			=====================================" << "\n";
				cin >> k;
				cout<<"			ENJOY YOUR MEAL \n";
				cout<<"				AND\n";
				cout << "			THANK YOU FOR COMING \n";
				cout << "			NEXT";
				break;

			case 2:
				cout << "			PLEASE BRING YOUR PLATE FORWARD\n";
				cout << "			HOW MANY WRAPS OF MOIMOI CAN YOU EAT?\n";
				cout << "			=====================================" << "\n";
				cin >> l;
				cout<<"			ENJOY YOUR MEAL \n";
				cout<<"				AND\n";
				cout << "			THANK YOU FOR COMING \n";
				cout << "			NEXT";
				break;

			}

		}
		else if (time >= 17.00 && time <= 21.00)
		{
			cout << "			WHAT DO YOU WANT TO HAVE FOR DINNER?\n";
			cout << "			====================================" << "\n";
			cout << "			press 1 for SPAGHETTI,STEW AND EGG \n";
			cout << "			press 2 for JOLLOF SPAGHETTI AND EGG \n";
			cin >> t;
			switch (t)
			{
			case 1:
				cout << "			PLEASE BRING YOUR PLATE FORWARD\n";
				cout << "			HOW MANY SPOONS OF SPAGHETTI CAN YOU EAT?\n";
				cout << "			=========================================" << "\n";
				cin >> k;
				cout<<"			ENJOY YOUR MEAL \n";
				cout<<"				AND\n";
				cout << 			"THANK YOU FOR COMING \n";
				cout << "			NEXT";
				break;

			case 2:
				cout << "			PLEASE BRING YOUR PLATE FORWARD\n";
				cout << "			HOW MANY SPOONS OF JOLLOF SPAGHETTI CAN YOU EAT?\n";
				cout << "			================================================" << "\n";
				cin >> l;
				cout<<"			ENJOY YOUR MEAL \n";
				cout<<"				AND\n";
				cout << "			THANK YOU FOR COMING \n";
				cout << "			NEXT";
				break;

			}

		}

	}
	void Thursday(int  time, int t, int k, int l, int  y)
	{

		if (time >= 6.00 && time <= 9.00)
		{
			cout << "			WHAT DO YOU WANT TO HAVE FOR BREAKFAST?\n";
			cout << "			=======================================" << "\n";
			cout << "			press 1 for PAP AND AKARA\n";
			cout << "			press 2 for OAT AND AKARA\n";
			cin >> t;
			switch (t)
			{
			case 1:
				cout << "			PLEASE BRING YOUR PLATE FORWARD\n";
				cout << "			HOW MANY BALLS OF AKARA CAN YOU EAT?\n";
				cout << "			====================================" << "\n";
				cin >> k;
				cout<<"			ENJOY YOUR MEAL \n";
				cout<<"				AND\n";
				cout << "			THANK YOU FOR COMING \n";
				cout << "			NEXT";
				break;

			case 2:
				cout << "			PLEASE BRING YOUR PLATE FORWARD\n";
				cout << "			HOW MANY BALLS OF AKARA CAN YOU EAT?\n";
				cout << "			====================================" << "\n";
				cin >> l;
				cout<<"			ENJOY YOUR MEAL \n";
				cout<<"				AND\n";
				cout << "			THANK YOU FOR COMING \n";
				cout << "			NEXT";
				break;

			}

		}
		else if (time >= 12.00 && time <= 15.00)
		{
			cout << "			WHAT DO YOU WANT TO HAVE FOR LUNCH?\n";
			cout << "			===================================" << "\n";
			cout << "			press 1 for EBA AND EGUSSI SOUP\n";
			cout << "			press 2 for SEMOVITA AND OKRO SOUP\n";
			cin >> t;
			switch (t)
			{
			case 1:
				cout << "			PLEASE BRING YOUR PLATE FORWARD\n";
				cout << "			HOW MANY WRAPS OF EBA CAN YOU EAT?\n";
				cout << "			==================================" << "\n";
				cin >> k;
				cout<<"			ENJOY YOUR MEAL \n";
				cout<<"				AND\n";
				cout << "			THANK YOU FOR COMING \n";
				cout << "			NEXT";
				break;

			case 2:
				cout << "			PLEASE BRING YOUR PLATE FORWARD\n";
				cout << "			HOW MANY WRAPS OF SEMOVITA CAN YOU EAT?\n";
				cout << "			=======================================" << "\n";
				cin >> l;
				cout<<"			ENJOY YOUR MEAL \n";
				cout<<"				AND\n";
				cout << "			THANK YOU FOR COMING \n";
				cout << "			NEXT";
				break;

			}

		}
		else if (time >= 17.00 && time <= 21.00)
		{
			cout << "			WHAT DO YOU WANT TO HAVE FOR DINNER?\n";
			cout << "			====================================" << "\n";
			cout << "			press 1 for RICE AND STEW \n";
			cout << "			press 2 for SPAGHETTI AND STEW \n";
			cin >> t;
			switch (t)
			{
			case 1:
				cout << "			PLEASE BRING YOUR PLATE FORWARD\n";
				cout << "			HOW MANY SPOONS OF RICE CAN YOU EAT?\n";
				cout << "			====================================" << "\n";
				cin >> k;
				cout<<"			ENJOY YOUR MEAL \n";
				cout<<"				AND\n";
				cout << "			THANK YOU FOR COMING \n";
				cout << "			NEXT";
				break;

			case 2:
				cout << "			PLEASE BRING YOUR PLATE FORWARD\n";
				cout << "			HOW MANY SPOONS OF SPAGHETTI CAN YOU EAT?\n";
				cout << "			=========================================" << "\n";
				cin >> l;
				cout<<"			ENJOY YOUR MEAL \n";
				cout<<"				AND\n";
				cout << "			THANK YOU FOR COMING \n";
				cout << "			NEXT";
				break;

			}

		}

	}
	void Friday(int  time, int t, int k, int l, int  y)
	{

		if (time >= 6.00 && time <= 9.00)
		{
			cout << "			WHAT DO YOU WANT TO HAVE FOR BREAKFAST?\n";
			cout << "			=======================================" << "\n";
			cout << "			press 1 for CORNFLAKES AND BREAD\n";
			cout << "			press 2 for GRANOLA AND BREAD\n";
			cin >> t;
			switch (t)
			{
			case 1:
				cout << "			PLEASE BRING YOUR PLATE FORWARD\n";
				cout << "			HOW MANY LOAVES OF BREAD CAN YOU EAT?\n";
				cout << "			=====================================" << "\n";
				cin >> k;
				cout<<"			ENJOY YOUR MEAL \n";
				cout<<"				AND\n";
				cout << "			THANK YOU FOR COMING \n";
				cout << "			NEXT";
				break;

			case 2:
				cout << "			PLEASE BRING YOUR PLATE FORWARD\n";
				cout << "			HOW MANY LOAVES OF BREAD CAN YOU EAT?\n";
				cout << "			=====================================" << "\n";
				cin >> l;
				cout<<"			ENJOY YOUR MEAL \n";
				cout<<"				AND\n";
				cout << "			THANK YOU FOR COMING \n";
				cout << "			NEXT";
				break;

			}

		}
		else if (time >= 12.00 && time <= 15.00)
		{
			cout << "			WHAT DO YOU WANT TO HAVE FOR LUNCH?\n";
			cout << "			===================================" << "\n";
			cout << "			press 1 for BEANS AND GARRI\n";
			cout << "			press 2 for MOIMOI AND GARRI\n";
			cin >> t;
			switch (t)
			{
			case 1:
				cout << "			PLEASE BRING YOUR PLATE FORWARD\n";
				cout << "			HOW MANY SPOONS OF BEANS CAN YOU EAT?\n";
				cout << "			=====================================" << "\n";
				cin >> k;
				cout<<"			ENJOY YOUR MEAL \n";
				cout<<"				AND\n";
				cout << "			THANK YOU FOR COMING \n";
				cout << "			NEXT";
				break;

			case 2:
				cout << "			PLEASE BRING YOUR PLATE FORWARD\n";
				cout << "			HOW MANY WRAPS OF MOIMOI CAN YOU EAT?\n";
				cout << "			=====================================" << "\n";
				cin >> l;
				cout<<"			ENJOY YOUR MEAL \n";
				cout<<"				AND\n";
				cout << "			THANK YOU FOR COMING \n";
				cout << "			NEXT";
				break;

			}

		}
		else if (time >= 17.00 && time <= 21.00)
		{
			cout << "			WHAT DO YOU WANT TO HAVE FOR DINNER?\n";
			cout << "			====================================" << "\n";
			cout << "			press 1 for YAM AND STEW \n";
			cout << "			press 2 for POTATO PORIDGE \n";
			cin >> t;
			switch (t)
			{
			case 1:
				cout << "			PLEASE BRING YOUR PLATE FORWARD\n";
				cout << "			HOW MANY PIECES OF YAM CAN YOU EAT?\n";
				cout << "			===================================" << "\n";
				cin >> k;
				cout<<"			ENJOY YOUR MEAL \n";
				cout<<"				AND\n";
				cout << "			THANK YOU FOR COMING \n";
				cout << "			NEXT";
				break;

			case 2:
				cout << "			PLEASE BRING YOUR PLATE FORWARD\n";
				cout << "			HOW MANY SPOONS OF PORIDGE CAN YOU EAT?\n";
				cout << "			=======================================" << "\n";
				cin >> l;
				cout<<"			ENJOY YOUR MEAL \n";
				cout<<"				AND\n";
				cout << "			THANK YOU FOR COMING \n";
				cout << "			NEXT";
				break;

			}

		}

	}
	void Saturday(int  time, int t, int k, int l, int  y)
	{

		if (time >= 6.00 && time <= 9.00)
		{
			cout << "			WHAT DO YOU WANT TO HAVE FOR BREAKFAST?\n";
			cout << "			=======================================" << "\n";
			cout << "			press 1 for CORNFLAKES AND BREAD\n";
			cout << "			press 2 for GRANOLA AND BREAD\n";
			cin >> t;
			switch (t)
			{
			case 1:
				cout << "			PLEASE BRING YOUR PLATE FORWARD\n";
				cout << "			HOW MANY LOAVES OF BREAD CAN YOU EAT?\n";
				cout << "			=====================================" << "\n";
				cin >> k;
				cout<<"			ENJOY YOUR MEAL \n";
				cout<<"				AND\n";
				cout << "			THANK YOU FOR COMING \n";
				cout << "			NEXT";
				break;

			case 2:
				cout << "			PLEASE BRING YOUR PLATE FORWARD\n";
				cout << "			HOW MANY LOAVES OF BREAD CAN YOU EAT?\n";
				cout << "			=====================================" << "\n";
				cin >> l;
				cout<<"			ENJOY YOUR MEAL \n";
				cout<<"				AND\n";
				cout << "			THANK YOU FOR COMING \n";
				cout << "			NEXT";
				break;

			}

		}
		else if (time >= 12.00 && time <= 15.00)
		{
			cout << "			WHAT DO YOU WANT TO HAVE FOR LUNCH?\n";
			cout << "			===================================" << "\n";
			cout << "			press 1 for JOLLOF RICE AND MOIMOI\n";
			cout << "			press 2 for JOLLOF RICE AND SALAD\n";
			cin >> t;
			switch (t)
			{
			case 1:
				cout << "			PLEASE BRING YOUR PLATE FORWARD\n";
				cout << "			HOW MANY WRAPS OF MOIMOI CAN YOU EAT WITH YOUR JOLLOF RICE?\n";
				cout << "			===========================================================" << "\n";
				cin >> k;
				cout<<"			ENJOY YOUR MEAL \n";
				cout<<"				AND\n";
				cout << "			THANK YOU FOR COMING \n";
				cout << "			NEXT";
				break;

			case 2:
				cout << "			PLEASE BRING YOUR PLATE FORWARD\n";
				cout << "			HOW MANY SPOONS OF SALAD CAN YOU EAT WITH YOUR JOLLOF RICE?\n";
				cout << "			===========================================================" << "\n";
				cin >> l;
				cout<<"			ENJOY YOUR MEAL \n";
				cout<<"				AND\n";
				cout << "			THANK YOU FOR COMING \n";
				cout << "			NEXT";
				break;

			}

		}
		else if (time >= 17.00 && time <= 21.00)
		{
			cout << "			WHAT DO YOU WANT TO HAVE FOR DINNER?\n";
			cout << "			====================================" << "\n";
			cout << "			press 1 for SPAGHETTI,STEW AND EGG \n";
			cout << "			press 2 for JOLLOF SPAGHETTI AND EGG \n";
			cin >> t;
			switch (t)
			{
			case 1:
				cout << "			PLEASE BRING YOUR PLATE FORWARD\n";
				cout << "			HOW MANY SPOONS OF SPAGHETTI CAN YOU EAT?\n";
				cout << "			=========================================" << "\n";
				cin >> k;
				cout<<"			ENJOY YOUR MEAL \n";
				cout<<"				AND\n";
				cout << "			THANK YOU FOR COMING \n";
				cout << "			NEXT";
				break;

			case 2:
				cout << "			PLEASE BRING YOUR PLATE FORWARD\n";
				cout << "			HOW MANY SPOONS OF JOLLOF SPAGHETTI CAN YOU EAT\n";
				cout << "			===============================================" << "\n";
				cin >> l;
				cout<<"			ENJOY YOUR MEAL \n";
				cout<<"				AND\n";
				cout << "			THANK YOU FOR COMING \n";
				cout << "			NEXT";
				break;

			}

		}

	}
	void Sunday(int  time, int t, int k, int l, int  y)
	{

		if (time >= 6.00 && time <= 9.00)
		{
			cout << "			WHAT DO YOU WANT TO HAVE FOR BREAKFAST?\n";
			cout << "			=======================================" << "\n";
			cout << "			press 1 for PAP AND AKARA\n";
			cout << "			press 2 for OAT AND AKARA\n";
			cin >> t;
			switch (t)
			{
			case 1:
				cout << "			PLEASE BRING YOUR PLATE FORWARD\n";
				cout << "			HOW MANY BALLS OF AKARA CAN YOU EAT?\n";
				cout << "			====================================" << "\n";
				cin >> k;
				cout<<"			ENJOY YOUR MEAL \n";
				cout<<"				AND\n";
				cout << "			THANK YOU FOR COMING \n";
				cout << "			NEXT";
				break;

			case 2:
				cout << "			PLEASE BRING YOUR PLATE FORWARD\n";
				cout << "			HOW MANY BALLS OF AKARA CAN YOU EAT?\n";
				cout << "			====================================" << "\n";
				cin >> l;
				cout<<"			ENJOY YOUR MEAL \n";
				cout<<"				AND\n";
				cout << "			THANK YOU FOR COMING \n";
				cout << "			NEXT";
				break;

			}

		}
		else if (time >= 12.00 && time <= 15.00)
		{
			cout << "			WHAT DO YOU WANT TO HAVE FOR LUNCH?\n";
			cout << "			====================================" << "\n";
			cout << "			press 1 for EBA AND EGUSSI SOUP\n";
			cout << "			press 2 for SEMOVITA AND OKRO SOUP\n";
			cin >> t;
			switch (t)
			{
			case 1:
				cout << "			PLEASE BRING YOUR PLATE FORWARD\n";
				cout << "			HOW MANY WRAPS OF EBA CAN YOU EAT?\n";
				cout << "			==================================" << "\n";
				cin >> k;
				cout<<"			ENJOY YOUR MEAL \n";
				cout<<"				AND\n";
				cout << "			THANK YOU FOR COMING \n";
				cout << "			NEXT";
				break;

			case 2:
				cout << "			PLEASE BRING YOUR PLATE FORWARD\n";
				cout << "			HOW MANY WRAPS OF SEMOVITA CAN YOU EAT?\n";
				cout << "			=======================================" << "\n";
				cin >> l;
				cout<<"			ENJOY YOUR MEAL \n";
				cout<<"				AND\n";
				cout << "			THANK YOU FOR COMING \n";
				cout << "			NEXT";
				break;

			}

		}
		else if (time >= 17.00 && time <= 21.00)
		{
			cout << "			WHAT DO YOU WANT TO HAVE FOR DINNER?\n";
			cout << "			====================================" << "\n";
			cout << "			press 1 for RICE AND STEW \n";
			cout << "			press 2 for SPAGHETTI AND STEW \n";
			cin >> t;
			switch (t)
			{
			case 1:
				cout << "			PLEASE BRING YOUR PLATE FORWARD\n";
				cout << "			HOW MANY SPOONS OF RICE CAN YOU EAT?\n";
				cout << "			====================================" << "\n";
				cin >> k;
				cout<<"			ENJOY YOUR MEAL \n";
				cout<<"				AND\n";
				cout << "			THANK YOU FOR COMING \n";
				cout << "			NEXT";
				break;

			case 2:
				cout << "			PLEASE BRING YOUR PLATE FORWARD\n";
				cout << "			HOW MANY SPOONS OF SPAGHETTI CAN YOU EAT?\n";
				cout << "			=========================================" << "\n";
				cin >> l;
				cout<<"			ENJOY YOUR MEAL \n";
				cout<<"				AND\n";
				cout << "			THANK YOU FOR COMING \n";
				cout << "			NEXT";
				break;

			}

		}

	}
};
int main()
{
	hope ram, goons, pope,gaoe;
	string ame, mane;
	string life;
	int day;
	//arguments to replace parameters
	int  u, j, b, m;
	double kiss;
	cout << "					WELCOME TO BABCOCK UNIVERSITY CAFETERIA\n";
	cout << "					=======================================" << "\n";
	cout << "			PLEASE INPUT YOUR SURNAME\n";
	cin >> ame;
	cout << "			PLEASE INPUT YOUR FIRST NAME\n";
	cin >> mane;
	cout <<"			PLEASE INPUT YOUR MATRIC NUMBER\n";
	cin >> life;
	ram.Dayo(ame, mane, life);

	cout << "			WHAT GOES BY YOUR TIME?\n";
	cout << "			=======================" << "\n";
	cout << "			TAKE NOTE: WE USE A 24hr TIME FORMAT\n";
	cout << "			====================================" << "\n";

	cin >> kiss;
	cout << "			WHAT IS TODAY? \n";
	cout << "			==============" << "\n";
	cout << "			press 1 if its Monday\n";
	cout << "			press 2 if its Tuesday\n";
	cout << "			press 3 if its Wednesday\n";
	cout << "			press 4 if its Thursday\n";
	cout << "			press 5 if its Friday\n";
	cout << "			press 6 if its Saturday\n";
	cout << "			press 7 if its Sunday\n";
	cin >> day;
	switch (day)
	{
	case 1:
		goons.Monday(kiss, u, j, b, m);
		break;
	case 2:
		pope.Tuesday(kiss, u, j, b, m);

		break;
		case 3:
		gaoe.Wednesday(kiss, u, j, b, m);

		break;
		case 4:
		gaoe.Thursday(kiss, u, j, b, m);

		break;
		case 5:
		gaoe.Friday(kiss, u, j, b, m);

		break;
		case 6:
		gaoe.Saturday(kiss, u, j, b, m);

		break;
		case 7:
		gaoe.Sunday(kiss, u, j, b, m);

		break;
	}
	//calling a function via a class
}



