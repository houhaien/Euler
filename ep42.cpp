/*************************************************************************
	> File Name: ep42.cpp
	> Author: houhaien 
	> Mail: github.com/houhaien 
	> Created Time: 2019年06月29日 星期六 15时06分02秒
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include "42.txt"
using namespace std;

#define MAXN 2000

int triangle(int x) {
    return x * (x + 1) / 2;
}

bool binary_search(int (*func)(int), int l, int r,int x) {
    if (l > r) return false;
    int mid = ( l + r) >> 1;
    if (func(mid) == x) return true;
    if (func(mid) > x)  r = mid - 1;
    else l= mid + 1;
    return binary_search(func, l, r, x);
}

bool isvalid (char *str) {
    int sum = 0;
    for (int i = 0; str[i];i++) {
        sum += (str[i] - 'A' + 1);
    }
    return binary_search(triangle, 1,sum, sum);
}
int main() {
    int cnt = 0;
    int n = sizeof(a) / 100;
    cout << n << endl;
    for (int i = 0; i < n; i++) {
        if (isvalid(a[i])) 
        cnt++;
    }
    cout << cnt << endl;
}
