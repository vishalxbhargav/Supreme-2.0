#include<iostream>
#include <vector>
using namespace std;
int mincostTickets(vector<int>&days,vector<int>&cost,int i){
	//base condition
	if(i>=days.size()) return 0;
	//sol for a case
	//1 Day Pass Taken
	int cost1=cost[0]+mincostTickets(days,cost,i+1);

	//7 Day Pass Taken
	int passEndDay=days[i]+7-1;
	int j=i;
	while(j<days.size()&&days[j]<=passEndDay) j++;
	int cost7=cost[1]+mincostTickets(days,cost,j);

	//30 Day Pass Taken
	passEndDay=days[i]+30-1;
	j=i;
	while(j<days.size()&&days[j]<=passEndDay) j++;
	int cost30=cost[2]+mincostTickets(days,cost,j);

	return min(cost1,min(cost7,cost30));
}
int main(){
	vector<int> coast={2,7,15};
	vector<int > days={1,4,6,7,8,20};
	cout<<"ans : "<<mincostTickets(days,coast,0);
	return 0;
}