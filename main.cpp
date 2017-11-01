#include <iostream>
#include <float.h>
#include <math.h>
#include <iomanip>


int main() {


    char openBracket = 0;
    char closeBracket = 0;
    char comma = 0;

    std::cout << "Point A:" << std::endl;
    double Ax = 0;
    double Ay = 0;
    if(scanf(" %c %lf %c %lf %c", &openBracket, &Ax, &comma, &Ay, &closeBracket) != 5) {
        std:: cout << "Invalid input." << std::endl;
        return 0;
    }
    if(openBracket != '[' || comma != ',' || closeBracket != ']') {
        std::  cout << "Invalid input." << std::endl;
        return 0;
    }
    //getchar();
    std::cout << "Point B:" << std::endl;
    double Bx = 0;
    double By = 0;
    if(scanf(" %c %lf %c %lf %c", &openBracket, &Bx, &comma, &By, &closeBracket) != 5) {
        std:: cout << "Invalid input." << std::endl;
        return 0;
    }
    if(openBracket != '[' || comma != ',' || closeBracket != ']') {
        std::  cout << "Invalid input." << std::endl;
        return 0;
    }
    //getchar();


    std::cout << "Point C:" << std::endl;
    double Cx = 0;
    double Cy = 0;
    if(scanf(" %c %lf %c %lf %c", &openBracket, &Cx, &comma, &Cy, &closeBracket) != 5) {
        std::  cout << "Invalid input." << std::endl;
        return 0;
    }
//    if(openBracket == '1'){
    //      Cx = 10.5;
    //  }
    if (openBracket != '[' || comma != ',' || closeBracket != ']') {
        std:: cout << "Invalid input." <<std:: endl;
        return 0;
    }
    //getchar();

    if(fabs(Ax *(By - Cy) + Bx *(Cy - Ay) + Cx *(Ay - By)) < pow(10,-6)){
        std:: cout << "Parallelograms do not exist." <<std:: endl;
        return 0;
    }
    double Dx = 0;
    double Dy = 0;
    double Wx = 0;
    double Wy = 0;
    double Zx = 0;
    double Zy = 0;


/*********************************/
    Dx = Bx +(Cx - Ax);
    Dy = By +(Cy - Ay);
    double diagonalA1 = sqrt(pow((Dx - Ax), 2) +  pow((Ay - Dy),2));
    double diagonalA2 = sqrt(pow((Cx - Bx), 2) +  pow((By - Cy),2));
    double sideA1 = fabs(Ax - Bx) + fabs(Ay - By);
    double sideA2 = fabs(Ax - Cx) + fabs(Ay - Cy);
    double sideA3 = fabs(Cx - Dx) + fabs(Cy - Dy);


    if(fabs(fabs(diagonalA1/diagonalA2)-1)< pow(10,-6)){


        if (fabs(fabs((sideA1 + sideA2) / (sideA3 + sideA1))-1) < pow(10,-6) ){
            std::cout << std::fixed;
            std::cout << std::setprecision(3);
            std::cout << "A': ["<< Dx << "," << Dy << "], square"<<std::endl;
        }
        else {
            std::cout << std::fixed;
            std::cout << std::setprecision(3);
            std:: cout << "A': ["<< Dx << "," << Dy << "], rectangle"<<std::endl;
        }
    }
    else{
        double length1 = sqrt(pow((Cx - Ax),2) + pow((Cy - Ay),2));
        double length2 = sqrt(pow((Bx - Ax),2) + pow((By - Ay),2));
        double length3 = sqrt(pow((Dx - Cx),2) + pow((Dy - Cy),2));
        double length4 = sqrt(pow((Dx - Bx),2) + pow((Dy - By),2));
      //  std:: cout << fish << std:: endl;
        if (fabs(fabs((length1 + length4) / (length2 + length3)) - 1) < pow(10,-6)) {
            std::cout << std::fixed;
            std::cout << std::setprecision(3);

            std:: cout << "A': [" << Dx << "," << Dy << "], rhombus" << std::endl;
        }
        else {
            std::cout << std::fixed;
            std::cout << std::setprecision(3);
            std::  cout << "A': [" << Dx << "," << Dy << "], parallelogram" << std::endl;
        }
    }
/*********************************/
    Wx = Ax +(Cx - Bx);
    Wy = Ay +(Cy - By);
    double diagonalW1 = sqrt(pow((Wx - Bx), 2) +  pow((By - Wy),2));
    double diagonalW2 = sqrt(pow((Cx - Ax), 2) +  pow((Ay - Cy),2));
    double sideW1 = fabs(Ax - Bx) + fabs(Ay - By);
    double sideW2 = fabs(Ax - Cx) + fabs(Ay - Cy);
    double sideW3 = fabs(Cx - Wx) + fabs(Cy - Wy);

    if(fabs(fabs(diagonalW1/diagonalW2)-1)< pow(10,-6)){

        if (fabs(fabs((sideW1 + sideW2) / (sideW3 + sideW1))-1) < pow(10,-6)){
            std::cout << std::fixed;
            std::cout << std::setprecision(3);
            std:: cout << "B': ["<< Wx << "," << Wy << "], square"<<std::endl;
        }
        else {
            std::cout << std::fixed;
            std::cout << std::setprecision(3);
            std:: cout << "B': ["<< Wx << "," << Wy << "], rectangle"<<std::endl;
        }
    }
    else{
        double length1 = sqrt(pow((Cx - Ax),2) + pow((Cy - Ay),2));
        double length2 = sqrt(pow((Bx - Ax),2) + pow((By - Ay),2));
        double length3 = sqrt(pow((Wx - Cx),2) + pow((Wy - Cy),2));
        double length4 = sqrt(pow((Wx - Ax),2) + pow((Wy - Ay),2));
        if (fabs(fabs((length1 + length4) / (length2 + length3)) - 1) < pow(10,-6)) {

            std::cout << std::fixed;
            std::cout << std::setprecision(3);
            std:: cout << "B': [" << Wx << "," << Wy << "], rhombus" <<std:: endl;
        }
        else {
            std::cout << std::fixed;
            std::cout << std::setprecision(3);
            std::  cout << "B': [" << Wx << "," << Wy << "], parallelogram" << std::endl;

        }
    }
/*********************************/
//std:: cout << std:: fixed;
//std::cout << std::setprecision(15);
    //std:: cout << DBL_EPSILON << std:: endl;
    Zx = Bx +(Ax - Cx);
    Zy = By +(Ay - Cy);
    double diagonalZ1 = sqrt(pow((Zx - Cx), 2) +  pow((Cy - Zy),2));
    double diagonalZ2 = sqrt(pow((Ax - Bx), 2) +  pow((By - Ay),2));
    double sideZ1 = fabs(Ax - Cx) + fabs(Ay - Cy);
    double sideZ2 = fabs(Ax - Cx) + fabs(Ay - Cy);
    double sideZ3 = fabs(Cx - Zx) + fabs(Cy - Zy);

    if (fabs(fabs(diagonalZ1/diagonalZ2)-1)< pow(10,-6)){

        if (fabs(fabs((sideZ1 + sideZ2) / (sideZ3 + sideZ1))-1) < pow(10,-6)){
            std::cout << std::fixed;
            std::cout << std::setprecision(3);
            std:: cout << "C': ["<< Zx << "," << Zy << "], square"<<std::endl;
        }
        else {
            std::cout << std::fixed;
            std::cout << std::setprecision(3);
            std:: cout << "C': ["<< Zx << "," << Zy << "], rectangle"<<std::endl;
        }
    }
    else{
        double length1 = sqrt(pow((Cx - Ax),2) + pow((Cy - Ay),2));
        double length2 = sqrt(pow((Bx - Ax),2) + pow((By - Ay),2));
        double length3 = sqrt(pow((Zx - Cx),2) + pow((Zy - Cy),2));
        double length4 = sqrt(pow((Zx - Bx),2) + pow((Zy - By),2));




        if (fabs(fabs((length1 + length4) / (length2 + length3)) - 1) < pow(10,-6) ) {
            std::cout << std::fixed;
            std::cout << std::setprecision(3);
            std::cout << "C': [" << Zx << "," << Zy << "], rhombus" << std::endl;
        }
        else {
            std::cout << std::fixed;
            std::cout << std::setprecision(3);
            std:: cout << "C': [" << Zx << "," << Zy << "], parallelogram" << std:: endl;
        }
    }









/*
    cout << "The coordinates are: " << endl;
    cout << Ax << " ";
    cout << Ay << endl;

    cout << Bx << " ";
    cout << By << endl;

    cout << Cx << " ";
    cout << Cy << endl;
*/
    return 0;
}