#include <iostream>
#include <bits/stdc++.h>
#include <math.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

#define MAX_N 1005
#define INF 1e9
#define MOD 1000000007

#define endl "\n"
#define f first
#define s second
#define pb push_back
#define ll long long int
#define ull unsigned long long
//#define l size()

#define all(x) x.begin(), x.end()

string cesar(string msg, int des){
    string ans = "";
    for(char it : msg){
        it += des;
        ans += it;
    }
    return ans;
}

void solve()
{
	string msg; cin>>msg;
	cout<<cesar(msg, 3)<<endl;
}

int main() {
	fast
	int t = 1;
	//cin>>t;
	while(t--)
		solve();
	return 0;
}