/*************************************************************************
	> File Name: ep28.cpp
	> Author: houhaien 
	> Mail: github.com/houhaien 
	> Created Time: 2019年05月19日 星期日 20时20分46秒
 ************************************************************************/

#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int sum = 1;
    int l = 3;
    for (; l<= 1001; ) {
        sum += 4 * l * l - 6 * l + 6;
        l += 2;
    }
    printf("%d\n",l);
    return 0;
}
