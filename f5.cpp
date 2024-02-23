
/*
*  FILE           :  f5.cpp
*  PROJECT        :  FOCUSED 5
*  PROGRAMMER     :  Anchita Kakria  (8961585)
*  DATE           :  23 FEB,2024
*  DESCRIPTION    :  This is a program to display characters and their averaged values.
*/

#include <stdio.h>
int getNum(void);
void modifyArrayValues(int arr[], int number_elements);
int maxArrayValue(int arr[], int number_elements);

int main() {
    int Array[10];
    modifyArrayValues(Array, 10);
    int maximum_index = maxArrayValue(Array, 10);
    printf("The highest value is: %d\n", Array[maximum_index]);
    printf("Index of the highest value is: %d\n", maximum_index);

    return 0;
}

// 
// FUNCTION : modifyArrayValues()
// DESCRIPTION : 
// It is used to fill the array with given user input
// PARAMETERS : 
// int arr[]
// int number_elements 
// RETURNS : 
// void
// 


void modifyArrayValues(int arr[], int number_elements) {
    printf("Enter a number \n");
    for (int i = 0; i < number_elements; ++i) {
        arr[i] = getNum();
    }
}

// 
// FUNCTION : maxarrayvalues
// DESCRIPTION : 
// It is used to get and return the index of the number
// PARAMETERS : 
// int arr[]
// int number_elements
// RETURNS : 
// int : index of the highest number
// 
int maxArrayValue(int arr[], int number_elements) {
    int maximum_index = 0;

    for (int i = 1; i < number_elements; ++i) {
        if (arr[i] > arr[maximum_index]) {
            maximum_index = i;
        }
    }
    return maximum_index;
}

// 
// FUNCTION : getNum()
// DESCRIPTION : 
// It is used to get and return the value of entered user number.
// PARAMETERS : 
// void 
// RETURNS : 
// int : entered user number
// 

#pragma warning(disable: 4996) // required by Visual Studio
int getNum(void)
{
    /* the array is 121 bytes in size; we'll see in a later lecture how we can
    improve this code */
    char record[121] = { 0 }; /* record stores the string */
    int number = 0;
    /* NOTE to student: brace this function consistent with your others */
    /* use fgets() to get a string from the keyboard */
    fgets(record, 121, stdin);
    /* extract the number from the string; sscanf() returns a number
    * corresponding with the number of items it found in the string */
    if (sscanf(record, "%d", &number) != 1)
    {
        /* if the user did not enter a number recognizable by
        * the system, set number to -1 */
        number = -1;
    }
    return number;
}