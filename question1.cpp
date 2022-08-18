

//Algorithm
/*
    Step-1: Start
    Step-2: Declare arr[size], minValue, maxValue
    Step-3: Initialize minValue = arr[0] and maxValue = arr[0]
    Step-4: repeat steps 5 and 6 while i < size
    Step-5: if minValue>arr[i] then minValue = arr[i]
    Step-6: if maxValue < arr[i] then maxValue = arr[i]
    step-5: Stop
*/

#include <iostream>

int main(){
    const int size = 7;
    int arr[size] = {10, 0, -5, 45, 7, 50, 23};
    int minValue = arr[0];
    int maxValue = arr[0];

    for(int i = 0; i < size; i++){
        if(minValue>arr[i])minValue = arr[i];
        if(maxValue<arr[i])maxValue = arr[i];
    }

    std::cout << "minimum value = " << minValue << std::endl;
    std::cout << "maximum value = " << maxValue << std::endl;




    return 0;
}