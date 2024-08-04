/*
	https://codeforces.com/problemset/problem/32/B
*/

#include <iostream>
#include <string>

int main(){
	std::string s;
	std::string ans;
	int index = 0;

	std::cin >> s;

	while (index < s.length()){
		if (s[index] == '.'){
			ans += "0";
			index++;
		}
		else if (s[index] == '-'){
			if (s[index+1] == '-'){
				ans += "2";
			}
			else{
				ans += "1";
			}
			index += 2;
		}
	}	
	
	std::cout << ans;

	return 0;
}
