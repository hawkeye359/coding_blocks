#include<iostream>
#include<algorithm>
using namespace std;


int main(){
	int k;
	cin>>k;
	for(int y=0; y<k; y++){
		int n;
		cin>>n;
		int a[n]={0};
		for(int i=0; i<n; i++){
			cin>>a[i];
		}

		int cs=0;
		int ms=0;
		for(int i=0; i<n; i++){
			if((cs+a[i])<0){
				cs=0;
			}
			else{
				cs=cs+a[i];
			}
			if(cs>ms){
				ms=cs;
			}
		}
		cout<<ms;
	}
}
