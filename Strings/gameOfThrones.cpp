#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int anargramPalindrome(string s){

	cout<<s<<endl;

	int arr[26];
	for(int i = 0;i<26;i++)
		arr[i]= 0;
	// for(int i = 0;i<26;i++)
	// 	cout<<arr[i]<<endl;

	for(int i = 0 ;i<s.size();i++){
		// int a = (int)s[i]-90;
		// cout<<a<<endl;


		arr[(int)s[i]-97]++;

	}
		

	// for(int i = 0;i<26;i++)
	// 	cout<<arr[i]<<endl;

	int count = 0;
	for(int i = 0;i<26;i++){
		if(arr[i]%2 != 0){
			count++;
			if(count==2)
				break;

		}
	}
		

	if (count<=1)
		return 1;
	else
		return 0;
}


int main() {
   
    string s;
    cin>>s;
    
    //cout<<"\n"<<s<<endl; 
    int flag = 0;

    flag = anargramPalindrome(s);
    // Assign Flag a value of 0 or 1 depending on whether or not you find what you are looking for, in the given string 
    if(flag==0)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;
    
    return 0;
}
