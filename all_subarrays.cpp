#include<iostream>
using namespace std;



void printsubarr(int a[], int n){
	for(int i=0; i<n; i++){
		for(int k=i; k<n; k++){
			for(int l=i; l<=k; l++){
				cout<<a[l]<<", ";
			}
			cout<<endl;
		}
	}

}



int main(){
	int n;
	cin>>n;

	int a[n]={0};

	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	printsubarr(a,n);
}