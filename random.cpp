#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;

int main(void){

	srand( time( NULL) ); // seed random number from time
	int random_number = 1 + (rand() % 10); // random number between 1 and 10
int	ommm=0;// declare variable to store guess of user and set to 0
int	counter=0; // declare variable as counter for number of guesses

	
	
for(;;)	{
	counter=counter+1;	// increment guess counter

		std::cout << "guess the number ";//for(;;)
	std::cin >>ommm;	// read input from user
		//
		
	if(random_number>ommm){std::cout << "too small "<<std::endl;}
else if(random_number==ommm){std::cout << "you win "<<std::endl;
							break;}
else{std::cout << "too big "<< std::endl;}	// compare input from user to random number
		// print out winner, too high or too low message
		//

	}
	std::cout << "It took you guesses "<<counter<<std::endl;
if(counter>4&&counter<11){std::cout << "Go back to shcool fool "<<std::endl;}
	else if(counter==4){std::cout << "Your Mathematicaly Perfect!!!!!!!! "<<std::endl;}
else if (counter>10){std::cout <<"You are just really sad it took you more than 10 guesses to guess a number 1 through 10 "<<std::endl;}
else{std::cout << "you got lucky "<< std::endl;}
	// print message with number of guesses
	//
	

	return 0;
}
