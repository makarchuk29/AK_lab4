#include "calculator.h"
#include <bits/stdc++.h> 
using namespace std;

double ScienceCalculator::max(double x, double y)
{
    if (x >= y)
    {
        return x;
    }
    return y;

}

void ScienceCalculator::selectionSort(int arr[], int size)  
{  
    int i, j, min_idx;  
    for (i = 0; i < size-1; i++)  
    {  
        min_idx = i;  
        for (j = i+1; j < size; j++)  
        if (arr[j] < arr[min_idx])  
            min_idx = j;  
  
        swap(&arr[min_idx], &arr[i]);  
    }  
}  

void ScienceCalculator::printArray(int arr[], int size)  
{    
    int i;  
    for (i=0; i < size; i++)  
        cout << arr[i] << " ";  
    cout << endl;  
}

void ScienceCalculator::swap(int *xp, int *yp)  
{  
    int temp = *xp;  
    *xp = *yp;  
    *yp = temp;  
} 