#include <iostream>

int main(void)
{
  const int N=15;
  double data[N]={0};
  std::cout<<data<<std::endl;
  std::cout<<&data[0]<<std::endl;

  return 0;
}
