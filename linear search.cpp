#include<iostream>
using namespace std;
int main()
{
    char data[5],ITEM;
	int i,n, loc=0;
	cout<<"Enter the array size : ";
	cin>>n;
	cout<<"Enter Array Elements : ";
	for(i=0; i<n; i++)
		cin>>data[i];
	cout<<"Enter the ITEM : ";
	cin>>ITEM;
	for(i=0; i<n; i++)
	{
		if(data[i]==ITEM)
		{
			loc=i+1;
			break;
		}
	}
	if(loc==0)
	{
		cout<<ITEM<<" is not in the array "<<data;
	}
	else
	{
		cout<<loc<<" IS THE LOCATION of "<<ITEM;
	}
	return 0;
}
