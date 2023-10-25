#include <iostream>

using namespace std;

long int Sum(int s){
    return s*(s+1)/2;
}
int main()
{
    int a, b, c, n, m, p;
    cin >> a >> b >> c >> n >> m >> p;
    cout << a*n + b*m + c*p;
    return 0;
}
