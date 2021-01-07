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

int testcase(int t)
{
    while (t--)
    {
        ll n;
        cin >> n;
        vll a(n);
        f(i, 0, n) cin >> a[i];
        ll c = 1;
        vll dp(2, 1);
        // dp[0] = 1;
        f(i, 0, n - 1)
        {
            if (a[i] <= a[i + 1])
            {
                c++;
            }
            if ((a[i] > a[i + 1]) || (i == (n - 2)))
            {
                dp[1] = c;
                dp[0] = max(dp[0], dp[1]);
                c = 1;
            }
        }
        cout << dp[0];
    }
    return 0;
}
int main()
{
    FAST;
    int t = 1;
    // cin >> t;
    testcase(t);
    return 0;
}