#include<iostream>
using namespace std;



bool binarysearch(int a[], int i, int n, int key){
	int init=i;
	int end=n-1;
	int mid=(init+end)/2;
	if(init==end){
		if(a[mid]==key){
			return true;
		}
		else{
			return false;
		}
	}
	if(a[mid]==key){
		return true;
	}
	else if(key>a[mid]){
		init = mid;
	}
	else{
		end = mid;
	}
	if(init > mid ){
		return false;
	}
	return binarysearch(a+init,init,end-init+1,key);
}

int main(){
	int n;
	cin>>n;
	int a[1000];
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	for(int i=-20; i<10; i++){
		cout<<i<<" "<<binarysearch(a,0,n,i);
		cout<<endl;
	}
}