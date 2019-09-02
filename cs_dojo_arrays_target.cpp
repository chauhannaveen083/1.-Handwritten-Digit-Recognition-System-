//from two given arrays find pair having sum nearly or equal to given target
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void fun(int a[],int b[],int n,int target)
{
	int i,j,smallest_diff,current_diff,x,y;
	sort(a,a+n);
	sort(b,b+n);
	i=0;
	j=n-1;
	smallest_diff=abs(a[0]+b[0]-target);
	x=a[0],y=b[0];
	while(i<n && j>=0)
	{   current_diff=a[i]+b[j]-target;
		if(abs(current_diff)<smallest_diff)
		{  smallest_diff=abs( current_diff);
			x=a[i];
			y=b[j];
		}
		else if( current_diff==0)
		{
		  cout<<x<<" "<<y<<endl;
		  break;
		}
		else if(current_diff<0)
		   i+=1;
		else
		   j-=1;
	}
	cout<<x<<" "<<y<<endl;
}
int main() {
	int n,t,i;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int a[n],b[n];
		for(i=0;i<n;i++)
		cin>>a[i];
		for(i=0;i<n;i++)
		cin>>b[i];
		int target;
		cin>>target;
		fun(a,b,n,target);
	}
	return 0;
}
/*

int m;
int* fun(int a[],int n) // to increse last element of array elements
{
	int* b=new int[n];
	m=n;
	int carry=1,i,sum=0;
	for(i=n-1;i>=0;i--)
	{
	   sum=a[i]+carry;
	   if(sum==10)carry=1;
	   else carry=0;
	   b[i]=sum%10;
	}
	if(carry==1)
	{
		int* c=new int[n+1];
		c[0]=1;
		for(i=1;i<=n;i++)
		c[i]=b[i-1];
		m=n+1;
		return c;
	}
  return b;
}

int main() {
    int n,t,i;
    cin>>t;
    while(t--)
    {
    	cin>>n;
    	int a[n];
    	for(i=0;i<n;i++)
    	cin>>a[i];
    	int *b=fun(a,n);
  
    	for(i=0;i<m;i++)
    	cout<<b[i]<<" ";
    	cout<<endl;
    	
    }
	return 0;
}*/
