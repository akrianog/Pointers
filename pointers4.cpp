#include <iostream>

int main(void)
{
  const int N=1500000;
  double *data;
  data= new double [N] {0}; //Despues de hacer un new hay que hacer un delete o sino sale error de perdida de memoria.
  
  std::cout<<data[N/2]<<std::endl;

  delete [] data; //SIEMPRE QUE HAY NEW HAY DELETE
  
  return 0;
}
