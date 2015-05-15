/* Lab02_1.cpp 
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
#include <time.h>

using namespace std;

int main(void){
	int Head = 0;
	int Tail = 0;
	int count = 0;
	int coin = rand() % 2 + 1;
	while (count < 100){
		count += 1;
		coin = rand() % 2 + 1;
		if (coin == 1){
			cout << "Its Head!." << endl;
			Head += 1;
		}
		else{
			cout << "Its Tails!" << endl;
			Tail += 1;
		}
		count += 1;
	}
	cout << "Head has " << Head << " and Tail has " << Tail;
	getchar();
	return 0;
}