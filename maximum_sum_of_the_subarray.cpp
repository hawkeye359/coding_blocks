#include <chrono> 
#include <iostream> 
#include<vector> 
using namespace std; 
using namespace std::chrono;



void maximumSum(int a[], int n){
	int maximumSum=0;
	int x=0;
	int y=0;
	for(int i=0; i<n; i++){
		for(int k=i; k<n; k++){
			int current_sum=0;
			for(int l=i; l<=k; l++){
				current_sum+=a[l];
			}
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
	auto start = high_resolution_clock::now();
	int n;
	cin>>n;

	int a[n]={0};

	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	maximumSum(a,n);
	auto stop = high_resolution_clock::now();
	auto duration = duration_cast<microseconds>(stop - start);
	cout << "Time taken by function: "<< duration.count() << " microseconds" << endl; 
}