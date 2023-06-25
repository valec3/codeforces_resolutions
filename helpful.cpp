#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	string s{};
	vector<char>nums;
	cin>>s;
	for (int i = 0; i < s.size(); ++i)
	{
		if(s[i] != '+'){
			nums.push_back(s[i]);
		}
	}
	sort(nums.begin(), nums.end());
	int t{1};
	for (char x:nums)
	{
		cout<<x;
		if(t == nums.size()) 
			break; 
		cout<<"+";
		t++;
	}
	
	return 0;

}