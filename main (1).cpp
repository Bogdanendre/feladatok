
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vektor;
    int n, k = 0;

    cout << "n= ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "k= ";
        cin >> k;
        vektor.push_back(k);
    }

    int pos, hossz;
    cout << "pos= ";
    cin >> pos;
    cout << "hossz= ";
    cin >> hossz;

    vektor.erase(vektor.begin() + pos, vektor.begin() + pos + hossz);

    for (int i = 0; i < vektor.size(); i++)
    {
        cout << vektor[i] << " ";
    }
    cout << endl;

    return 0;
}
