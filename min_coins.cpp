/* Sandeep Code's Only */
#include <bits/stdc++.h>
using namespace std;

#define F first
#define S second
#define MP make_pair
#define f(i, m, n) for (int i = m; i < n; i++)

#define pii pair<int, int>
#define pll pair<ll, ll>

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> pi;

#define endl "\n"
#define pu push_back
#define pp pop_back
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()

#define FAST                                                   \
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0); \
    srand(time(NULL));
#define MOD 1000000007
#define INF LONG_LONG_MAX
#define MINF LONG_LONG_MIN

class min_coins
{
private:
    int max_size = 101;
    vll a;

public:
    min_coins();
    ll fuc(vector<ll> &v, ll amount, ll n);
    ll fuc1(vector<ll> &v, ll n);
};

min_coins::min_coins()
{
    a.pu(0);
    f(i, 1, max_size) a.pu(INF);
}

ll min_coins::fuc(vector<ll> &v, ll amount, ll n)
{
    if (amount == 0)
        return 0;
    ll ans = INF;
    for (ll i = 0; i < n; i++)
    {
        if ((amount - v[i]) >= 0)
        {
            ll smaller_ans = fuc(v, amount - v[i], n);
            ans = min(ans, smaller_ans + 1);
        }
    }
    return ans;
}

ll min_coins::fuc1(vector<ll> &v, ll n)
{
    ll size = v.size();
    // f(i, 0, v.size()) a[v[i]] = 1;
    for (int rupay = 1; rupay <= n; rupay++)
    {
        for (int i = 0; i < size; i++)
        {
            if (v[i] <= rupay)
            {
                ll smallercoin = a[rupay - v[i]];
                if (smallercoin != INF)
                    a[rupay] = min(a[rupay], smallercoin + 1);
            }
        }
    }
    return a[n];
}

int testcase(int t)
{
    min_coins m;
    while (t--)
    {
        vll v = {1, 7, 10};
        //ll amount = 10;
        ll amount;
        cin >> amount;
        // cout << m.fuc(v, amount, v.size());
        cout << m.fuc1(v, amount);
    }
    return 0;
}
int main()
{
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    FAST;
    int t = 1;
    cin >> t;
    testcase(t);
    return 0;
}