#include<iostream>
using namespace std;
void printArray(int nums[],int n) {
    for(int i=0;i<n;i++)cout<<nums[i]<<" ";
}
int main(){
    int arr[5];
    int arr2[]={1,2,3,4,5};
    printArray(arr2,5);
    return 0;
}