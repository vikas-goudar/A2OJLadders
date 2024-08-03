/*
https://codeforces.com/problemset/problem/69/A
*/

#include <iostream>

int main(){
	int n;
	int xSum, ySum, zSum;
	int x,y,z;
		
	std::cin >> n;

	while (n--){
		std::cin >> x >> y >> z;
		xSum += x;
		ySum += y;
		zSum += z;
	}

	if (!xSum && !ySum && !zSum){
		std::cout << "YES";
	}
	else{
		std::cout << "NO";
	}

	return 0;
}
