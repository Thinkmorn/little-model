#include <iostream>
using namespace std;

long long jc(int a)
{
    long long sum = 1;
    for (int i = a; i >= 1; i--)
    {
        sum *= i;
    }
    return sum;
}

int main()
{
    int n;
    long long x = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        x += jc(i);
    }
    cout << x;
    return 0;
}