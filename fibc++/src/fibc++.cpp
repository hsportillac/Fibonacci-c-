
#include <iostream>
using namespace std;

void calcFibChar(int n){
   char t1 = 0, t2 = 1, tn = 0; 
   cout << int(t1) << "\n";
   cout << int(t2) << "\n";
   for (int i = 3; i <= n; ++i)
    {
        tn = t1 + t2;
        t1 = t2;
        t2 = tn;
        cout << int(tn) << "\n";
    }

}

void calcFibShort(int n){
   short int t1 = 0, t2 = 1, tn = 0; 
   cout << int(t1) << "\n";
   cout << int(t2) << "\n";
   for (int i = 3; i <= n; ++i)
    {
        tn = t1 + t2;
        t1 = t2;
        t2 = tn;
        cout << int(tn) << "\n";
    }

}

void calcFibInt(int n){
   int t1 = 0, t2 = 1, tn = 0; 
   cout << int(t1) << "\n";
   cout << int(t2) << "\n";
   for (int i = 3; i <= n; ++i)
    {
        tn = t1 + t2;
        t1 = t2;
        t2 = tn;
        cout << int(tn) << "\n";
    }

}

void calcFibLLI(int n){
   long long int t1 = 0, t2 = 1, tn = 0; 
   cout << int(t1) << "\n";
   cout << int(t2) << "\n";
   for (int i = 3; i <= n; ++i)
    {
        tn = t1 + t2;
        t1 = t2;
        t2 = tn;
        cout << (long long int)(tn) << "\n";
    }

}

int main()
{   // Char limite n = 12
    calcFibChar(12);
    // Short limite n = 24
    calcFibShort(24);
    // Int limite n = 47
    calcFibInt(47);
    // Long long int limite n = 93
    calcFibLLI(93);
}

