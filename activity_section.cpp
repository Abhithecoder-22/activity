#include<bits/stdc++.h>
using namespace std;

void mycomp(pair<int, int >a, pair<int , int >b){
    return(a.second<b.second)

int maxact(pair<int ,int >arr[],int n){
    sort(arr,arr+n,mycopm);
    int prev=0;
    int res=1;
    for(int curr=1;curr<n;curr++){
        if(arr[curr].first>=arr[prev].second){
            res++;
            prev=curr;
        }
    }
    return res;
}
}
int main(){
int arr[]={(12,25),(10,20),(20,30)};
int n=sizeof(arr)/sizeof(arr[0]);
maxact(pair,arr,n);



}