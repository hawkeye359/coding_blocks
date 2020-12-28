#include<iostream>
using namespace std;


int main(){
    char ch;
    ch = cin.get();
    int i = 0, j = 0;

    while(ch!='/n'){
    	if(ch=='N'){
    		j++;;
    	}
    	else if(ch=='S'){
    		j--;
    	}
    	else if(ch=='W'){
    		i--;
    	}
    	else if(ch=='E'){
    		i++;
    	}
        cout<<ch;
        ch = cin.get();
    }
    cout<<endl;
    cout<<i<<j<<endl;
    if(i>0){
    	for(int p=1; p<=i; p++){
    		cout<<'E';
    	}
    }
    if(i<0){
    	for(int p=1; p<=(-i); p++){
    		cout<<'W';
    	}
    }
    if(j>0){
    	for(int p=1; p<=j; p++){
    		cout<<'N';
    	}
    }
    if(j<0){
    	for(int p=1; p<=(-j); p++){
    		cout<<'S';
    	}
    }
}