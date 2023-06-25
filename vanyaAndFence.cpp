#include <iostream>
#include <cmath>
#include <cstring>

using namespace std;

int main(){
	int n{},h{},a{},c{};
	cin>>n>>h;
	while(n--){
		cin>>a;
		if (a>h)
		{
			c+=2;
		}else{
			c++;
		}
	}
	cout<<c;
	return 0;
}
