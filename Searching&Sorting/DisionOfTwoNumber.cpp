#include<bits/stdc++.h>
using namespace std;
int division(int divident,int divisor){
   int s=0,e=divident,ans=0;   
   while(s<e){
    int mid=s+(e-s)/2;
    if(mid*divisor==divident) return mid;
    else if(mid*divisor>divident) e=mid-1;
    else {
        ans=mid;
        s=mid+1;
    }
   }
   return ans;
}
int main(){
   cout<<"Disvison of 27/4 : "<<division(27,4);
}