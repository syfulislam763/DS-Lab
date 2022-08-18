

//Algorithm
/*
    linear_search(arr, n, val)
    Step-1: set pos = -1
    Step-2: set i = 0
    Step-3: repeat step 4 while i < n;
    Step-4: if val == arr[i]
            set pos = i
            print found
            go to step 6
            end of if
    Step-5: if pos == -1
            print not found
    Step-6:exit


*/

#include <iostream>


void linear_search(int arr[], int n, int val){
    int pos = -1;
    for(int i = 0; i < n; i++){
        if(val == arr[i]){
            pos = i;
            std::cout << "Found!\n";
            return;
        }
    }
    if(pos == -1)std::cout << "Not found!\n";
    
}

int main(){

    int arr[] = {1 ,2 ,3 ,5};

    linear_search(arr, 4, 7);



    return 0;
}