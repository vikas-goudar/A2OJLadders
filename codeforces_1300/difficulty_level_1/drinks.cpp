/*
	https://codeforces.com/problemset/problem/200/B
 */

#include <iostream>

int main(){
	int n;
	std::cin >> n;

	double nn, ans =0;
	for (int i = 0; i<n; i++){
		std::cin >> nn;
		ans += nn/n; 
	}

	std::cout << ans;
	return 0;
}
