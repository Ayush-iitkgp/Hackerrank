#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

    string s;
    
    getline(cin,s);

    bool arr[26];
    int flag = 1;
    for(int i =0 ;i<26;i++)
    	arr[i]=false;

    for(int i=0;i<s.size();i++){
    	if( (int)s[i]>=65 && (int)s[i]<=90)
    		arr[(int)s[i]-65]= true;
    	if((int)s[i]>=97 && (int)s[i]<=122)
    		arr[(int)s[i]-97]= true;

    }

    for(int i =0 ;i<26;i++)
    	if(arr[i]==false){
    		flag = 0;
    		break;
    	}

    	if(flag)
    		cout<<"pangram"<<endl;
    	else
    		cout<<"not pangram"<<endl;




    return 0;
}
