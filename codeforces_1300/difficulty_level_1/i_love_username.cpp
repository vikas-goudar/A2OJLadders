/*
	https://codeforces.com/problemset/problem/155/A
*/

#include <iostream>

int main(){
	int n;
	std::cin >> n;

	int max, min, ans = 0;
	int inp;

	for (int i =0; i<n; i++){
		std::cin >> inp;
		if (i==0){
			max = inp;
			min = inp;
			continue;
		}
		if (inp>max){
			max = inp;
			ans++;
		}
		else if (inp<min){
			min = inp;
			ans++;
		}
	}
	std::cout << ans;

	return 0;
}
