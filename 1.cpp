#include <iostream>
using namespace std;
int intToBinary(int n)
{
    int aravt = 1; // uldegdeliig araas unshdag tul 10 r urjuuled uldegdel nemeh zarchimaar ajillana
    int uldegdel = 0;
    while (n > 0)
    {
        uldegdel += (n % 2) * aravt;
        aravt *= 10;
        n = n / 2;
    }
    return uldegdel;
}

int main()
{
    int n;
    cin >> n;
    int binary = intToBinary(n);

    cout << binary;
    return 0;
}