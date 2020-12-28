#include<iostream>
#include<string>
#include<climits>
using namespace std;



int main(){
	int a[100][100];
	int row;
	int col;
	cin>>row>>col;
	for(int i=1; i<=row; i++){
		for(int j=1; j<=col; j++){
			cin>>a[i][j];
		}
	}

	
	for(int i=1; i<=row; i++){
		for(int j=1; j<=col; j++)
			a[i][j] = a[i][j-1] + a[i][j];
	}
	for(int j=1; j<=col; j++){
		for(int i=1; i<=row; i++){
			a[i][j] = a[i-1][j] + a[i][j];
		}
	}
	for(int i=1; i<=row; i++){
		for(int j=1; j<=col; j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}

	int maxsum=INT_MIN;
	for(int i=1; i<=row; i++){
		for(int j=1; j<=col; j++){
			for(int k=i; k<=row; k++){
				for(int l=j; l<=col; l++){

					int sum = 0;

					sum = a[k][l] - a[i-1][l] - a[l][j-1] + a[i-1][j-1];
					if(sum > maxsum){
						maxsum = sum;
					}

					}
				}
			}
		}
	cout<<maxsum; 
	return 0;
}