/*
	https://codeforces.com/problemset/problem/281/A
 */

#include <iostream>
#include <string>

int main(){
	std::string s;
	std::cin >> s;
	if (s[0] >= 97) s[0] -= 32;

	std::cout << s;

	return 0;
}
