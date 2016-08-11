#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

void swap(char *x, char*y){

	char *tmp;
	*tmp = *x;
	*x = *y;
	*y = *tmp;

}

void permutations(string str,int begin,int end){


	if(begin==end){
		//count ++;
		for(int i=0;i<=end;i++)
			cout<<str[i];
		cout<<endl;
		//return count;

	}
		

	else{
		for(int i=begin;i<=end;i++){
			char tmp = str[begin];
			str[begin] = str[i];
			str[i] = tmp;
			permutations(str,begin+1,end);
			tmp = str[i];
			str[i] = str[begin];
			str[begin] = tmp;

		}


	}



}

int main(int argc, char const *argv[])
{
	string str;
	cin>>str;
	cout<<endl;

	permutations(str,0,str.size()-1);

	return 0;
}