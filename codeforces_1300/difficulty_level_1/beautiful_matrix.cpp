/*
https://codeforces.com/problemset/problem/263/A
*/

#include <iostream>
#include <cmath>

int main(){
		int xCoord , yCoord;
		xCoord = yCoord = 0;
		int count = 0;
		int num;
		int ans;

		while (count++ < 25){
			std::cin >> num;
			if (num){
				ans = (std::abs(xCoord - 2) + std::abs(yCoord - 2));				
			}
			xCoord++;
			if (xCoord % 5 == 0){
				xCoord = 0;
				yCoord++;
			}
		}

		std::cout << ans;

	return 0;
}
