#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void disjointset(int *arr1,int *arr2,int m,int n)
{
	sort(arr1,arr1+m);
	sort(arr2,arr2+n);
	int i,j;
	int flag=0;
	i=0,j=0;
	while(i<m && j<n)
	{
		if(arr1[i]==arr2[j])
		{
			flag=1;
			break;
		}
		else if(arr1[i]<arr2[j])
		{
			i++;
		}
		else if(arr1[i]>arr2[j])
		{
			j++;
		}
	}
	if(flag==1)
	{
		//printf("Yes\n");
		std::cout<<"Yes" << std::endl;
	}
	else
	{
		std::cout<<"No"<<std::endl;
		//printf("No\n");
	}
	return;
}

int main(void)
{
	int t;
	std::cin>>t;
	while(t--)
	{
		int m,n;
		std::cin>>m;
		cin>>n;
		int arr1[m],arr2[n];
		for(int i=0;i<m;i++)
		{
			std::cin>>arr1[i];
		}
		for(int j=0;j<n;j++)
		{
			std::cin>>arr2[j];
		}
		disjointset(arr1,arr2,m,n);
	}
	return 0;
} 
