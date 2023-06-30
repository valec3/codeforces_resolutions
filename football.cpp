#include <iostream>
#include <cmath>
#include <cstring>

using namespace std;

int main(){ 
	int zero{},one{};
	string s{};
	cin>>s;
	for (int i = 0; i < s.size(); i++)
	{
		if(s[i]=='1'){
			one++;
			zero=0;
		}else{
			one=0;
			zero++;
		}

		if (one==7 ||zero==7)
		{
			cout<<"YES";
			return 0;
		}
	}
	cout<<"NO";
	return 0;
}
