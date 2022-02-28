#include <stdio.h>
#include <Windows.h>
#include <iostream>
using namespace std;

int my_number = rand();
int guesses = 7;


void check_number(int guess) {

	if (my_number == guess) {
		printf("You got it!!! \n");
		exit(EXIT_FAILURE);
	}

	if (my_number < guess) {
		printf("Your guess was too high! \n");
		return;
	}

	if (my_number > guess) {
		printf("Your guess was too low! \n");
		return;
	}
	
}

void my_funct() {
	int guess;

	while (guesses > 0) {

		guesses = guesses - 1;

		printf("number = %d guesses remaining = %d \n", my_number, guesses + 1);
		
		cout << "Take your guess...";
		cin >> guess;
		
		check_number(guess);

	}

	if (guesses == 0) {
		printf("You are out of guesses.");
		exit(EXIT_FAILURE);
	}

}

int main() {
	
	printf("You must guess the number in less than 7 guesses... \n");
	my_funct();

	return 0;
}


