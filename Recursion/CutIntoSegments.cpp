#include<bits/stdc++.h>
using namespace std;
int cutIntoSegments(int n,int x,int y,int z){
    if(n==0) return 0;
    if(n<0) return -1;
    int op1=cutIntoSegments(n-x,x,y,z);
    int op2=cutIntoSegments(n-z,x,y,z);
    int op3=cutIntoSegments(n-z,x,y,z);
    return 1+max(op1,max(op2,op3));
}
int main(){
    int n=5,x=3,y=1,z=2;
    cout<<"result : "<<cutIntoSegments(n,x,y,z);
}