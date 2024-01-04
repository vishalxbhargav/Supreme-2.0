#include<iostream>
using namespace std;
int createInteger(){
    int ans=0,n;
    for(int i=0;i<5;i++){
        cout<<"Enter digit "<<i+1<<" : ";
        cin>>n;
        ans=ans*10+n;
    }
    cout<<"converted Integer : ";
    return ans;
}
int main(){
    cout<<createInteger();
    return 0;
}