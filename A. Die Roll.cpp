#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    int Y, W;
    cin >> Y >> W;

    // The score Dot needs to beat or tie
    int max_val = max(Y, W);

    // Number of winning outcomes for Dot (from max_val up to 6)
    int numerator = 6 - max_val + 1;
    int denominator = 6;

    // Simplify the fraction A/B
    // Since the denominator is always 6, there are only a few cases:
    if (numerator == 6) cout << "1/1" << endl;
    else if (numerator == 0) cout << "0/1" << endl;
    else if (numerator == 1) cout << "1/6" << endl;
    else if (numerator == 2) cout << "1/3" << endl; // 2/6 simplifies to 1/3
    else if (numerator == 3) cout << "1/2" << endl; // 3/6 simplifies to 1/2
    else if (numerator == 4) cout << "2/3" << endl; // 4/6 simplifies to 2/3
    else if (numerator == 5) cout << "5/6" << endl;

    return 0;
}