//https://www.hackerearth.com/practice/algorithms/sorting/bubble-sort/practice-problems/algorithm/the-best-player-1/
#include <iostream>
#include<cstdio>
#include<string>
using namespace std;
struct name{
    string s;
    long long q;
    }A[10001];
int main()
{   
    
    int t,n;
    cin>>n>>t;
    name swap;
    for(int i=0;i < n ; i++){
        cin>>A[i].s>>A[i].q;
    }
    for(int i = 0 ; i < n;i++){
        for(int j = i+1; j < n ; j++){
            if(A[i].q < A[j].q){
                swap = A[i];
                A[i] = A[j];
                A[j] = swap;
            }
            else if(A[i].q == A[j].q && (A[i].s).compare(A[j].s) > 0)
                {
                    swap = A[i];
                    A[i] = A[j];
                    A[j] = swap;
                }
        }
    }
 
    for(int i = 0; i < t;i++){
        cout<<A[i].s<<endl;
    }
    return 0;
}
