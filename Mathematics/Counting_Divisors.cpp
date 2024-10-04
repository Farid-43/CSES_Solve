#include "bits/stdc++.h"
using namespace std;
const int MOD = 1e9 + 7;
const double PI = acos(-1);
typedef long long ll;
typedef unsigned long long ull;
#define SetBit(x, k) (x |= (1ll << k))
#define ClearBit(x, k) (x &= ~(1ll << k))
#define CheckBit(x, k) ((x >> k) & 1)
#define toggleBit(x, k) (x ^ (1ll << k))
#define FAST                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0)

ll divisor_count[1000005] = {};
void calc()
{
    for (int i = 1; i < 1000005; i++)
    {
        for (int j = i; j < 1000005; j += i)
        {
            divisor_count[j]++;
        }
    }
}

int main()
{
    FAST;
    int T, i, j;
    calc();
    cin >> T;
    while (T--)
    {
        cin >> j;
        cout << divisor_count[j] << endl;
    }
    return 0;
}