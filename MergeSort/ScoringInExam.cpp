//https://www.hackerearth.com/practice/algorithms/sorting/merge-sort/practice-problems/algorithm/scoring-in-exam-1/description/
#include<bits/stdc++.h>
#define ll long long int 
 
using namespace std;
 
int main(){
    ll n,q,A[1000001],B[100001];
    cin>>n>>q;
    for(int i = 0;i < n;i++){
        cin>>A[i];
    }
    
    
    for(int i = 0;i < n;i++){
        cin>>B[i];
    }
    
    sort(A,A+n);
    B[0] = 0;
    for(int i = 1;i <= n;i++){
            B[i] = B[i-1] + A[n-i];
    }
    for(int i = 0;i < q;i++){
        ll p;
        cin>>p;
        cout<<B[p]<<endl;
    }
    return 0;
}
