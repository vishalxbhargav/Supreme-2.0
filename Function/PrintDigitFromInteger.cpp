#include<iostream>
using namespace std;
void digitFromInteger(int n){
    while(n!=0){
        cout<<n%10<<" ";
        n/=10;
    }
}
int main(){
    int x=10;
    digitFromInteger(12345);
}