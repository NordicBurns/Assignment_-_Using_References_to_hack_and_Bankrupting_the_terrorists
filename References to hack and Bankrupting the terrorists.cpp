// References to hack and Bankrupting the terrorists.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <windows.h>
#include <stdio.h>

using namespace std;

double terror_bank_acct = 1000000.81;
double civil_bank_acct = 1053.21;

void NormBankCheck(int i)
{
	double& norm_karter = civil_bank_acct;
	double& norm_reznov = terror_bank_acct;
	if (i == 1)
	{
		printf("Hello Karter, your balance today is: %f", norm_karter);
		Sleep(3000);
	}
	else
	{
		printf("\nHello Rezonv, your balance today is: %f", norm_reznov);
		Sleep(3000);
	}
}
void HackedBankCheck(int i)
{
	double& norm_karter = terror_bank_acct;
	double& norm_reznov = civil_bank_acct;
	if (i == 1)
	{
		printf("\nHello Karter, your balance today is: %f", norm_karter);
		Sleep(3000);
	}
	else
	{
		printf("\nHello Rezonv, your balance today is: %f", norm_reznov);
		Sleep(3000);
	}
}

void Processing()
{
	cout << "\n\nProcessing\n.................................." << endl;
	Sleep(3000);
}


int main()
{
	NormBankCheck(1);
	NormBankCheck(2);
	Processing();
	HackedBankCheck(1);
	HackedBankCheck(2);
	return 0;
}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
