#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;
struct time
{
	int st;
	int et;
} ;


bool myfunc(time t1,time t2)
{
	return (t1.et<t2.et);

}
int nt(vector<time> v,int s)
{
	for(int i=s-2;i>-1;i--)
	{
		if(v[i].et<=v[s-1].st)
		return i;
	}	
	return -1;
}

int ss(vector<time> v,int s)
{
	if(v[s-1].et==0)
	return 0;
	if(s==1)
	return 1;
	int ans1=1,ans2=0;
	int t=nt(v,s);
	 if(t!=-1)
	{
		ans1=1+ss(v,t+1);
	}
	ans2=ss(v,s-1);
	return ans1+ans2;
}
	


int main()
{
 	vector<time> v;
	vector<int> ans;
	int x=1;time t;
	while(x>-1)
{
	cin>>x;
	if(x>0)
{	for(int i=0;i<x;i++)
{
	cin>>t.st;
	cin>>t.et;
	v.push_back(t);
}
}
	if(x==0) {t.st=0;t.et=0;v.push_back(t);}
	
}
sort(v.begin(),v.end(),myfunc);    
ans.push_back(ss(v,v.size()));
for(int j=0;j<ans.size();j++)
cout<<setfill('0')<<setw(8)<<ans[j]<<"\n";
	
	
return 0;
}