
#include <iostream>
using namespace std;

int main()
{
    int n = 48, t1 = 0, t2 = 1, tn = 0;
    cout << t1 << "\n";
    cout << t2 << "\n";
    for (int i = 3; i <= n; ++i)
    {
        tn = t1 + t2;
        t1 = t2;
        t2 = tn;
        cout << tn << "\n";
    }
    return 0;
}
