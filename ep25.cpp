/*************************************************************************
	> File Name: ep25.cpp
	> Author: houhaien 
	> Mail: github.com/houhaien 
	> Created Time: 2019年06月15日 星期六 19时50分53秒
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
using namespace std;

int f[3][1005];
int main() {
    int n = 2;
    f[1][0] = f[2][0]= f[1][1] = f[2][1]=1; 
    /*非大整数
    while(floor(log10(f[n % 3] )) < 3.0) {
        n++;
        f[n%3] = f[(n-1)%3] + f[(n-2) % 3];

    }
    */
    while(f[n%3][0] < 1000) {
        n++;
        int n0 = n%3,n1 = (n-1)%3,n2 = (n-2)%3;
        
        for (int i = 1; i <= f[n1][0]; i++) {
            f[n0][i] = f[n1][i]+f[n2][i];
        }
        f[n0][0] = f[n1][0];

        for(int i =1; i<= f[n0][0];i++) {
            if(f[n0][i] < 10) continue;
            f[n0][i+1] += f[n0][i] / 10;
            f[n0][i] %= 10;
            //位数
            f[n0][0] += (f[n0][0] == i);
        }
    }
    cout << n << endl;
    return 0;
}
