1. (10 pts) Write a complete program in C++ that calculates rainfall statistics in the city of Hayward. Your program should prompt the user for the total rainfall for each of the 12 months into an array of doubles. The program should then calculate and display the total rainfall for the year, the average monthly rainfall, and the months with the highest and lowest amounts. If there is more than one month with the same lowest or highest amount, outputting any of them is acceptable.

Your program should implement input validation: Do not accept negative numbers for monthly rainfall figures.

The output should keep one digit after the decimal point, including the trailing zero.

Sample input and output:

Input:

Enter the rainfall amount (mm) in the month 1 in Hayward: -1
Invalid input. Please enter a non-negative amount (mm): 73.2
Enter the rainfall amount (mm) in the month 2 in Hayward: 77.6
Enter the rainfall amount (mm) in the month 3 in Hayward: 87.7
Enter the rainfall amount (mm) in the month 4 in Hayward: 50.2
Enter the rainfall amount (mm) in the month 5 in Hayward: 11.9
Enter the rainfall amount (mm) in the month 6 in Hayward: 7.4
Enter the rainfall amount (mm) in the month 7 in Hayward: 0
Enter the rainfall amount (mm) in the month 8 in Hayward: 0
Enter the rainfall amount (mm) in the month 9 in Hayward: 4.2
Enter the rainfall amount (mm) in the month 10 in Hayward: 29.7
Enter the rainfall amount (mm) in the month 11 in Hayward: 53.5
Enter the rainfall amount (mm) in the month 12 in Hayward: 108.9
Output:

The total rainfall for the year: 504.3 mm
The average monthly rainfall: 42.0 mm
The month with the highest amount of rainfall is month 12.
The month with the lowest amount of rainfall is month 7.
