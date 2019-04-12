/*************************************************************************
	> File Name: ep02.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年04月09日 星期二 10时53分41秒
 ************************************************************************/

#include<iostream>
#define max 4000000
using namespace std;
int main() {
    int fib[2] ={1,1};
    int n = 2, sum = 0;
    while(fib[(n-1) % 2] <= max) {
        if(fib[(n-1) % 2] % 2 == 0) {
            sum += fib[(n-1)%2];
        }
        fib[n % 2] = fib[(n-1) % 2] +fib[(n - 2) % 2];
        n++;
    }
    cout << sum << endl;
    return 0;
}
