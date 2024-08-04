/*
	https://codeforces.com/problemset/problem/59/A
*/

#include <iostream>

int main(){
	int year;
	std::cin >> year;

	int a,b,c,d;

	while (true){
		year++;
		a = year/1000 % 10;
		b = year/100 % 10;
		c = year/10 % 10;
		d = year%10;

		if (a == b || a == c || a == d || b == c || b == d || c == d){
			continue;			
		}
		else{
			break;
		}
	}

	std::cout << year;

	return 0;
}
