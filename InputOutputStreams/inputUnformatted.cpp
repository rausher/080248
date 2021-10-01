#include <iostream>
#include <string>

int main(){

  std::cout << std::endl;

  std::string line;
  std::cout << "Write a line: " << std::endl;
  std::getline(std::cin, line);
  std::cout << line << std::endl;

  std::cout << std::endl;

  std::cout << "Write numbers, separated by;" << std::endl;
  while ( std::getline(std::cin, line, ';') ) {
    std::cout << line << std::endl;
  }

  std::cout << std::endl;

}
