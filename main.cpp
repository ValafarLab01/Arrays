/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: homayoun
 *
 * Created on September 8, 2017, 9:20 AM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

void getArray(int myArray[], int size); //Arrays are always passed by reference
void printArray(int myArray[], int size); //Arrays in functions always need a size

/*
 * 
 */
int main(int argc, char** argv) {
    int Array1[5]; //An uninitialized 5 element array
    int Array2[5] = {1, 2, 3, 4, 5}; //An initialized 5 element array
    int Array3[] = {1, 2, 3, 4, 5, 6}; //An initialized array with implicit size of 5
    
    int temp;
    cout << "Enter array size: ";
    cin >> temp;
    
    const int size(temp);
    int Array4[size];
    
    getArray(Array4, size);
    printArray(Array4, size);
    
    //C++ does not check for array-out-of-bound violations
    getArray(Array4, 10);
    printArray(Array4, 15);

    return 0;
}

void getArray(int myArray[], int size) {
    cout << "Please enter the " << size << " elements of the array: " << endl;
    for(int i=0; i < size; i++) {
        cin >> myArray[i];
    }
}

void printArray(int myArray[], int size) {
    for(int i=0; i < size; i++) {
        cout << myArray[i] << " ";
    }
    cout << endl;
}

