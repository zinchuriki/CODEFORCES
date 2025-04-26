#include <stdio.h>

#define MOD 998244353

// Function to solve the problem for a single number
long long solve(int n) {
    long long result = 0;
    long long power = 1;
    int bits = 1;

    while (power <= n) {
        long long count = n - power + 1 < power ? n - power + 1 : power;
        for (long long i = 0; i < count; i++) {
            long long number = power + i;
            for (int b = bits - 1; b >= 0; b--) {
                result = (result * 10 + ((number >> b) & 1)) % MOD;
            }
        }
        power *= 2;
        bits++;
    }

    return result;
}

int main() {
    int t;
    scanf("%d", &t); // Read number of test cases

    int nums[t];
    for (int i = 0; i < t; i++) {
        scanf("%d", &nums[i]); // Read each test case input
    }

    for (int i = 0; i < t; i++) {
        printf("%lld\n", solve(nums[i])); // Print result for each test case
    }

    return 0;
}