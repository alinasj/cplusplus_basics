#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  int base, exponent; //declaration and initialization

  cout<<"What is a base? : ";
  cin >> base;
  cout<<"What is exponent? : ";
  cin >> exponent;
  cout<<"Power of " << base << " with exponent "<< exponent << " is : ";
  cout<< pow(base, exponent)<<endl;

  return 0;
}
