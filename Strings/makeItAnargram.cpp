#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	string s1,s2;
	cin>>s1;
	cin>>s2;
	int arr1[26],arr2[26];

    for(int i=0;i<26;i++){
    	arr1[i]=0;
    	arr2[i]=0;
    }

    for(int i =0;i<s1.size();i++)
    	arr1[s1[i]-'a']++;

    for(int i =0;i<s2.size();i++)
    	arr2[s2[i]-'a']++;

    int count = 0;
    for(int i=0;i<26;i++){
    	count = count + abs(arr1[i]-arr2[i]);
    }

    cout<<count;
    


    return 0;
}
