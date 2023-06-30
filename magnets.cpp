#include <iostream>
#include <cmath>

using namespace std;

int main(){

	int n{},mag{},grup{1};
	bool pos{false},neg{false};
	cin>>n;
	while(n--){
		cin>>mag;
		if (mag==10)
		{
			neg	= true;
		}else if(mag == 01	){
			pos = true;
		}

		if (neg and pos)
		{
			grup++;
			(mag==10)? pos = false : neg=false;
		}
	}
	cout<<grup;
	return 0;
}