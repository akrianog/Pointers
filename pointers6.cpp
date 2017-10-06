//Punteros a funciones forma moderna 
#include <iostream>
     #include <cmath>
     #include <functional>

     // This function computes the central derivative of an arbitrary function f.
     // The function f returns a double and receives a double
     double central_deriv(std::function<double(double)> f, double x, double h);
     double mysin(double x);
     double mycos(double x);

     int main(int argc, char **argv)
     {
       double x = M_PI/4;
       double h = 0.01;
       std::cout << central_deriv(mysin, x, h) << std::endl;
       std::cout << central_deriv(mycos, x, h) << std::endl;

       return 0;
     }

     double central_deriv(std::function<double(double)> f, double x, double h)
     {
       return (f(x + h/2) - f(x-h/2))/h;
     }

     double mysin(double x)
     {
     return std::sin(x);
     }

     double mycos(double x)
     {
return std::cos(x);
     }
