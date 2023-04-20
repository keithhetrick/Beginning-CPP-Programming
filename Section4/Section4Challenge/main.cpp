#include <iostream>

int main()
{
  int favorite_number;
  std::cout << "Ingrese su número favorito entre 1 y 100: ";
  std::cin >> favorite_number;
  std::cout << "¡Increíble, ese es mi número favorito también!" << std::endl;
  std::cout << "No, en serio, " << favorite_number << " es mi número favorito." << std::endl;
  std::cout << "El programa se ejecutó en " << __TIME__ << std::endl;

  return 0;
}
