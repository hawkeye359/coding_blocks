#include<iostream>
using namespace std;



int main(){
	
	int step_count=1,position= 0;
	while(position<=10){
		position = position + step_count;
	    if(position<10){
	    	cout<<"now i am at position"<<position<<endl;
	    	cout<<"i will move further"<<endl;
	    }
	    else if(position==10){
	        cout<<"i am at the cliff"<<endl<<"i will not move further"<<endl;
	    }
	    else if(position>10){
	    	cout<<"oh! i just fell from the cliff"<<endl;
	    }
	}
	return 0;
}