
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream out ("titu2022.out");
    int x, y, fn = 1, n = 0;
    cout << "x= ";
    cin >> x;
    cout << "y= ";
    cin >> y;
    while (fn < y)
    {
        n++;
        fn = fn + 2 * n;
    }
    while (fn >= x)
    {
        out << fn << " ";
        fn = fn - 2 * n;
        n--;
    }
    out.close();
    return 0;
}
