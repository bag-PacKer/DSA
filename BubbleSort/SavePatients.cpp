//https://www.hackerearth.com/practice/algorithms/sorting/bubble-sort/practice-problems/algorithm/save-patients/
#include <iostream>
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    int *A = new int(n);
    int *B = new int(n);
    for(int i = 0; i < n;i++){
        cin>>A[i];
    }
    
    for(int i = 0; i < n;i++){
        cin>>B[i];
    }
    int swap;
    for(int i = 0; i < n;i++){
        for(int j = i+1 ; j < n ;j++){
            if(A[i]  > A[j]){
                swap = A[i];
                A[i] = A[j];
                A[j] = swap;
            }
            if(B[i] > B[j]){
                swap = B[i];
                B[i] = B[j];
                B[j] = swap;
            }
        }
    }
    for(int i = 0;i < n ;i++){
        if(B[i] > A[i]){
            cout<<"No"<<endl;
            return 0;
        }
    }
    cout<<"Yes"<<endl;
    return 0;
}
