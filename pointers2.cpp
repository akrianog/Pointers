//Con Vector funciona bien para memorias muy grandes, con arrays viejos deja de funcionar.

//Con array falla tambien, porque ubica la variable en la direccion del stack, ya se sabe el tamaño del arreglo en tiempo de compilacion 

#include <iostream>
#include <vector>
#include<array>

int main (void)
{
  const int N=1500000000; //Con un numero tan grande tambien se muere el vector
  std::vector< double> data;
  data.resize(N);
  //std::array<double, N>data;
  std::cout<<data[N/2]<<std::endl;
  
  return 0;
}
