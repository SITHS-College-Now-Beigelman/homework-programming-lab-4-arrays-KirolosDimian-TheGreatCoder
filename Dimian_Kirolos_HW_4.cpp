// Kirolos Dimian
// HW 4
// 11/14/24

#include <iostream>
#include <iomanip>

using namespace std;

void filterEvens (int myArray[], int array_Size);

int main ()
{
    // Exercise 1
	const int ARRAY_SIZE = 8; // To make the size of the array 8
	int myArray[ARRAY_SIZE]; // To make the array be named my_array

    for (int i = 0; i < 8; i++)
    {
        cout << "Please input a number: ";
        cin >> myArray [i];
    }
    filterEvens (myArray, 8);

    return 0;
}
// Exercise 1
void filterEvens (int myArray[], int array_Size)
{
    cout << "The even numbers that you inputted were " << endl;
    for (int i = 0; i < array_Size; i++)
    {
        if (myArray[i] % 2 == 0)
            cout << myArray [i] << " ";
    }
}

/*
Please input a number: 23
Please input a number: 12
Please input a number: 53
Please input a number: 43
Please input a number: 66
Please input a number: 24
Please input a number: 63
Please input a number: 89
The even numbers that you inputted were 
12 66 24
*/