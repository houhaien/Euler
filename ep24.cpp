/*************************************************************************
	> File Name: ep24.cpp
	> Author: houhaien 
	> Mail: github.com/houhaien 
	> Created Time: 2019年06月25日 星期二 20时37分24秒
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

/*
int main() {
    int num[10] = {0,1,2,3,4,5,6,7,8,9};
    int cnt = 0;
    do {
        cnt++;
        if (cnt == 1000000) break;
    }while(next_permutation(num, num+10));
    for (int i = 0; i < 10; i++) {
        cout << num[i];
    }
    cout << endl;
    return 0;
}

*/


#define MAXN 10

int fact [MAXN +5] ;
int num[MAXN+5] = {0};

void init(int n) {
    fact [0] = 1;
    num[0] = 1;
    for(int i = 1; i<= n; i++) {
        fact[i] = fact[i-1] * i;
        num[i] = 1;
    }
    return ;
}

int getnum(int k, int val, int n,int &x) {
    int step = k/val;
    x = 0;
    for (int t = 0;  t <= step; x += (t<= step)) {
        t += num[x];
    }
    k %= val;
    num[x] = 0;
    return k;
}
int main(){
    init(MAXN);
    int k = 1000000 -1;
    for ( int i = MAXN; i >= 1; i-- ) {
        int x;
        k = getnum(k,fact[i-1],MAXN , x);
        cout << x;
        
    }
    cout << endl;
    return 0;
}
