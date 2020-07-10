#include <iostream>
#include <string>

int main()
{
  std::string greeting;
  std::cout<< "Enter a string: "<<std::endl;
  getline(std::cin, greeting);
  std::cout<< "\nString you entered is : "<<std::endl;
  std::cout << greeting << std::endl;
}
