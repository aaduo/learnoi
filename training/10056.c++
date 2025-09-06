/*
龟兔赛跑

描述
  学校近期打算购置一批体育器材，已知排球需要买a个，需要足球的个数是排球的2倍少5个，你能计算出来足球和排球一共有多少个吗？请编程实现

输入
  一个整数a，表示排球的个数

输出
  一个整数，表示排球，足球的总个数
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    int a = 0;
    int b = 0;
    cin >> a;
    b = a * 2 - 5;
    cout << a + b;
    return 0;
}
