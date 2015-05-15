/* Lab02_2.cpp
   1/23/15
   Danielle Brhely
*/

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}
#include <iostream>
#include <stdlib.h>
#include "string"

using namespace std;

int main(void){
	int number = rand() % 100 + 1;
	int guess = 0;
	cout << "Guess a number...... ";
	cin >> guess;
	int count = 0;
	while (guess != number){
		if (guess > number){
			cout << "Lower....";
		}
		else{
			cout << "Higher.....";
		}
		cin >> guess;
		count += 1;
	}	
	cout << "You guessed it!. The number was " << number << endl;
	cout << "And it only took you " << count << "tries!" << endl;
	getchar();
	return 0;
}
