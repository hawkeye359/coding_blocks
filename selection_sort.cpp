#include<iostream>
using namespace std;



void selectinSort(int a[], int n){
	for(int i=0; i<n-1; i++){
		int min_index=i;
		for(int j=i; j<=n-1; j++){
			if(a[j]<a[min_index]){
				min_index=j;
			}
		}
		swap(a[i],a[min_index]);
	}
	for(int i=0; i<=n-1; i++){
		cout<<a[i]<<" ";
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
	selectinSort(a,n);
}