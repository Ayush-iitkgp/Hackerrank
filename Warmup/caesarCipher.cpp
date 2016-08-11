#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>


using namespace std;

int main(int argc, char const *argv[])
{
	
	int K;
	cin>>K;
	string str;
	cin>>str;
	for(int i=0;i<str.size();i++){


		int a = (int)str[i];
		cout<<a<<endl;
		if(a>=65 && a<=90){
			cout<<"Old Character is(less than 90) :"<<str[i]<<endl;
			if((int)str[i]+K<=90)
				str[i] = (char)((int)str[i]+K);
			else
				str[i]= (char)(65 + ((int)str[i]+K-91));
			cout<<"New Character is :"<<str[i]<<endl;

		}

		else if(a>=97 && a<=122){
			cout<<"Character is :"<<str[i]<<endl;
			if((int)str[i]+K<=122)
				str[i] = (char)((int)str[i]+K);
			else
				str[i]= (char)(97+((int)str[i]+K-123));

			cout<<"New Character is :"<<str[i]<<endl;
		}
	}

	for(int i=0;i<str.size();i++)
		cout<<str[i];

	return 0;
}