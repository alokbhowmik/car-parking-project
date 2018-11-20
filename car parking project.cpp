#include<iostream>
using namespace std;
#define SIZE 5
int bus=0;
int rikshaw=0;
int car=0;
bool isfull(){
	if(car+rikshaw+bus>SIZE-1)
	return true;
	return false;
}
void message(){
	cout<<"\n\n";
	cout<<"#################################################################"<<endl;
	cout<<"#                                                               #"<<endl;
	cout<<"#             PARKING PLOT IS FULL ,NO SPACE AVALABLE           #"<<endl;
	cout<<"#                                                               #"<<endl;
	cout<<"#################################################################"<<endl;
	
	cout<<"\n\n";
}
void show(){
	cout<<"\n\n";
	cout<<"#######################################"<<endl;
	cout<<endl;
	cout<<"NO OF RIKSHAW : "<<rikshaw<<endl;
	cout<<"NO OF CAR     : "<<car<<endl;
	cout<<"NO OF BUS     : "<<bus<<endl;
	cout<<endl;
	cout<<"#######################################"<<endl;
	cout<<"\n\n";
}
void del(){
	bus=0;
	rikshaw=0;
	car=0;
	cout<<"\n\n";
	cout<<"#######################################"<<endl;
	cout<<"#                                     #"<<endl;
	cout<<"#       ALL DATA IS DELETED           #"<<endl;
	cout<<"#                                     #"<<endl;
	cout<<"#######################################"<<endl;
	cout<<"\n\n";
}
main(){
	do{
	
	//	system("cls");
		int choice;
		cout<<"PRESS 1 FOR RIKSHAW"<<endl;
		cout<<"PRESS 2 FOR CAR"<<endl;
		cout<<"PRESS 3 FOR BUS"<<endl;
		cout<<"PRESS 4 FOR SHOW"<<endl;
		cout<<"PRESS 5 FOR DELETE"<<endl;
		cout<<"PRESS 6 FOR QUIT"<<endl;
		cin>>choice;
		switch(choice){
			case 1:
				if(isfull())
				message();
				else
				rikshaw+=1;
				break;
			case 2:
				if(isfull())
				message();
				else
				car+=1;
				break;
			case 3:
				if(isfull())
				message();
				else
				bus+=1;
				break;
			case 4:	
				show();
				break;
			case 5:
				del();
				break;
			case 6:
				exit(0);
				break;
			default:
				cout<<"PLEASE CHOOSE CORRECT ONE "<<endl;
		}
	}while(1);
}
