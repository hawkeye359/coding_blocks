#include<iostream>
using namespace std;



int main(){

	int N;
	int P;
	cin>>N>>P;

	float ans = 0;
	float inc = 1.0;
	for(int i = 0; i<=P; i++){
		while(ans*ans<=N){
			ans = ans + inc;
		}
		ans = ans - inc;
		inc = inc/10;
	}
	cout<<ans<<endl;

}