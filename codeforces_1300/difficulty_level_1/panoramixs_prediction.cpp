/*
	https://codeforces.com/problemset/problem/80/A
*/

#include <iostream>
#include <cmath>

int checkPrime(int n){
	for (int i = 2; i<n; i++){
		if (n%i==0) return 0;
	}
	return 1;
}

int main(){
	int a,b;
	std::cin >> a >> b;		

	int isPrime = 0;
	for (int i = a+1; i<b; i++){
		isPrime = checkPrime(i);
		if (isPrime) break;
	}
	if (isPrime) std::cout << "NO";
	else if (checkPrime(b)) std::cout << "YES";
	else std::cout << "NO";

	return 0;
}
