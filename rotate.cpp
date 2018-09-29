#include <iostream>
#include <algorithm>
#include<vector>
using namespace std;
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--)
	{
		int size,d,num;
		cin>>size>>d;
		vector<int> arr;
		for(int i=0;i<size;i++)
		{
			cin>>num;
			arr.push_back(num);
		}
		rotate(arr.begin(),arr.begin()+d,arr.end());
		for(auto it=arr.begin();it != arr.end();it++)
		{
			cout<<*it<<" ";
		}
		cout<<endl;

	}
	return 0;
}