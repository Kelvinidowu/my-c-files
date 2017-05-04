/* Using C++ To Implement Stack With Operation PUSH and POP  using
Array*/

#include<iostream>
#include<conio.h>
#include<process.h>
#define SIZE 10
using namespace std; 
static int top=-1;
class stack
{
  private:
	  int ar[SIZE];
  public:
	  void push(int item);
	  void pop();
};
void stack::push(int item)
{
   if(top==SIZE-1){
   
      cout<<"The Stack is Full!!!"<<"\n";
  }
   else
     { ar[++top]=item;
       cout<<"\n This Element was succesfully pushed in the Stack!!!";
     }
}
void stack::pop()
{
  if(top<0)
    cout<<"\nStack Under flow!!!";
  else
   { top--;
     cout<<"\n This Element was sucessfully popped from the Stack!!!";
   }
}

int main()
{
  char choice;
  int ch,num;
  stack ob;
  do
  {
  cout<<"\n\n\t\t\tS T A C K   O P E R A T I O N S";
  cout<<"\n\t\t\t-------------------------------";
  cout<<"\n\n1.PUSH";
  cout<<"\n2.POP";
  cout<<"\n3.EXIT";
  cout<<"\n\nEnter your choice:";
  cin>>ch;
   switch(ch)
   {
     case 1: cout<<"\nEnter the Element you want to Push:";
	     cin>>num;
	     ob.push(num);
	     cout<<"\n"<<num;
	      break;
     case 2: ob.pop(); 
	 cout<<"\n"<<num;
	 break;
     case 3: exit(0);
     default: cout<<"\nPlease Enter a Valid Choice(1-3)!!!";
   }
  cout<<"\nDo you want to Continue(Y/N):";
  cin>>choice;
  }while(choice=='y' || choice=='Y');

 getch();
}

