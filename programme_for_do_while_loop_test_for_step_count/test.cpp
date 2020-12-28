#include<iostream>
using namespace std;



int main(){

	int position = 0, step_count = 2;

	do{
		position = position + step_count;
		cout<<"i am at the position "<<position<<endl;
		if(position<10){
		    cout<<"i will move further"<<endl;
		}
		else if(position==10){
			cout<<"i am at the cliff"<<endl;
			cout<<"i will no move further"<<endl;
		}
		else if(position>10){
			cout<<"Oh! I just fell down";
		}
	}while(position<10);
}