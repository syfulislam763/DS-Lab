


//Algorithm

/*

    Step-1: Start
    Step-2: Set C = SC = N = 0
    Step-3: Repeat steps 4, 5 and 6 while i < str.length()
    Step-4: if
            str[i] >= 32 && str[i] <= 47 ||
            str[i] >= 58 && str[i] <= 64 ||
            str[i] >= 91 && str[i] <= 96 ||
            str[i] >= 123 && str[i] <= 126
            then SC++
            [end of if]
    Step-5: if str[i] >= 48 && str[i] <= 57 then N++
            [end of if]
    Step-6: if
            str[i] >= 65 && str[i] <= 90 ||
            str[i] >= 97 && str[i] <= 122
            then C++
            [end of if]
    Step-7: Stop




*/
#include <iostream>
#include <string>

void countCSCN(std::string str, int &C, int &SC, int &N){
    for(int i = 0; i < str.length(); i++){
        if(
            str[i] >= 32 && str[i] <= 47 ||
            str[i] >= 58 && str[i] <= 64 ||
            str[i] >= 91 && str[i] <= 96 ||
            str[i] >= 123 && str[i] <= 126
        )SC++;

        if(str[i] >= 48 && str[i] <= 57)N++;

        if(
            str[i] >= 65 && str[i] <= 90 ||
            str[i] >= 97 && str[i] <= 122
        )C++;
    }
}


int main(){

    std::string str;
    int C, SC, N;
    C = SC = N = 0;
    std::cout << "Enter a line of text with characters, special characters and digits\n";
    std::getline(std::cin, str);
    countCSCN(str, C, SC, N);

    std::cout <<"characters = " <<  C << std::endl;
    std::cout <<"special characters = " << SC << std::endl;
    std::cout <<"digits = "<<  N << std::endl;

    return 0;
}