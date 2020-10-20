//https://www.hackerearth.com/practice/algorithms/sorting/bubble-sort/practice-problems/algorithm/benny-and-segments-marcheasy/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define f first
#define s second
#define FOR(i, a, b) for(int i=(a);i<(b);i++)
 
int main(){
    int T;
    scanf("%d",&T);
loop:while(T--){
        int N,L;
        scanf("%d %d",&N,&L);
        pair<int,int> A[N+1];
        for(int i = 0 ; i < N;i++){
            cin >> A[i].f >> A[i].s;
        }
        sort(A,A+N);
        bool isPossible = false;
		FOR(i,0,N){
			int r = A[i].first;
			bool ok = 1;
			FOR(j,0,N){
				if (A[j].first >= A[i].first && A[j].second <= A[i].first + L){
					if (A[j].first > r){
						ok = 0;
					}
					else
						r = max(r , A[j].second);
				}
			}
			if (r != A[i].first + L){
				ok = 0;
			}
			isPossible |= ok;
		}
		if (isPossible) cout << "Yes" << endl;
		else cout << "No" << endl;
    }
    return 0;
}
