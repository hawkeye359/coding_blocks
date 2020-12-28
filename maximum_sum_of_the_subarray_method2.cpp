#include<iostream>
using namespace std;
//using namespace std::chrono;



void maximumSum(int a[], int n){
	int cum_sum[1000]={0};
	cum_sum[0]=a[0];
	for(int i=1; i<=n-1; i++){
		cum_sum[i] = cum_sum[i-1] + a[i];
	}
	int maximumSum=0;
	int x=0;
	int y=0;
	for(int i=0; i<n; i++){
		for(int k=i; k<n; k++){
			int current_sum=0;
			current_sum=cum_sum[k]-cum_sum[i-1];
			if(current_sum>=maximumSum){
				maximumSum=current_sum;
				x=i;
				y=k;
			}
		}
	}
	cout<<maximumSum<<endl;
	for(int i=x; i<=y; i++){
		cout<<a[i]<<" ";
	}

}



int main(){
	int a[1000]={0};
	int n;
	cin>>n;

	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	maximumSum(a,n);
}