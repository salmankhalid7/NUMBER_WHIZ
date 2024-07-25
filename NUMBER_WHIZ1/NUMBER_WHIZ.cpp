#include	<iostream>
#include <time.h>
#include <cstdlib>
using namespace std;
int main()
{
	//DECALIRING VARIABLES:-
	string playername;
	int AGE;
	int BET;
	int BALANCE;
	int guess;
	int dice;
	 
	
	//PRINTING A WELCOME NOTE:-
	cout<<"\n\n";
	cout<<"\t\t\t\t\t\t";
	cout<<"<<WELCOME TO THE LUCKY SPIN>>\n\n\n\n";
	
	//GETTING AND PRINTING THE PLAYER NAME AND AGE:-
	cout<<"ENTER YOU'R NAME :";
	cin>>playername;
	cout<<"\n\nENTER YOU'R AGE :";
	cin>>AGE;	
	system("cls");
	cout<<"\n\nNAME :" ; cout<<playername;
	cout<<"\n\n\nAGE  :" ; cout<<AGE;
	
	// EXPLAINING THE RULE FOR LUCKY SPIN:-
	cout<<"\n\n\n";
	cout<<"\t\t\t\t\t\t";
	cout<<"<<RULES FOR LUCKY SPIN>>\n\n";
	cout<<"\t\t\t\t\t";cout<<" 1:CHOOSE A NUMBER BETWEEN 1 AND 10\n";
	cout<<"\t\t\t\t\t";cout<<" 2: Winner gets 10 times of the money bet\n";
	cout<<"\t\t\t\t\t";cout<<" 3: Wrong bet, and you lose the amount you bet\n";
	
	//GETTING THE TOTAL BALANCE FROM PLAYER:-
	cout<<"\n\nENTER THE TOTAL BALANCE :";
	cin>>BALANCE;
	cout<<"\n\nPLACE AN AMOUNT FOR BET :";
	cin>>BET;
	if(BET>BALANCE)
	{
		cout<<"\n\nTHE GIVEN AMOUNT SHOULD BE UNDER ";
		cout<<BALANCE;
     	cout<<" PKR";
     	cout<<"\n\nRE-ENTER THE AMOUNT :";
     	cin>>BET;}
     	
		 //CLEARING SCREEN OPENING A NEW WINDOW:-
		system("cls");
		
		//PLACING A BET MENU:-
     	cout<<"\t\t\t\t-<<NOW YOU HAVE TO PLACE A BET ON ANY NUMBER BETWEEN 1 AND 10>>-";
     	cout<<"\n\n\n\nENTER A NUMBER BETWEEN 1 AND 10 :";
     	cin>>guess;
     	system("cls");
     	
     	//ENTERING STATS:-
     	cout<<"<<PLAYER'S INFORMATION>>\n\n\n";
     	cout<<"NAME:";cout<<playername ;cout<<"\n";
     	cout<<"AGE :";cout<<AGE;cout<<"\n\n";
     	
     	 //FINANCIAL STATS:-
     	
     	cout<<"<<FINANCIAL STATISTICS>>\n\n\n";
		cout<<"TOTAL BALANCE:";cout<<BALANCE<<"\n\n";
     	cout<<"BETED AMOUNT :";cout<<BET<<"\n\n\n\n";
     	
     	cout<<"<<BET INFORMATION :>>\n\n";
     	cout<<"CHOSED NUMBER :";
		cout<<guess<<"\n";
     	
     	
     	//BACKEND PROCESSING TO RANDMLY PICK A NUMER:-
		 {
     		srand(time(0));
     		for(int i=0;i<=10;i++);
     		
     	//SHOWING THE RESULT:-	
     		
     		cout<<"\n\n\n\n\n\t\t\t\t\t\tTHE WINNING NUMBER IS (";
     		cout<<(rand()%10);
     		cout<<")";
     		if(guess==(rand()%10))
     	{
     		cout<<"\n\n\n\n\t\t\t\t\t\t \tYEAH BABY\n\n";
     		cout<<"\t\t\t\t\t\tYOU HAVE WON THE LUCKY DRAW):=- \n\n";
     		cout<<"\t\t\t\t\t\t";
     		cout<<"YOU HAVE WON :";
     		cout<<BET*10;
		 }
		 else 
		 {
		 	cout<<"\n\n\n\n\t\t\t\t\t  \t \tNICE TRY!\n\n";
		 	cout<<"\t\t\t\t\t\tYOU HAVE LOOSE THE BET\n\n";
			cout<<"YOU'R REMAINING BALANCE IS :("<<BALANCE-BET;
			cout<<")";
		 }
     	
		 }
     	
     }