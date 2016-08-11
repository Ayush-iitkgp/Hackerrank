#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
	


	int arr_one[26],arr_two[26];
	for(int i=0;i<26;i++)
		arr_one[i] = 0;

	int N;
	cin>>N;
	int tmp = N;
	while(N--){
		for(int i=0;i<26;i++)
			arr_two[i] = 0;

		string s;
		cin>>s;
		for(int i =0;i<s.size();i++)
			arr_two[s[i]-'a']++;

		for(int i=0;i<26;i++)
			if(arr_two[i] > 0)
				arr_one[i]++;


	}

	// for(int i =0;i<26;i++)
	// 	cout<<arr_one[i]<<" ";

	// cout<<endl;


	int number = 0;

	//cout<<"The value of N is "<<N<<endl;

	for(int i =0;i<26;i++){
		if(arr_one[i]>=tmp){
			
			number = number + 1;
			//cout<<arr_one[i]<<" "<<number<<endl;

		}
	}

		

	cout<<number<<endl;
    return 0;
}
