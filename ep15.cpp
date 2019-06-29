/*************************************************************************
	> File Name: ep15.cpp
	> Author: houhaien 
	> Mail: github.com/houhaien 
	> Created Time: 2019年06月16日 星期日 20时43分56秒
 ************************************************************************/
#include <iostream>
using namespace std;
int64_t run(int x, int y)
{
    if (x == 1)return y;//若横向走到头了，只能纵向走，再走y即可
    if (y == 1)return 1;//横纵到头
    return (run(x - 1, y) + run(x, y - 1));
}
int main()
{
    int x, y;
    cout << "请输入网格的长宽： " << endl;
    cin >> x >> y;
    int64_t num=run(x,y);
    cout << "共有 " <<2* num <<"条路" << endl;
    system("pause");
}
