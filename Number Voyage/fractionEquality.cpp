#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	const int p = 10010101;
	const int q = 11111117;
	int sum = 0;
	for(int a = 1; a<p+q;a++){
		if(a!=p || a!=q){
			sum = sum + (2*a - (p+q));

		}
		

	}
		
	
	cout<<sum<<endl;

	return 0;
}