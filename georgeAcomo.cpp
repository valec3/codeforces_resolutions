#include <iostream>
#include <cmath>
#include <cstring>

using namespace std;

int main(){
	int n{},m{},l{},res{};
	cin>>n;
	while(n--){
		cin>>m>>l;
		if ((l-m)>=2)
		{
			res++;
		}
	}
	cout<<res;
	return 0;
}
