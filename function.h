//
// Created by kvitadmin on 20.09.2021.
//

#ifndef HOMEWORK25_4_1_FUNCTION_H
#define HOMEWORK25_4_1_FUNCTION_H
#include <cmath>

bool eq(double x, double y){
    return (std::fabs(x-y) < 0.0001);
}
struct point{
    double x;
    double y;
};
 struct line{
     point begin;
     point end;
 };

 line Scalpel(void){
     line seam;
     std::cout << "Enter the x coordinate of the first seam point: ";
     std::cin >> seam.begin.x;
     std::cout << "Enter the y coordinate of the first seam point: ";
     std::cin >> seam.begin.y;
     std::cout << "Enter the x coordinate of the second seam point: ";
     std::cin >> seam.end.x;
     std::cout << "Enter the y coordinate of the second seam point: ";
     std::cin >> seam.end.y;
     std::cout << "The cut is completed!" << std::endl;
     return seam;
 }
 void Hemostat(void){
     point h;
     std::cout << "Enter the x coordinate of the hemostat: ";
     std::cin >> h.x;
     std::cout << "Enter the y coordinate of the hemostat: ";
     std::cin >> h.y;
     std::cout << "The clip is completed!" << std::endl;
 }

 void Tweezers(void){
     point h;
     std::cout << "Enter the x coordinate of the tweezers: ";
     std::cin >> h.x;
     std::cout << "Enter the y coordinate of the tweezers: ";
     std::cin >> h.y;
     std::cout << "The clip is completed!" << std::endl;
 }
 bool CompareSeam(line &oldSeam, line &newSeam){
     if(eq(oldSeam.begin.x, newSeam.begin.x) && eq(oldSeam.begin.y, newSeam.begin.y) && eq(oldSeam.end.x, newSeam.end.x) && eq(oldSeam.end.y, newSeam.end.y) ){
         return true;
     }
     else if(eq(oldSeam.begin.x, newSeam.end.x) && eq(oldSeam.begin.y, newSeam.end.y) && eq(oldSeam.end.x, newSeam.begin.x) && eq(oldSeam.end.y, newSeam.begin.y)){
         return true;
     }
     else{
         return false;
     }
 }
 bool Suture(line &seam){
     line newSeam;
     std::cout << "Enter the x coordinate of the first seam point: ";
     std::cin >> newSeam.begin.x;
     std::cout << "Enter the y coordinate of the first seam point: ";
     std::cin >> newSeam.begin.y;
     std::cout << "Enter the x coordinate of the second seam point: ";
     std::cin >> newSeam.end.x;
     std::cout << "Enter the y coordinate of the second seam point: ";
     std::cin >> newSeam.end.y;
     std::cout << "The suture is completed!" << std::endl;
     if(CompareSeam(seam, newSeam)){
         return true;
     }
     else return false;
 }
#endif //HOMEWORK25_4_1_FUNCTION_H
