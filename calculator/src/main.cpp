#include <calculator.h>
#include <iostream>
#include <bits/stdc++.h> 
using namespace std;

int main()
{
    ScienceCalculator calculator;  
    double x = 5.4;
    double y = 6.03;
    cout << " x = " << x << ", y = " << y << endl;
    cout << "Max element = " << calculator.max(x, y) << endl;

    cout << "Try sort array with selection sort \n";
    int arr[] = {64, 25, 12, 22, 11};
    int size = sizeof(arr)/sizeof(arr[0]);
    calculator.printArray(arr, size);   

    calculator.selectionSort(arr, size);  

    cout << "Sorted array: \n";  
    calculator.printArray(arr, size);  
    return 0;  
}