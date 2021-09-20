#include <iostream>
#include "function.h"

int main() {

    std::string operation;
    line seam;
    bool endProgram = false;
    do{
        std::cout << "Enter the name of the operation:";
        std::cin >> operation;
        if(operation == "scalpel") seam = Scalpel();
        else if(operation == "hemostat") Hemostat();
        else if(operation == "tweezers") Tweezers();
        else if(operation == "suture") endProgram = Suture(seam);
        else std::cout << "Bad name of the operation! Try again!" << std::endl;
    } while (!endProgram);


    return 0;
}
