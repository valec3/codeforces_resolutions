#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	int n{},r{}:
	string s{};
	cin>>n;
	while(n--){
		cin>>s;
		if (s[1] == '+')
		{
			r++;
		}else{
			r--;
		}
	}
	cout<<r<<endl;
	return 0;

}