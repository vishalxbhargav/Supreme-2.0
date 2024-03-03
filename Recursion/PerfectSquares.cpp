/*
279.Perfect Squares
Given an integer n, return the least number of perfect square numbers that sum to n.

A perfect square is an integer that is the square of an integer; in other word,it's the product of some integer itself for example,1,4,9 and 16 are perfect squares whle 3 and 11 are not
*/
#include<iostream>
#include<math.h>
using namespace std;
int solve(int n){
    //base case
    if(n==0) return 1;
    if(n<0) return 0;
    int ans=__INT_MAX__;
    int i=1;
    int end=sqrt(n);
    while(i<=end){
        int perfectsqrt=i*i;
        int numberofPerfectsqrt = 1 + solve(n-perfectsqrt);
        if(numberofPerfectsqrt<ans) ans=numberofPerfectsqrt;
        i++;
    }
    return ans;
}
int perfectSquare(int n){
    
    return solve(n)-1;

}
int main(){
    cout<<perfectSquare(12);
    return 0;
}