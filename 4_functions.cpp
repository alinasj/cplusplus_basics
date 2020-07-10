#include <iostream>
#include <cmath>

using namespace std;

double power(int base, int exponent)
{
  double result = 1;
  for (int i =0; i < exponent; i++)
  {
    result = result * base;
  }
  return result;
}



int main()
{
  int base, exponent; //declaration and initialization
  double power_result;

  cout<<"What is a base? : ";
  cin >> base;
  cout<<"What is exponent? : ";
  cin >> exponent;
  cout<<"\n(InBuilt Function)\n";
  cout<< base << " raised to the power of "<< exponent << " is : ";
  cout<< pow(base, exponent)<<endl;
  cout<<"\n(Our Function)\n";
  cout<< base << " raised to the power of "<< exponent << " is : ";
  power_result = power(base, exponent);
  cout<< power_result <<endl;
  return 0;
}
