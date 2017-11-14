/* Created by: Mark Ruiz | Last Modified on November 13th, 2017 */
#pragma once
#include "phoneNumber.h"
#include <iostream>
#include <string>
#include <regex>

using namespace std; 
void phoneNumber::welcome()
{
	cout << "Welcome! This program is to convert a regular 10 digit" << 
		" telephone number to E164 Format. Have fun!" << endl << endl;
}
//FORMAT BEING USED
// 0 1 2 3 4 5 6 7 8 9 10 11 12 13 14
// + 1 ( 5 0 8 ) 5 9 6 -  6  4  1  1
void phoneNumber::takeInputConvert()
{

	do
	{
		//try-catch, string throw and catch for user
		try
		{
			string userNumber;
			cout << "Please enter your 10 digit telephone number (ex: 1234567890) :" << endl;
			cin >> userNumber;  
			if(userNumber.length() != 10)    
			{
				throw string("please enter valid 10 digit number: ");
			}
			cout << "Here is your number in E164 format: " << endl;
			cout << ("+1(");
			for (int i = 0; i < 3; i++) //loop for [0-3]
			{
				cout << userNumber[i];
			}
			cout << (")");
			for (int i = 3; i < 6; i++) //loop for [3-6]
			{
				cout << userNumber[i];
			}
			cout << "-";
			for (int i = 6; i < 10; i++) //loop for [6-10]
			{
				cout << userNumber[i];
			}
			cout << endl;
			cin.get();
		}
		catch (string & s)
		{
			cout << "Error: ";
		}
	} while (true);
}
//cons
phoneNumber::phoneNumber()
{
}
//dest
phoneNumber::~phoneNumber()
{
}
