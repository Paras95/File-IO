#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void disjointset(int *arr1,int *arr2,int m,int n)
{
	int flag=0;
    unordered_set<int> hash;
	int i;
	for(i=0;i<m;i++)
	{
		hash.insert(arr1[i]);
	}
	for(int j=0;j<n;j++)
	{
		if(hash.find(arr2[i])!=hash.end())
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		std::cout<<"No"<<std::endl;
	}
	else
	{
		std::cout<<"Yes"<<std::endl;	
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
