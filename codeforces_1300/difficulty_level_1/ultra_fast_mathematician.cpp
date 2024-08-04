/*
	https://codeforces.com/problemset/problem/61/A
*/

#include <iostream>
#include <string>

int main(){
	std::string a,b;
	std::cin >> a >> b;

	for (int i = 0; i<a.size(); i++){
		std::cout << ((a[i] == b[i]) ? 0 : 1);
	}

	return 0;
}
