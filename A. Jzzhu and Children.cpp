#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;

    vector < pair < int, int >> vec, vec1;

    int a;
    pair < int, int > p;
    for (int i = 0; i < n; ++i) {
        cin >> a;
        p.first = i + 1;
        p.second = a;
        vec.push_back(p);

    }

    int ans;
    a = 0;
    while (a < n) {

        int pos = 0;
        for (int i = 0; i < n; ++i) {
            p = vec[i];
            if (p.second <= 0)
                continue;


            p.second -= m;
            if (p.second <= 0)
                vec1.push_back(p);
            vec[i] = p;




        }
        a = vec1.size();

    }

    p = vec1[n - 1];
    cout << p.first;


    return 0;
}