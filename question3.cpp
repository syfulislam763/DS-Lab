
//Algorithm
/*
    binary_search(arr, left, right, val)
    Step-1: set beg = left,
                end = right,
                middle = (left+right)/2
                pos = -1
    Step-2: if beg <= end repeat step-3, step-4 and step-5
    Step-3: if arr[middle] == val
            pos = arr[middle]
            print found!
            go to step-7
            end of if
    Step-4: if arr[middle]<val
            set beg = middle+1
    Step-5: else 
                set end = middle-1
    Step-6: if pos == -1
            print not found
            end of else
    Step-7: exit

*/

#include <iostream>



void binary_search(int arr[], int left, int right, int val){
    int beg, end, middle;
    beg = left;
    end = right;
    middle = (left+right)/2;
    if(beg <= end){
        if(arr[middle] == val){
            std::cout << "Found!\n";
            return;
        }else if(arr[middle]<val){
            binary_search(arr, middle+1, end, val);
        }else{
            binary_search(arr, beg, middle-1, val);
        }
    }else{
        std::cout << "Not found!\n";
    }



}

int main(){
    int arr[5] = {1, 2, 3,4, 5};

    binary_search(arr, 0, 10, 8);



    return 0;
}