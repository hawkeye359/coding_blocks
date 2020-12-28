#include<iostream>
using namespace std; 



int main(){
	int m,n;
	cin>>m>>n;
	int a[m][n];
	int val = 1;
	for(int i=0; i<m; i++){
		for(int k=0; k<n; k++){
			a[i][k]=val;
			val = val + 1;
		}
	}
	for(int i=0; i<m; i++){
		for(int k=0; k<n; k++){
			cout<<a[i][k]<<" ";
		}
		cout<<endl;
	}
	int start_row=0;
	int end_row=m-1;
	int start_col=0;
	int end_col=n-1;
	while(start_row<=end_row and start_col<=end_col){
		for(int i=start_col; i<=end_col; i++){
			cout<<a[start_row][i]<<" ";
		}
		start_row++;
		for(int i=start_row; i<=end_row; i++){
			cout<<a[i][end_col]<<" ";
		}
		end_col--;
		if(end_row>start_row){
			for(int i=end_col; i>=start_col; i--){
				cout<<a[end_row][i]<<" ";
			}
		}
		end_row--;
		if(end_col>start_col){
			for(int i=end_row; i>=start_row; i--){
				cout<<a[i][start_col]<<" ";
			}
		}
		start_col++;
	}
}
