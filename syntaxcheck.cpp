
#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math,inline")
#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, k;
  cin >> n >> k;

  unordered_map<int, int> hash;

  int a;
  for (int i = 0; i < n; ++i)
  {
    cin >> a;
    hash[a]++;
  }

  auto comp = [](pair<int, int> a, pair<int, int> b)
  {
    if (b.first > a.first)
      return true;

    if (b.second < a.second)
      return true;

    return false;
  };

  priority_queue<pair<int, int>, vector<pair<int, int>>, decltype(comp)> pq(comp);

  for (auto it = hash.begin(); it != hash.end(); ++it)
    pq.push({it->second, it->first});
  pair<int, int> p;
  for (int i = 0; i < k; ++i)
  {
    p = pq.top();
    pq.pop();
    cout << p.second << " ";
  }

  return 0;
}