#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    long long n, k;
    cin >> n >> k;
    if (k == 1) cout << (n-1);
    else {
        long long r = log(n*(k-1)) / log(k);
        cout << r;
    }

}

