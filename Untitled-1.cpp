#include <iostream>
#include <vector>
using namespace std;

class BinarySequenceSolver {
private:
    const long long MOD = 998244353;
    
    // Returns (base^exp) % MOD
    long long power_mod(long long base, long long exp) {
        long long result = 1;
        base %= MOD;
        while (exp > 0) {
            if (exp & 1) {
                result = (result * base) % MOD;
            }
            base = (base * base) % MOD;
            exp >>= 1;
        }
        return result;
    }
    
    // Returns count of numbers with given prefix length
    long long get_count(long long n, int prefix_len) {
        long long start = (1LL << (prefix_len - 1));
        long long end = min(n, (1LL << prefix_len) - 1);
        return max(0LL, end - start + 1);
    }
    
    long long solve_single(long long n) {
        if (n == 0) return 0;
        
        // Find the highest bit position in n
        int max_bits = 0;
        long long temp = n;
        while (temp) {
            max_bits++;
            temp >>= 1;
        }
        
        long long result = 0;
        long long ten_power = 1;
        
        // Process each length from 1 to max_bits
        for (int len = 1; len <= max_bits; len++) {
            // Count numbers of this length
            long long count = get_count(n, len);
            if (count == 0) continue;
            
            // For numbers of length 'len':
            // 1. Each number contributes 'len' digits
            // 2. Each position's contribution can be calculated using combinatorics
            long long positions = count * len % MOD;
            
            // For each bit position in current length
            for (int pos = len - 1; pos >= 0; pos--) {
                // Calculate contribution of 1s at this position
                long long ones_count = count / 2;
                if (pos == len - 1) {
                    // First bit is always 1
                    ones_count = count;
                } else if (count & 1) {
                    // Handle odd count case
                    ones_count += (((1LL << pos) & n) > 0);
                }
                
                // Add contribution of this position
                long long contribution = (ones_count * ten_power) % MOD;
                result = (result + contribution) % MOD;
                ten_power = (ten_power * 10) % MOD;
            }
        }
        
        return result;
    }

public:
    void solve() {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        
        int t;
        cin >> t;
        
        while (t--) {
            long long n;
            cin >> n;
            cout << solve_single(n) << '\n';
        }
    }
};

int main() {
    BinarySequenceSolver solver;
    solver.solve();
    return 0;
}