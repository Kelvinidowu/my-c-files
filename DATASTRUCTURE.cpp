#include<iostream>
using namespace std;
int main()
{
	int n,q,m,mx;
	cout<<"ENTER THE NUMBERS OF ELEMENTS\n";
	cin>>n;
	int array[n];
	cout<<"enter the numbers\n";
	for(q=0;q<n;q++)
	{ cin>>array[q]; }
	m = array[0];
	mx = array[0];
	for(q=0;q<n;q++)
	{
	if(array[q]>mx)
	{
	m=mx;
	m=array[q];
	}
	if(array[q]<m && array[q]<mx)
	{
		array[q]=mx;
	}
	cout<<"	THE 2nd LARGEST VALUE IS -\n"<<array[q];
	return 0;
}
}
