/*
	https://codeforces.com/problemset/problem/275/A
 */

#include <iostream>

int main() {
    int arr[3][3];
    int res[3][3];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            std::cin >> arr[i][j];
            res[i][j] = 1; // All lights start as on
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (arr[i][j] % 2 == 1) { 
                res[i][j] ^= 1; 

                if (i - 1 >= 0) res[i - 1][j] ^= 1; 
                if (i + 1 < 3) res[i + 1][j] ^= 1;  
                if (j - 1 >= 0) res[i][j - 1] ^= 1;
                if (j + 1 < 3) res[i][j + 1] ^= 1;
            }
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            std::cout << res[i][j];
        }
        std::cout << std::endl;
    }

    return 0;
}
