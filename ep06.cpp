/*************************************************************************
	> File Name: ep06.cpp
	> Author: houhaien 
	> Mail: github.com/houhaien 
	> Created Time: 2019年05月19日 星期日 19时34分19秒
 ************************************************************************/

#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int sum1 = 0, sum2 = (1 + 100) * 50;
    for (int i = 1; i <= 100; i++) {
        sum1 += i * i;
    }
    int sum3 = 100 * (2 * 100 +1) * (100 + 1) /6;
    printf("%d\n", sum2 * sum2 - sum3);
    printf("%d\n", sum2 * sum2 - sum1);
    return 0;
}
