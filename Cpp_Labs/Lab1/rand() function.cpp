/*
In this exercise we play with the elementary features of C++ language.
Hint: Visual Studio reformats the selected source code by ctrl-k ctrl-f command. This can be useful when importing code from different sources.
Excercise 1 (Basic input and output, arrays and pointers 4p)
Write a program that first asks from the user how many numbers he needs. 
After that the program allocates memory space to store those numbers (integer array). 
Next the program fills the array with random numbers between 0 - 99, and the program displays all numbers from the array. 
After that the program calculates the mean of the generated number calling a separate function, int mean(int *array, int n). 
Finally the program must free the memory space it allocated.
There is rand() function for generating random numbers. Limiting the range to [0,99] is done with rand() % 100. 
In order to use rand() function you must include cstdlib header.

*/



#include <cstdlib>
#include <iostream>
#include <ctime>

using namespace std;

int mean(int *array, int n);

int main(){
    int num = 0;
    int *arr;
    
    cout << "How many numbers you want: ";
    
    cin >> num;
    arr = new int[num];
       
    srand(time(0));

    for (int i = 0; i < num; i++){
        
        arr[i] = (rand() % 100);
        cout << "The " << i+1 << " random number generated: " << arr[i] << endl;

    }

    cout << "The mean is: " << mean(arr, num) << endl;
    delete[] arr;
    
}

int mean(int *array, int n){
    int ave;
    int sum = 0;

    for (int i = 0; i < n; i++){

        sum += array[i];
    }
    ave = sum / n;
    return ave;
}