#include <iostream>

using namespace std;

int *arrayExpander(int myArray[], int numElements);
int getNumElements(int numElements);

int main()
{
    int numElements = 0;
    int *pointer; // to point to the numbers
    numElements = getNumElements(numElements); // gets the number of elements of the array
    int myArray[numElements]; 
    for(int i = 0; i < numElements; i++) // populates the array with user inputted numbers
    {
        cout << "Enter number " << i + 1 << endl;
        cin >> myArray[i];
    }
    pointer = arrayExpander(myArray, numElements); // gets an array that is twice the size of the argument array
    cout << endl << "Argument Array" << endl << endl;
    for(int i = 0; i < numElements; i++) // displays the argument array
    {
        cout << myArray[i] << endl;
    }
    cout << endl << "New Array" << endl << endl;
    for(int i = 0; i < numElements * 2; i++) // displays the new array
    {
        cout << pointer[i] << endl;
    }
    cout << endl;
    delete [] pointer; // free the memory
    pointer = 0;
    system("pause");
    return 0;
}

// functions
int getNumElements(int numElements) // function to get the number of elements in the array by user input
{
    cout << "Please enter the number of elements you want in the array" << endl;
    cin >> numElements;
    cout << endl;
    return numElements;
}

int *arrayExpander(int myArray[], int numElements) // function to doubles the size of the argument array
{
    int *pointer; 
    if(numElements <= 0) 
    {
        return NULL;
    }
    pointer = new int[numElements * 2]; 
    for(int i = 0; i < numElements; i++) 
    {
        pointer[i] = myArray[i];
    }
    for(int i = numElements; i < numElements * 2; i++) 
    {
        pointer[i] = 0;
    }
    return pointer; // returns a pointer to the new array
}
