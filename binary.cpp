#include<iostream>
using namespace std;
int a[10],i,n,mid,key,low=0,high,flag=0;


int main()
{
	
	cout<<"\nEnter the total roll numbers=";
	cin>>n;
	cout<<"\nEnter the roll number="<<" ";
	for(i=0;i<n;i++)
	{
	cin>>a[i];
	}
	cout<<"Enter the roll no to be search=";
	cin>>key;
	high=n-1;
	while(low<=high)
	{
	mid=(low+high)/2;
	if(key==a[mid])
	{
	flag==1;
	break;
	}
	
	if(key<a[mid])
	{
	high=mid-1;
	}
	
	else
	{
	low=mid+1;
	}
	if(flag=1)
	{
	cout<<"\nRoll number found";
	}
	else
	{
	cout<<"\n\nRoll number not found";
	}
	}
	
	}
	
/*Enter the total roll numbers=5

Enter the roll number= 22
33
44
55
66
Enter the roll no to be search=33
Roll number found*/




