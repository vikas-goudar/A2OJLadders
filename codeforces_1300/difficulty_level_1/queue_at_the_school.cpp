/*
https://codeforces.com/problemset/problem/266/B
*/

#include <iostream>
#include <string>

int main(){
	int n,t;
	std::string s;

	std::cin >> n >> t;
	std::cin >> s;
	int index;
	char temp;
	
	while (t--){
		index = 0;
		while (index<n){
			if (s[index] == 'B'){
				if (index + 1 < n){
					if (s[index+1] =='G'){
						temp = s[index];
						s[index] = s[index+1];
						s[index+1]=temp;
						index++;
					}
				}
			}
			index++;
		}	
	}
	std::cout<<s;

	return 0;
}
