// tower of henoi.cpp : Defines the entry point for the console application.
//
// ConsoleApplication15.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"

using namespace std;
int transfer();
int b[]={0,0,0,0,0};
int c[]={0,0,0,0,0};
	int a[]={1,2,3,4,5};
int _tmain(int argc, _TCHAR* argv[])
{
	int i;
	for (i=0;i<20;)
	{ 
			if(b[0]==0)
			{
			    b[0]=transfer();
				i++;
			}
			if(c[0]==0)
			{
				c[0]=transfer();
				i++;
			}
		if(b[0]>c[0])
		{
			for(int j=0;j<4;j++)
			{
				b[j+1]=c[j];
				c[j]=0;
			}
			i++;
			
		}
		if(c[0]>b[0])
		{
			for(int k=0;k<4;k++)
			{
				c[k+1]=b[k];
				b[k]=0;
			}
			i++;
			
		}
		if(a[4]==0)
		{
			break;
		}
	}
	cout<<"number of steps ="<<i;
	cin>>i;
	return 0;
}
int transfer()
{
	int temp=0;
	for(int i=0;i<5;i++)
	{
		if(a[i]==0)
			continue;
		else
		{		
			temp=a[i];
			a[i]=0;
			break;
		}
	}
		return(temp);
}

		



