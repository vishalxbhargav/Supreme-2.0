#include<iostream>
#include<vector>
using namespace std;
double perfectSquare(int n) {
       int s=0,e=n;
       double ans=0;
       while(s<e){
        int mid=s+(e-s)/2;
        if(mid*mid==n){
            ans=mid;
            break;
        } 
        else if(mid*mid>n){
            ans=mid;
            e=mid-1;
        } 
        else {
            s=mid+1;
            ans=mid;
        }
       }
       float k=0.1;
       for(int i=0;i<3;i++){
        while(ans*ans<n) ans+=k;
        ans-=k;
        k/=10;
       }
       return ans;
    }
int main(){
    int n=8;
    cout<<"Square Root of "<<n<<" : "<<perfectSquare(n);

}