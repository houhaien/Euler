/*************************************************************************
	> File Name: ep04.cpp
	> Author: houhaien 
	> Mail: github.com/houhaien 
	> Created Time: 2019年05月19日 星期日 19时15分53秒
 ************************************************************************/

#include <iostream>
#include <cstdio>
using namespace std;

int isvalid(int x,int base) {
    int raw = x,temp = 0;
    while(x) {
        //推到代码正确型
        temp = temp * base + x % base;
        x /= base;
    }
    return temp ==raw;
}
int main() {
    int ans = 0;
    for (int i = 100; i < 1000; i++) {
        for (int j = i; j < 1000; j++) {
            if (isvalid(i * j, 10) && i *j > ans) {
                ans = i * j;
            }
        }
    }
    printf("%d\n", ans);
    return 0;
}
