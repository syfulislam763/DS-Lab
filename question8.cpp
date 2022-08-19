

//Algorithm

/*
    bubble_sort(arr, n)
    START
    Step-1: Repeat step-2 while i < n
    Step-2: Repeat steps 3, 4, 5 and 6 while j < n
    Step-3: if arr[i] < arr[j]
    Step-4: set temp = arr[i]
    Step-5: set arr[i] = arr[j]
    Step-6: set arr[j] = temp
    STOP
*/


#include <iostream>

void bubble_sort(int arr[], int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(arr[i] < arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void display(int arr[], int n){
    for(int i = 0; i < n; i++){
        std::cout << arr[i] << "\t";
    }
    std::cout << '\n';
}

int main(){


    int arr[5] = {5, 3, 4, 1, 2};
    std::cout << "Before sort: \n";
    display(arr, 5);
    bubble_sort(arr, 5);
    std::cout << "After sort: \n";
    display(arr, 5);



    return 0;
}