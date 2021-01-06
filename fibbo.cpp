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

class fibbo
{
private:
    ll a[10000 + 1]; /// change array size for more series for 100th max size should be 100+1

public:
    fibbo()
    {
        f(i, 0, (10000 + 1)) a[i] = -1; // change the array size according to you
    };
    ll fibbo1(ll n) //Top Down Apporch
    {
        if (a[n] != (-1))
            return a[n];

        if (n == 0 || n == 1)
        {
            a[n] = n;
            return n;
        }
        else
        {
            a[n] = fibbo1(n - 1) + fibbo1(n - 2);
            return a[n];
        }
    }
    ll fibbo2(ll n) // Bottom Up Approch
    {
        a[0] = 0;
        a[1] = 1;
        f(i, 2, n + 1)
        {
            a[i] = a[i - 1] + a[i - 2];
        }
        return a[n];
    }
};

int testcase(int t)
{
    fibbo f;
    while (t--)
    {
        ll n;
        cin >> n; // answer will be correct till 92th number
        cout << f.fibbo1(n);
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