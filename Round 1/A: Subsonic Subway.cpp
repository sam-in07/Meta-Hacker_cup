#include<bits/stdc++.h> 
#define ll  long long 
const ll mod = 1e9+7; 
#define endl "\n" 
using namespace std; 
 
 
 
void solve(){ 
    ll n; 
    cin>>n; 
    vector<pair<int,int>> vec(n); 
    for(ll j = 0;j<n;j++){ 
        cin>>vec[j].first>>vec[j].second; 
    } 
   
    vector<double> lower(n),upper(n); 
    for(ll j = 0;j<n;j++){ 
        if(vec[j].second == 0){ 
            lower[j] = 1e9; 
            continue; 
        } 
        lower[j] = double(double((j + 1)) / double(vec[j].second)); 
    } 
   
    for(ll j = 0;j<n;j++){ 
        if(vec[j].first == 0){ 
            upper[j] = 1e9; 
            continue; 
        } 
        upper[j] = double(double((j + 1)) / double(vec[j].first)); 
    } 
   
    sort(lower.begin(),lower.end()); 
    sort(upper.begin(),upper.end()); 
    double maxi = lower[n - 1]; 
    double mini = upper[0]; 
    if(mini >= maxi){ 
        cout << fixed << setprecision(6) << maxi << endl; 
    } 
    else cout << -1 << endl; 
} 
 
int32_t main() { 
     freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    ll  t; 
    cin >> t; 
    ll  test = 1; 
    while (t--) { 
        cout << "Case #" << test << ": "; 
        solve(); 
        test++; 
    } 
}
