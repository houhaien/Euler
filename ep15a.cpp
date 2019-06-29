/*************************************************************************
	> File Name: ep15a.cpp
	> Author: houhaien 
	> Mail: github.com/houhaien 
	> Created Time: 2019年06月16日 星期日 20时59分52秒
 ************************************************************************/

#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    long long  n = 40,m = 20, ans = 1;
    while (n!= 20 || m != 0) {
        if (n != 20) ans *= (n--);
        if (m &&ans % m == 0) ans /= (m--);
    }
    cout << ans << endl;
    return 0;
}
