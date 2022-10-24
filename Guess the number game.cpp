#include <iostream>
using namespace std;
int main(){
/* Actual this is programme in which user has to guess the number and user is also given a hint. 
In this game user have to guess the actual number within 5 attempts. If user failed to guess the 
actual number then he will be shown actual number.	
	*/
int input, actual_number = 67;
for(int i = 1; i <= 5; i++){
	cout<<"Guess the number. Hint: Numbmer is between 1-100\t";
	cin>>input;
	if(input>actual_number){
		cout<<" Enterd number is greater than actual number\n";
	}
	else if(input<actual_number){
		cout<<"Entered number is less than actual_numbmer\n";
	}
	else if(input == actual_number){
		cout<<"Congrats! you have guessed number correctly\n";
		break;
	}
	if(i == 5 & input != actual_number){
		cout<<"Sorry you are failed to attempt the number.\nActual number was "<<actual_number;
	}
}

return 0;
}
