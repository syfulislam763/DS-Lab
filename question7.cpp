


//Algorithm
/*

    //Enqueue algorithm
    Enqueue(x)
    Step-1: if top >= SIZE-1
            print Queue OverFlow
            go to step-4
            [end of if]
    Step-2: arr[++top] = x
    Step-3: print x pushed into queue
    Step-4: exit

    //Dequeue algorithm
    Dequeue()
    Step-1: if top < 0
            print Stack Underflow
            set x = 0
            go to step-7
            [end of if]
    Step-2: set x = queue[0];
    Step-3: repeat step-4 while i < SIZE
    Step-4: queue[i] = queue[i+1]
    Step-5: top--
    Step-6: print x deleted from queue
    Step-7: exit with x

*/




#include <iostream>
#define SIZE 5

class Queue{
    int top;
    int queue[SIZE];
    public:
        Queue(){
            top = -1;
            for(int i = 0; i < SIZE; i++){

            }
        }
        bool Enqueue(int x);
        int Dequeue();
        void Display(){
            for(int i = 0; i <= top; i++){
                std::cout << queue[i] << "\t";
            }
            std::cout << "\n";
        }
};

bool Queue::Enqueue(int x){
    if(top >= SIZE-1){
        std::cout << "Queue overflow\n";
        return false;
    }
    queue[++top] = x;
    std::cout << x << " inserted into queue\n";
    return true;
}

int Queue::Dequeue(){
    if(top < 0){
        std::cout << "Queue underflow\n";
        return 0;
    }
    int x = queue[0];
    for(int i = 0; i < SIZE; i++){
        queue[i] = queue[i+1];
    }
    top--;
    std::cout << x << " deleted from queue\n";
    return x;
}

int main(){

    Queue q;
    q.Enqueue(5);
    q.Enqueue(10);
    q.Enqueue(15);
    q.Display();
    q.Dequeue();
    q.Display();
    


    return 0;
}