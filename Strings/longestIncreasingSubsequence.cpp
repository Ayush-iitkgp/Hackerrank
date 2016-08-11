#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	int LCS[n];

	LCS[0]=1;
	for(int i =1;i<n;i++){
		int count  = 0;
		int max = 0;
		for(int j =0;j<i;j++){
			if(arr[j]<arr[i]){
				count++;
				if(count==1)
					max = LCS[j];
				else if(LCS[j]>max)
					max = LCS[j];
			}
		}
		LCS[i]=1+max;
		cout<<LCS[i]<<endl;
	}
	int maximum;

	for(int i=0;i<n-1;i++)
		maximum = max(LCS[i],LCS[i+1]);

	cout<<"Length of the longest Increasing sequence is: "<<maximum<<endl;
		
	return 0;
}