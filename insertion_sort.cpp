#include<iostream>
using namespace std;



void insertionSort(int a[], int n){
	for(int i=1; i<n; i++){
		int e = a[i];
		int j=i-1;
		while(j>=0 and a[j]>e){
			a[j+1]=a[j];
			j--;
			cout<<j<<endl;
		}
		a[j+1]=e;
		for(int i=0; i<n; i++){
			cout<<a[i]<<" ";
		}
	}
}

int main(){
	int a[1000]={0};
	int n;
	cin>>n;

	for(int i=0; i<=n-1; i++){
		int k;
		cin>>k;
		a[i]=k;
	}
	insertionSort(a,n);
}