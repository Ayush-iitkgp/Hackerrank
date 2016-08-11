#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
	string str1,str2;
	cin>>str1>>str2;
	int size1 =str1.size();
	int size2 = str2.size();
	cout<<size1<<" "<<size2<<endl;

	int LCS[size1+1][size2+1];

	for(int i = 0;i<size1;i++) 
		LCS[i][0] = 0;
	for(int i =0;i<size2;i++)
		LCS[0][i] = 0;

	for(int i = 1;i<=size1;i++)
		for(int j = 1;j<=size2;j++){
			if(str1[i-1]==str2[j-1])
				LCS[i][j]= 1+LCS[i-1][j-1];
			else
				LCS[i][j] = max(LCS[i][j-1],LCS[i-1][j]);

			//cout<<i<<" "<<j<<" "<<LCS[i][j]<<endl;

		}

	cout<<LCS[size1][size2]<<endl;

	return 0;
}