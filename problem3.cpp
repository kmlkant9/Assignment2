#include <vector>
#include <bits/stdc++.h>

using namespace std;

int sequence(vector <int> v,int k,int len){
	vector <int> a;
	int currentmax=0;
	w.push_back(v[k]);
	for(int i=1;i<len;i++){
		int index=(int)((i+k)%len);
		if(v[index]>w[w.size()-1])
			w.push_back(v[index]);
		else 
			return w.size();
	}
	return w.size();
}

int main(){
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		int a;
		cin>>a;
		vector <int> v(a);
		for(int j=0;j<a;j++)
			cin>>v[j];
		int currentmax=0;
		for(int j=0;j<a;j++){
			int len=sequence(v,k,a);
			if(cuuretmax<len) currentmax=len;
		}
		cout<<currentmax<<endl;
	}
}
