/*
	https://codeforces.com/problemset/problem/110/A
*/

#include <iostream>

int main(){
	int countLucky = 0;
	long long n;

	std::cin >> n; 

	while(n){
		if (n%10 == 4 || n%10 == 7) countLucky++;
		n/=10;
	}

	if ((countLucky == 4 || countLucky == 7) && countLucky != 0) std::cout << "YES";
	else std::cout << "NO";

	return 0;
}
