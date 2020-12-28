#include<iostream>
#include<cstring>
using namespace std;
	


void removeduplcate(char a[]){
	int l = strlen(a);
	if(l==0 or l==1){
		cout<<a;
	}
	else{
		int prev=0;
		for(int current=1; current<l; current++){
			if(a[prev]!=a[current]){
				prev++;
				a[prev]=a[current];
			}
		}
		a[prev+1]='\0';
	}
}

int main(){
	char a[100];
	
	cin.getline(a,100);
	
	cout<<a<<endl;
	removeduplcate(a);
	cout<<a;
	return 0;
}