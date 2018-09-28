// CPP program to find minimum (or maximum) element 
// in an array. 
#include <iostream> 
#include<algorithm>
using namespace std; 

int getMin(int arr[], int n) 
{ 
	return *min_element(arr, arr + n); 
} 

int getMax(int arr[], int n) 
{ 
	return *max_element(arr, arr + n); 
} 

int main()
 {
	//code
	int t;cin>>t;
	while(t--){
	    int n;cin>>n;int arr[n];
	    for(int i=0;i<n;i++)cin>>arr[i];
	    cout<<getMin(arr, n)<<" "<<getMax(arr, n)<<endl;
	}
	return 0;
 }