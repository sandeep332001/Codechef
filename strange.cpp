/* Sandeep Code's Only */
#include <bits/stdc++.h>
using namespace std;

#define F first
#define S second
#define PB push_back
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
        ll n, x;
        cin >> n >> x;
        vll a(n);
        f(i, 0, n) cin >> a[i];
        ll max1 = 0;
        ll sum = 0;
        f(i, 0, n)
        {
            if ((a[i] % x) != 0)
                max1 += (a[i] / x) + 1;
            else
            {
                max1 += (a[i] / x);
            }

            sum += a[i];
        }
        ll min1 = 0;
        if ((sum % x) != 0)
        {
            min1 = min1 + (sum / x) + 1;
        }
        else
        {

            min1 = min1 + (sum / x);
        }
        cout << min1 << " " << max1 << "\n";
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