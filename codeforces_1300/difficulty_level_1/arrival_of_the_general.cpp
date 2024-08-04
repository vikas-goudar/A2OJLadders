/*
	https://codeforces.com/problemset/problem/144/A
*/

#include <iostream>

int main(){
	int n;
	int max = -1, min = -1;
	int maxIndex, minIndex;

	int index = 0;
	int temp;
	std::cin >> n;

	while (index<n){
		std::cin >> temp;
		if (max == -1){
			max = temp;
			min = temp;
			maxIndex = index;
			minIndex = index;
		}
		else{
			if (temp > max){
				max = temp;
				maxIndex = index;
			}
			else if (temp <= min){
				min = temp;
				minIndex = index;
			}
		}
		index++;
	}

	int count = 0;
	count = maxIndex + (n-1-minIndex);
	if (maxIndex>minIndex){
		count--;
	}
	std::cout << count;
	return 0;
}
