/*************************************************************************
	> File Name: ep44.cpp
	> Author: houhaien 
	> Mail: github.com/houhaien 
	> Created Time: 2019年06月16日 星期日 15时26分01秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;

#define INF 0x7fffffffffffffffLL
long long wubianx(long long  x) {
    return x * ( 3 * x - 1 ) / 2;
}
//判断是否是五边形数
int binary(long long (*func) (long long), long long n,long long x) {
    long long head = 1,tail = n, mid;
    while(head <= tail) {
        mid = (head + tail ) >> 1;
        if (func(mid) == x) return mid;
        if (func(mid) < x) head = mid +1;
        else tail = mid -1;
    }
    return 0;
}

int main() {
    long long d = INF;
    long long n = 2, p1, p2;
    while (wubianx(n) - wubianx(n-1) < d) {
        p1 = wubianx(n);
        for (int j = n - 1; j >= 1; j--) {
            p2 = wubianx(j);
            if (p1 - p2 >= d) break;
            int ind1 = binary(wubianx, 2 * n, p1 + p2);
            int ind2 = binary (wubianx, n, p1 - p2);
            if (ind1 &&ind2) {
                d = p1 - p2;
            }
        }
        n++;
    }
    cout << d <<endl;
   return 0;
}
