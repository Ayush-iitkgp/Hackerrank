#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

void funnyString(){
	string s;
	cin>>s;
	int n = s.size();
	int flag = 1;
	for(int i = 0;i< n/2;i++)
		if(abs(s[i]-s[i+1]) != abs(s[n-1-i]-s[n-2-i])){
			flag = 0;
			//cout<<i<<endl;

			break;
		}
	if(flag)
		cout<<"Funny"<<endl;
	else
		cout<<"Not Funny"<<endl;




}

int main() {
	int T;
	cin>>T;
	while(T--)
		funnyString();

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
