#include<bits/stdc++.h>
using namespace std;

int mincoins(int coins[], int n, int amount){
    sort(coins, coins+n);
    int res=0;
    for(int i=n-1;i>0;i--){
        if(coins[i]<=amount){
            int c=floor(amount/coins[i]);
            res=res+c;
            amount=amount-c*coins[i];
        }
        if(amount==0){
            break;
        }
    }
    return res;
}
int main(){
     int coins[]={5,10,2,1};
     int amount=57;
     int n= sizeof(coins)/sizeof(coins[0]);
    cout<<mincoins(coins,n,amount);
}