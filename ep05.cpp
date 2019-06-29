/*************************************************************************
	> File Name: ep05.cpp
	> Author: houhaien 
	> Mail: github.com/houhaien 
	> Created Time: 2019年06月11日 星期二 20时11分06秒
 ************************************************************************/

#include <iostream>
#include <cstdio>
using namespace std;

int gcd (int a,int b) {
    if (b == 0) return a;
    return gcd (b, a % b);
   // return (b ? gcd(b, a% b) : a);
}
//拓展欧几里得  int &x  引用概念
int exgcd (int a, int b, int &x,int &y) {
    if (b == 0) {
        x = 1, y = 0;
        return a;
    }
    int ret = exgcd(b, a%b, y ,x);
    y -= a/b * x;
    //int xx, yy, ret;
    /*ret = exgcd(b, a% b, xx, yy);
    x = yy;
    y = xx - a / b * yy;
    */
    return ret;
}

int main() {
    int x, y;
    exgcd(5,7,x,y);
    cout << exgcd <<":" << " ";
    cout << x << " " << y << endl;
    cout << x << " " << y << endl;

    long long  ans = 1;
    for (int i = 1; i <= 20; i++) {
        ans *= i / gcd (i, ans);
    }
    printf("%lld\n",ans);
    return 0;
}
