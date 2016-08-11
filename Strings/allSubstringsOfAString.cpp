#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
	/* code */
	string str;
	cin>>str;
	//cout<<str[0];
	;
	for(int i = 0; i< str.size();i++){
		string tmp;
		int k = 0;
		for(int j=i;j<str.size();j++){
			tmp[k]=str[j];
			//cout<<tmp[k]<<" ";
			k++;
			for(int l=0;l<k;l++)
				cout<<tmp[l];
			cout<<endl;
			
		}

	}
	return 0;
}