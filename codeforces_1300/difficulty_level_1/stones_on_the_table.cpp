/*
	https://codeforces.com/problemset/problem/266/A
*/

#include <iostream>
#include <string>

int main(){
	int n;
	std::cin >> n;

	std::string str;
	std::cin >> str;

	int ans = 0;
	char compare = str[0];

	for (int i = 1; i<n; i++){
		if (str[i] == compare) ans++;
		else compare = str[i];
	}
	std::cout << ans;
	return 0;
}

