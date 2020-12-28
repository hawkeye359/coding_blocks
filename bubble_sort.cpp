#include<iostream>
#include<algorithm>
using namespace std;


bool compare(int a, int b){
	return a>b;
}

void bubble_sort(int a[], int n){

	for(int i=0; i<n; i++){
		for(int k=1; k<=n-i; k++){
			if(compare(a[k],a[k-1])){
				swap(a[k],a[k-1]);
			}
		}

	}
	for(int i=0; i<n; i++){
		cout<<a[i]<<" ";
	}
}
int main(){
	int a[1000]={0};
	int n;
	cin>>n;
	//int a[n];
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	bubble_sort(a,n);
}
