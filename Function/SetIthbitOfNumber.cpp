#include<iostream>
#include<vector>
using namespace std;
int setIthbit(int n,int k) {
    return n|(1<<k);        
}
int main(){
    vector<int> nums={1,7,3,6,5,6};
    cout<<"Sum of Array: "<<setIthbit(16,3);

}