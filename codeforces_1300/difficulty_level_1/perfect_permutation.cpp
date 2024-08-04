/*
	https://codeforces.com/problemset/problem/233/A
*/

#include <iostream>

int main(){
	int n;
	std::cin >> n;

	int index = 1;

	if (n%2 == 1) std::cout << -1;
	else{
		while (index <=n){
			if (index %2 == 0){
				std::cout << index-1 << " ";
			}
			else{
				std::cout << index+1 << " ";
			}
			index++;
		}	
	}

	return 0;
}
