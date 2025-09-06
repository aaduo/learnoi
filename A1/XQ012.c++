/*
描述
  肥喵喵的罐头摆成了三角形，每边有a个罐头，但每个角重复计算了。猜猜实际用了几个罐头？（画图试试看哦）

输入
  输入一个整数，表示a

输出
  输出实际用了几个罐头
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int a;
    cin >> a;
    cout << (a * 3) - 3;
    return 0;
}
