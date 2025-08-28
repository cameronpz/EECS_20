/* 
Name: Cameron Peterson-Zopf
Date of Last Modification: 8/27/25
Description: This program will prompt the user for a starting character and prompt a user 
for an ending character. The scanf function is used for this purpose. Then this program will 
print every character from the starting character to the ending character, including both the 
starting and ending characters. This program works for both an ascending sequence and a descending 
sequence. This sequence will be printed using the printf function and a for loop. There will be two 
for loops, one for each possibility: ascending and descending. We will use two if statements to control 
which sets of inputs go to which loops. If both characters are the same, I have chosen this to be 
included in the descending for loop, though it doesn't matter as we will just have one character. 
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	// Variable declarations
	int counter; // Holds intermediate count values
	char startPoint; // Starting point for sequence
	char endPoint;	// ending point for sequence
	// Prompt the user for input
	printf("===== Sequence of Characters Program =====\n");
	printf("Enter a starting character: ");
	scanf(" %c", &startPoint); // read in first character
	printf("Enter an ending character: ");
	scanf(" %c", &endPoint);  // read in last character
	
	if (startPoint >= endPoint) // descending sequence
	{
		for (counter = startPoint; counter >= endPoint; counter--)  //convert character to decimal ASCII value
		{
			printf("%c, ", counter); // for printing, convert result from decimal ASCII value (int) to the character. 
		}
	}
	if (startPoint < endPoint)  // ascending sequence
	{
		for (counter = startPoint; counter <= endPoint; counter++)  //convert character to decimal ASCII value
		{
			printf("%c, ", counter); // for printing, convert result from decimal ASCII value (int) to the character.  
		}
	}

	return 0; //return value of zero => success
}