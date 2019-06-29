/*************************************************************************
	> File Name: ep32.cpp
	> Author: houhaien 
	> Mail: github.com/houhaien 
	> Created Time: 2019年06月16日 星期日 14时07分08秒
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
using namespace std;

#define MAXN 10000
//1 2 3 出现的次数
bool addtonum(int x, int *num) {
    while (x) {
        if (num[x%10]) return false; 
        num[x%10] += 1;
        x /= 10;
    }
    return true;
}
//位数判断
inline int digits(int x) {
    if(x == 0) return 1;
    return floor(log10(x)) +1;
}
//求解方法
bool isvalid(int a, int b, int c) {
    if(digits(a) + digits(b) + digits(c) - 9) return false;
    int num[10] = {0};
    num[0] = 1;
    int flag = 1;
    flag = flag && addtonum(a,num);
    flag = flag && addtonum(b,num);
    flag = flag && addtonum(c,num);
    return flag;
}
//去重
int can[MAXN + 5];

int main() {
    int sum = 0;
    for (int a = 1; a <= 99; a++) {
        for (int b = a+1; b < 10000; b++) {
            if (isvalid(a,b,a*b)){
                if(!can[a *b]) {
                    sum += a*b;
                    can[a*b]=1;
                }    
            }
        }
    }
    cout << sum <<endl;
    return 0;
}
