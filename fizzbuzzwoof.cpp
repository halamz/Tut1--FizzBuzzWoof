//part 1: counts from 1 to 20 and checks if number is divisable by 3 and/or 5 and/or 7 or neighter.
#include<iostream>
#include<string>
using namespace std;

int main()
{
	string comment = "";
	for (int i = 1; i <= 20; i++)
	{
		comment = "";
		if (i % 3 == 0)
		{
			comment = "Fizz ";
		}
		if (i % 5 == 0)
		{
			comment = comment + "Buzz ";
		}H

		if (comment == "")
		{
			cout << i << endl;
		}
		else
		{
			cout << comment << endl;
		}
	}
}