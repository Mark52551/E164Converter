/* Created by: Mark Ruiz | Last Modified on November 13th, 2017 */
#include <iostream>
#include "phoneNumber.h"

//FORMAT BEING USED
// 0 1 2 3 4 5 6 7 8 9 10 11 12 13 14
// + 1 ( 5 0 8 ) 5 9 6 -  6  4  1  1
using namespace std;
//main
int main()
{
	phoneNumber number; //Class object
	number.welcome(); //welcome function
	number.takeInputConvert(); //take input and convert fucntion
	cin.get(); //user input
	return 0;
}