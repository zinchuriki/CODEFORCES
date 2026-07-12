#include <iostream>
#include <algorithm>

using namespace std;

void solve()
{
    long long n, k;
    cin >> n >> k;

    long long total_popcount = 0;
    long long current_power = 1;

    // Continue as long as we have enough sum 'n' to potentially buy a bit
    // at the current power of 2
    while (current_power <= n)
    {

        // How many bits of this power can we afford? (Max is k)
        long long bits_to_buy = min(k, n / current_power);

        // Add them to our answer
        total_popcount += bits_to_buy;

        // Deduct the "cost" from our total allowed sum
        n -= bits_to_buy * current_power;

        // Move to the next bit position (multiply cost by 2)
        current_power *= 2;
    }

    cout << total_popcount << "\n";
}

int main()
{
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}