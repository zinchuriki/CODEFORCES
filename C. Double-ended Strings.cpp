#include <bits/stdc++.h>
using namespace std;

void check(string &a, string &b, int count, int &ans)
{

    if (a == b)
    {
        ans = min(ans, count);
        return;
    }
    int as = a.size(), bs = b.size();
    if (a.size() == 0)
    {

        ans = min(ans, count + bs);
        return;
    }

    if (b.size() == 0)
    {
        ans = min(ans, count + as);
        return;
    }
    char c = a[0];
    a.erase(0, 1);
    check(a, b, count + 1, ans);
    a.insert(0, 1, c);
    c = a[as - 1];
    a.pop_back();
    check(a, b, count + 1, ans);
    a.push_back(c);
    c = b[0];
    b.erase(0, 1);
    check(a, b, count + 1, ans);
    b.insert(0, 1, c);
    c = b[bs - 1];
    b.pop_back();
    check(a, b, count + 1, ans);
    b.push_back(c);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt;
    cin >> tt;
    while (tt--)
    {

        string a, b;
        cin >> a >> b;
        int ans=INT_MAX;
        check(a,b,0,ans);

        cout<<ans<<'\n';
    }

    return 0;
}