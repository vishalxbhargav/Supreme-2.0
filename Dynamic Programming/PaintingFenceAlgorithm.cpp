#include<iostream>
#include<vector>
using namespace std;
int paintingFence(int n,int k){
	if(n==1) return n;
	if(n==2) return k+(k*(k-1));
	return (k-1)*(paintingFence(n-1,k)+paintingFence(n-2,k));

}
int main(){
	int n=4;
	int k=3;
	cout<<"Ans : "<<paintingFence(n,k);
}