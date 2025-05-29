
#include <iostream>
#include <fstream>

using namespace std;

bool szamjegy(int szam)
{
    int utolso = szam % 10;
    while (szam > 0)
    {
        if (szam % 10 != utolso)
            return false;
        szam = szam / 10;
    }
    return true;
}

int main()
{
    int szam, v[1000], db = 0;
    ifstream in("table.txt");
    while (in >> szam)
    {
        if (szamjegy(szam))
        {
            v[db] = szam;
            db++;
        }
    }
    if (db == 0)
    {
        cout << "DOES NOT EXIST";
    }
    else
    {
        for (int i = 0; i < db - 1; i++)
        {
            for (int j = i + 1; j < db; j++)
            {
                if (v[i] > v[j])
                {
                    int uj = v[i];
                    v[i] = v[j];
                    v[j] = uj;
                }
            }
        }
        for (int i = 0; i < db; i++)
        {
            cout << v[i] << endl;
        }
    }
    return 0;
}
