#include<bits/stdc++.h>
using namespace std;
bool winnerOfGame(string colors) {
        int i=0,a=0,b=0,n=colors.length();
        while(i<n){
            int a1=0,b1=0;
            while(i<n&&colors[i]=='A'){
                a1++;
                i++;
            } 
            while(i<n&&colors[i]=='B'){
                b1++;
                i++;
            } 
            if(a1>2) a+=a1-2;
            if(b1>2) b+=b1-2;
        }
        if(a>b) return true;
        return false;
}
int main(){
    // vector<int>nums={1,4,5,6,7,10,12,34,49,50,60,69,72,91};
    // cout<<"result : "<<exponesialSearch(nums,50);
    cout<<winnerOfGame("AAAABBBB");
}
