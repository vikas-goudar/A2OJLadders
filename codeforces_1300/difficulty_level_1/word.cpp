/*
	 https://codeforces.com/problemset/problem/59/A
*/

#include <iostream>
#include <string>

int main(){
	std::string str;
	std::cin >> str;
	int lwr = 0, upr = 0;

	for (int i = 0; i<str.length(); i++){
		if (str[i] >= 97){
			lwr++;
		}
		else{
			upr++;
		}
	}	

	int lower = 1;
	if (upr>lwr){
		lower = 0;
	}

	if (lower == 1){
		for (int i = 0; i<str.length(); i++){
			if (str[i] < 97){
				std::cout << (char)(str[i] + 32);
			}
			else{
				std::cout << str[i];
			}
		}
	}
	else{
		for (int i = 0; i<str.length(); i++){
			if (str[i] >= 97){
				std::cout << (char)(str[i] - 32);
			}
			else{
				std::cout << str[i];
			}
		}
	}
	

	return 0;
}
