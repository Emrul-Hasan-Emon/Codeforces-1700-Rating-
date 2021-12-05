///              B I S M I L L A H I R  R A H M A N I R  R A H I M

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
typedef pair < ll, ll >                pll;
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
const int lx=5e6+123;
const ll mod = 1000000007;
// ll means long long int macros
ll divisor[lx], sum[lx];

void number_of_divisors()
{
    ll i, j;

    for(i=2; i<lx; i++)
    {
        if(divisor[i]==0)
        {
            for(j=i; j<lx; j+=i)
            {
                divisor[j]=1+divisor[j/i];
            }
        }
    }

    for(i=1; i<lx; i++)
    {
        divisor[i]=divisor[i]+divisor[i-1];
    }
}

void solve()
{
    ll a, b, x;
    cin>>a>>b;
    cout<<divisor[a]-divisor[b]<<endl;
}

void init_code()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}

int main()
{
    faster
    number_of_divisors();
    tc
//init_code();

    solve();
// A L H A M D U L I L L A H
// 1 2 3 2 1
}

/*

ll fact(ll n)
{
    ll ans=1;
    for(ll i=1; i<=n; i++)
        ans=(ans*i)%mod;
    return ans;
}

ll Big_Mod(ll a, ll b)
{
    if(b==0)
        return 1;

    ll ans;
    ans=Big_Mod(a, b/2);
    ans=(ans*ans)%mod;

    if(b&1)
        ans=(ans*a)%mod;

    return ans;
}

ll nCr(ll n, ll k)
{
    return fact(n)*1ll*Big_Mod(fact(k), mod-2)%mod*1ll*Big_Mod(fact(n-k), mod-2)%mod;
}

ll gcd(ll a, ll b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}


void sum_of_divisor()
{
    for(li i = 1; i * i <= 1e7; i++)
    {
        for(li j = i*i; j < 1e7; j += i)
        {
            if(j == i*i)
                a[j] += i;
            else
                a[j] += i+(j/i);
        }
    }
}

*/
