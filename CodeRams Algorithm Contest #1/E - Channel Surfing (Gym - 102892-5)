Problem: https://codeforces.com/gym/102892/problem/5

///              B I S M I L L A H I R  R A H M A N I R  R A H I M

// ============================================================================ //
// ||                                                                        || //
// ||             International University of Business Agriculture           || //
// ||                    and Technology, Dhaka, Bangladesh                   || //
// ||                           Emrul Hasan Emon                             || //
// ||                                                                        || //
// ============================================================================ //

#include<bits/stdc++.h>
#include<vector>
#include<set>
#include<map>
#include<queue>
using namespace std;
typedef bool                      boo;
typedef int                       li;
typedef long long int             ll;
typedef unsigned long long int    l1;
typedef double                    db;

//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

typedef vector < li >                   vli;
typedef vector < ll >                   vll;
typedef set < li >                      sli;
typedef set < ll >                      sll;
typedef pair < li, li >                pli;
typedef pair < ll, li >                pll;
typedef map < li,li >                  mli;
typedef map < ll,ll >                  mll;
typedef vector < pair < li, li > >     vpi;
typedef vector < pair < ll, ll > >     vpl;

//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

#define tc                        int t;cin>>t;while(t--)
#define inp_i(a,n)                for(i=0; i<n ;i++) cin>>a[i]
#define out_i(a, b, c)            for(i=b; i<c; i++) cout<<a[i] spc; cout nl;
#define lp(i,a,b)                 for(i=a;i<b;i++)
#define len(z)                    z.begin(),z.end()
#define faster                    ios::sync_with_stdio(0); cin.tie(0);cout.tie(0);
#define input_txt                 freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#define nl                        <<"\n"
#define spc                       <<" "
#define sp                        <<" "<<
#define co(x)                     cout<<x nl
#define sz(a)                     a.size()
#define cy                        cout<<"YES" nl
#define cn                        cout<<"NO" nl
#define pb                        push_back
#define F                         first
#define S                         second
#define pi                        2*acos(0.0)
#define clr(z)                    z.clear()
#define rn                        return
#define gcd(a,b)                  __gcd(a,b)
#define mem(b,z)                  memset(b,z,sizeof(b))
#define fixed(x)                  fixed<<setprecision(x)

//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

const ll lx = 1e6 + 7;
const ll mod = 998244353;

ll a[1010];
string s[1010];
vector<ll>v[1010];

void solve()
{
	ll n, m, k, i, mint, cnl, j;
	cin >> n >> m >> k;
	
	for(i = 0; i < n; i++) cin >> a[i];
	for(i = 0; i < n; i++) cin >> s[i];
	
	for(mint = 0; mint < m; mint++)
	{
		for(i = 0; i < n; i++)
		{
			if(s[i][mint] == '1')
				v[mint].push_back(a[i]);
		}
	}
	
	for(mint = 0; mint < m; mint++) 
	{
		sort(v[mint].begin(), v[mint].end());
		reverse(v[mint].begin(), v[mint].end());
		
		for(i = 1; i < v[mint].size(); i++)
		{
			v[mint][i] += v[mint][i-1];
		}
	}
	
	for(cnl = 1; cnl <= n; cnl++)
	{
		ll score = 0;
		for(mint = 0; mint < m; mint++)
		{
			if(v[mint].empty()) continue;
			
			ll pos = cnl-1;
			if(cnl-1 >= v[mint].size()) pos = v[mint].size()-1;
			
			score += v[mint][pos];
		}
		
//		co(score);
		if(score >= k)
		{
			cout << cnl nl;
			return;
		}
	}
	cout << "-1\n";
}

void init_code()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}

int main()
{
    faster
    
    solve();

// A L H A M D U L I L L A H
// 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 2 3 4 5....
// Emrul Hasan Emon
}

