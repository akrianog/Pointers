//Punteros a funciones
#include <iostream>
#include <cmath>

// This function computes the central derivative of an arbitrary function f.
// The function f returns a double and receives a double
     double central_deriv(double (*f)(double), double x, double h);

int main(int argc, char **argv)
{
  double x = M_PI/4; //Para que funcione el M_PI hay que incluir a cmath
  double h = 0.01;
  std::cout << central_deriv(std::sin, x, h) << std::endl; //Ya no depende de quien es f, se puede mandar a la que quiera 
  std::cout << central_deriv(std::cos, x, h) << std::endl;
  
  return 0;
}
//implementacion 
double central_deriv(double (*f)(double), double x, double h)
{
  return (f(x + h/2) - f(x-h/2))/h;
}

//Lo unico que cambia es que la funcion recibe un argumento que es una funcion por lo que debe ser un punter (la funcion que recibe)
