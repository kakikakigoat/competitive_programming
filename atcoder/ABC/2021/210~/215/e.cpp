#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
using ll = long long;
const long long INF = 1LL << 60;
const int SINF = 1LL << 29;
const ll mod = 1000000000+7;
const ll MOD = 998244353;
const double pi = 3.14159265358979323846;
const int dx[8] = {1, 0, -1, 0, 1, -1, -1, 1};
const int dy[8] = {0, 1, 0, -1, 1, 1, -1, -1};
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

long long dp[1024][1000][10];

int main() {
    int n;
    string s;
    cin >> n >> s;
    memset(dp, 0, sizeof(dp));

    int b = s[0]-'A';
    for(int k=0; k<10; k++) dp[1<<b][0][k] = 1;

    int n2 = (1<<n);
    for(int i=0; i<n2; i++) {
        for(int j=0; j<n; j++) {
            int x = s[j]-'A';
            for(int k=0; k<10; k++) {
                dp
            }
        }
    }
}