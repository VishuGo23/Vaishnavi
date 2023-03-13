#include<iostream>
using namespace std;
int a[10],i,j,n,pass,temp;
string name[15];
int sgpa[15];
int main()
{
	cout<<"Enter total Names=";
	cin>>n;
	cout<<"\nEnter the name=";
	for(i=0;i<n;i++)
	{
	cin>>name[i];
	}
	cout<<"\nthe names are=" << " ";
	
	for(i=0;i<n;i++)
	{
	cout<< name[i]<<" " ;
	}
	
	cout<<"\n\nEnter total no whose sgpa want to display=";
	cin>>n;
	cout<<"\nEnter the sgpa=";
	for(i=0;i<n;i++)
	{
	cin>>sgpa[i];
	}
	cout<<"\nThe sgpa are=" << " ";
	
	for(i=0;i<n;i++)
	{
	cout<< sgpa[i]<<" " ;
	}
	

	for(i=0;i<n;i++)
	{
	cout<< sgpa[i]<<" " ;
	}
	cout<<"\nEnter the total roll numbers=";
	cin>>n;
	cout<<"\nEnter the roll number= ";
	
	for(i=0;i<n;i++)
	{
	cin>>a[i];
	}
	cout<<"\n\nThe roll numbers are=" ;
	cout << "";
	
	for(i=0;i<n;i++)
	{
	cout<<a[i]<<" ";
	}
	
	for(pass=0;pass<n;pass++)
	
		for(j=0;j<n-pass-1;j++)
		{
			if(a[j]>a[j+1])
			{
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
			}
		}
		
	cout<<"\nThe sorted roll numbers are=";
	for(i=0;i<n;i++)
	cout<<a[i]<<" ";

	}
	
	
/*Enter total Names=3

Enter the name=pooja
ram
sita

the names are= pooja ram sita 

Enter total no whose sgpa want to display=3

Enter the sgpa=9
8
7

The sgpa are= 9 8 7 9 8 7 
Enter the total roll numbers=5

Enter the roll number= 3
2
1
55
66


The roll numbers are=3 2 1 55 66 
The sorted elements are=1 2 3 55 66*/


	
