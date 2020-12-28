#include<iostream>
#include<algorithm>
using namespace std;


int main(){
	int n;
	cin>>n;
	int a[1000]={0};
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	int target;
	cin>>target;
	sort(a,a+n);
	int i=0;
	int j=n-1;
	while(i!=j){
		if((a[i]+a[j])>target){
			j--;
		}
		else if((a[i]+a[j])<target){
			i++;
		}
		else if((a[i]+a[j])==target){
			cout<<a[i]<<" and "<<a[j]<<endl;
			i++;
		}
	}
}