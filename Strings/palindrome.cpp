#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

bool palindromeCheck(char *s, int first, int last){
	
	if(first<last){
		if(s[first]==s[last])
			palindromeCheck(s,first+1,last-1);
		else{
			cout<<"String is not palindrome"<<endl;
			return;
		}
	}
	
	else{
		cout<<"String is palindrom"<<endl;
		return;
	}
}

int main(int argc, char const *argv[])
{
	string s;
	cin>>s;
	palindromeCheck(s,0,s.size()-1);
	return 0;
}

