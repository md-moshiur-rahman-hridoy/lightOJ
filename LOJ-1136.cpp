#define _GLIBCXX_FILESYSTEM
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef map<int, int> mi;
#define F first
#define S second
#define PB push_back
#define MP make_pair

ll divisible_1_to_n_by_3(ll n)
{
    if(n == 0) return 0;

    ll subs;
    if(n%3 == 0){
        subs = n/3;
    }else{
        subs = (n/3) + 1;
    }

    return n-subs;
}



// main function
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  int t;
  cin >> t;
  for(ll i=1; i<=t; i++){
    ll a, b;
    cin>>a>>b;

    ll result = divisible_1_to_n_by_3(b) - divisible_1_to_n_by_3(a-1);
    printf("Case 1: %lld\n", result);

  }
  return 0;
}
