#include <iostream>

int main()
{
  int favorite_number;
  std::cout << "Ingrese su número favorito entre 1 y 100: ";
  std::cin >> favorite_number;
  std::cout << "No, en serio, " << favorite_number << " es mi número favorito tambien!" << std::endl;

  return 0;
}
