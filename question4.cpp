

//Algorithm
/*

    factorial(n)
    Step-1: if n <= 1
            go to step-3
    Step-2: n * factorial(n-1)
    Step-3: exit

*/


#include <iostream>


int factorial(int n){
    if(n == 1)return 1;
    else return n * factorial(n-1);
}

int main(){

    int n = 5;

    std::cout << factorial(n);


    return 0;
}