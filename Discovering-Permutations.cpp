#include <bits/stdc++.h>
using namespace std;
#define OPTIMIZE ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<string> vs;
typedef map<int, int> mi;
#define F first
#define S second
#define PB push_back
#define MP make_pair
int n,k;

// main function
int main() {
  OPTIMIZE;
  
  int t, tcase=1;
  cin >> t;
  while (t--) {
    
    cin>>n>>k;
    string charecters = "";
    for(int i=0; i<n; i++) {
        charecters += ('A'+i);
    }
    cout<<"Case "<<tcase++<<":"<<endl;
    do{
        for(int i=0; i<n; i++) cout<<charecters[i];
        cout<<endl;
        k--;
    }while(next_permutation(charecters.begin(), charecters.end()) && k);
  }
  return 0;
}
