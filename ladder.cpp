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

class ladder
{
private:
    int max = 10;
    vll a;

public:
    ladder()
    {
        f(i, 0, max)
            a.pu(-1);
    };
    ll ladder_count(ll n);
};

ll ladder::ladder_count(ll n)
{
    if (n == 1 || n == 0)
    {
        a[n] = 1;
        return 1;
    }
    else if (n < 0)
    {
        return 0;
    }
    else
    {
        a[n] = ladder_count(n - 1) + ladder_count(n - 2) + ladder_count(n - 3);
        return a[n];
    }
}

int testcase(int t)
{
    ladder l;
    while (t--)
    {
        ll n;
        cin >> n;
        cout << l.ladder_count(n);
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