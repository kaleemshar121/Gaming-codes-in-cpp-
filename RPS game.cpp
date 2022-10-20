#include <iostream>
#include <string>
using namespace std;
int main(){
	char p1_move, p2_move, smile = 1;
string p1_name, p2_name;
int num;
cout<<"Please any number to play game or press 0 to exit:\t";
cin>>num;
	while(num>0){
		cout<<"Enter name of player 1:\t";
		cin>>p1_name;
		cout<<"Enter name of player 2:\t";
		cin>>p2_name;
		cout<<"Moves\ns For scissors\nr for rock\np for paper\n";
		cout<<p1_name<<" It's your turn:\n";
		cin>>p1_move;
		cout<<p2_name<<" It's your turn:\n";
		cin>>p2_move;
		if(p1_move == 'r' && p2_move == 's' || p1_move == 's' && p2_move == 'p' || p1_move == 'p' && p2_move == 'r') {
			cout<<p1_name<<" You won the game "<<smile<<endl;
		}
		else if (p1_move == 's'&& p2_move == 'r' || p1_move == 'p' && p2_move == 's' || p1_move == 'r' && p2_move == 'p'  ){
			cout<<p2_name<<" You won the game "<<smile<<endl;
		}
		else if(p1_move == p2_move){
			cout<<"Oops! You both choosen same move\nGame drawn\n";
		}
		cout<<"Please any number to play game or press 0 to exit:\t";
        cin>>num;
}
return 0;
}


