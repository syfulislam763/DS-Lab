

//Algorithm
/*

START
Procedure towerHanoi(disk, source, dest, aux)

   IF disk == 1, THEN
      move disk from source to dest             
   ELSE
      Hanoi(disk - 1, source, aux, dest) 
      move disk from source to dest        
      Hanoi(disk - 1, aux, dest, source)    
   END IF
   
END Procedure
STOP


*/

#include <iostream>



void towerOfHanoi(int n, char from_rod, char to_rod, char aux_rod) 
{ 
    if (n == 0) {
        return; 
    } 
    towerOfHanoi(n - 1, from_rod, aux_rod, to_rod); 
    std::cout << "Move disk " << n << " from rod " << from_rod <<" to rod " << to_rod << std::endl; 
    towerOfHanoi(n - 1, aux_rod, to_rod, from_rod); 
} 
int main(){

    int n = 4; 
    towerOfHanoi(n, 'A', 'C', 'B');


    return 0;
}