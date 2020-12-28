#include<iostream>
using namespace std; 



int main(){
	int m,n,ms,sr;
	cin>>m>>n>>ms>>sr;
	char a[m][n];
	for(int i=0; i<m; i++){
		for(int k=0; k<n; k++){
			cin>>a[i][k];
		}
	}
	bool success=true;

	for(int i=0; i<m; i++){
		for(int k=0; k<n;k++){
			char e=a[i][k];
			sr--;
			if(e=='*'){
				sr+=5;
			}
			else if(e=='.'){
				if(k!=(n-1)){
					sr-=2;
				}
			}
			else if(e=='#'){
				break;
				cout<<"else executed";
			}
			if(sr<ms){
				success=false;
			}
		}
		cout<<i;
	}
	if(success){
		cout<<"Yes"<<endl<<sr;
	}
	else{
		cout<<"No";
	}

	return 0;
}