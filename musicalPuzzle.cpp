#include<bits/stdc++.h>
using namespace std;
int main(){
	int t{}, n{};
	string str;
	cin >> t;
	while (t--){
		cin >> n;
		set <string> melodies;
		cin >> str;
		for (int i=0; i<str.length()-1; i++){
			melodies.insert(str.substr(i, 2));
		}
		cout << melodies.size()<<"\n";
	}
}