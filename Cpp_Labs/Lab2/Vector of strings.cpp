
/*
Write a program that reads strings from the keyboard. There is no upper limit for the number of strings. 
All strings are stored in a vector of strings. The data entry phase terminates when the user enters the “stop” string. 
This termination string is not stored in the vector.
When all strings have been entered the program displays all strings from the vector and the number of strings entered. 
Then the program finds out the longest string from the array and prints the longest string and its length.
The last thing the program does is that it displays the values returned by the member functions size and capacity of the vector.

*/
// Exercise 2B

#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

int main() {

    vector <string> strings;
    string str;
    int i = 0;
    int max = 0;
    int ind;
    string str0("stop");
    cout << "\nEnter the strings and type 'stop' to stop string entry: \n"; 

    while ( 1)
    {
        
        
        getline(cin, str);
    
        if (str.compare(str0) == 0)
        {
            cout << endl;
    
            break;
        }
        if (! str.empty())
        {
            strings.push_back(str);
            i++;
        }
        
        
        
        
    }
    cout << "Strings entered\n"; 
    cout << "---------------";
    cout << endl;

    
    // print the strings entered
    for (int i =  0; i < strings.size() ;i++) {
        cout << strings[i]<< endl;
    
    }
    cout << endl;
    cout << "The number of strings entered: " << strings.size() << endl;
    // here for finding the longest string
    for (int i =  0; i < strings.size() ;i++) {
        
        if (strings[i].size() > max)
        {
            max = strings[i].size() ;
            ind = i;
        }
        
    }
    cout << "Element [" << strings[ind] << "] is the longest with [" << max << "] length" << endl;

    cout << endl;
    cout << "The member function size of the vector is: " << strings.size() << endl;
    cout << "The member function capacity of the vector is: " << strings.capacity() << endl;
    cout << endl;
} 