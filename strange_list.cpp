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
        vll a(n + 3, 0);
        ll sum = 0;
        // ll xx = 0;
        vll b(n + 3, 0);
        f(i, 0, n)
        {
            cin >> a[i];
            b[i] = a[i];
            sum += a[i];
        }

        // ll c = 0;
        // bool gg = false;
        for (int i = 0; i < n; i++)
        {
            if ((b[i] % x) == 0)
            {
                b[i] = b[i] / x;
                sum = sum + a[i];
                if (i == (n - 1))
                {
                    i = -1;
                }
            }
            else
            {
                break;
            }
        }
        cout << sum << "\n";
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