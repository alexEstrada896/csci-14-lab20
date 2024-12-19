/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

int main()
{

	const int MONTHS = 12;

	double rainFall[MONTHS];
	double totalRainFall = 0;
	double Highest = 0;
	double Lowest = 1000;
	int monthHighest = 0; 
    int monthLowest = 0;

//user enters rainfall for each month
	for (int count = 0 ; count < MONTHS ; count++)
	{
		cout <<"Enter the rainfall amount (mm) in the month " << (count + 1)<<" in Hayward:"<<endl;
		cin >> rainFall[count];
//validates input
        while (rainFall[count] < 0)
        {
            cout << "Invalid input. Please enter a non-negative amount (mm): "<<endl;
            cin >>rainFall[count];
        }

		

		totalRainFall = totalRainFall + rainFall[count];
	}
//finds the highest and lowest 

	for (int count = 0; count < MONTHS ; count ++)
	{
	    if (rainFall[count] > Highest)
		{
			Highest = rainFall[count];
			 monthHighest = count + 1;
		}

		if (rainFall[count] < Lowest)
		{
			Lowest = rainFall[count];
			 monthLowest = count + 1;
		}
	}

//calculates average	
	double totalAvg;
	totalAvg = totalRainFall / 12;

//displays the total rainfall,average , month with highest and month with lowest
	cout <<"The total rainfall for the year: "<< totalRainFall << "mm "<<endl;
	cout << "The average monthly rainfall: "<< totalAvg<<"mm"<<endl;
	cout << "The month with the highest amount of rainfall is month "<<monthHighest<<endl;
	cout <<"The month with the lowest amount of rainfall is month "<< monthLowest<<endl;


	return 0;
}