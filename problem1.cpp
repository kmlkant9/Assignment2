#include <cstdio>
#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	int arr[n][2]={};
	arr[0][0]=1;
	arr[0][1]=1;
	int maxlen=1;
	for(int i=1;i<n;i++){
		for(int j=i-1;j>=0;j--){
			if(a[j]<a[i])
				arr[i][0]=max(a[j][1]+1,a[i][0]);
			elseif(a[j]>a[i])
				arr[i][1]=max(a[j][0]+1,a[i][1]);		
		}
		maxlen=max(maxlen,max(a[i][0],a[i][1]));
	}
	cout<<maxlen<<endl;
	return 0;
}

