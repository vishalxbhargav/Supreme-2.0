#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int meetingRoomsII(vector<vector<int>>& intervals){
	priority_queue<int> p;
	sort(intervals.begin(),intervals.end());
	for(auto interval:intervals){
		if(p.size()==0) p.push(interval[1]);
		else{
			if(p.top()<interval[0]){
				p.push(interval[1]);//new meetin held
			}else{
				p.pop();
				p.push(interval[1]);
			}
		}
	}
	return p.size();
}
int main(){
	vector<vector<int>>intervals={{1,3},{8,10},{7,8},{9,15}};
	return 0;
}
