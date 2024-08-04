/*
	https://codeforces.com/problemset/problem/248/A
*/

#include <iostream>

int main(){
	int n;
	int cl= 0;
	int cr = 0;
	int a,b;
	
	std::cin >> n;

	for (int i =0; i<n; i++){
		std::cin >> a >> b;
		if (a == 1) cl++;
		if (b == 1) cr++;
	}
	if (cr > cl) std::cout << ((n-cr)+cl);
	else std::cout <<(cr + (n-cl));

	return 0;
}
