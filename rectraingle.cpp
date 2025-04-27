#include <cmath>
#include <iostream>
int main()
{
    float diag_length, param_a, param_b, perimetr, area;
    std::cout << "Введите параметры" << '\n';
    std::cin >> param_a;
    std::cin >> param_b;
    perimetr = param_a*2 + param_a*2;
    area = param_a* param_b;
    diag_length = sqrt(pow(param_a, 2) + pow(param_b, 2));
    std::cout << "Периметр: " << perimetr << '\n';
    std::cout << "Площадь: " << area << '\n';
    std::cout << "Длина диагонали: " << diag_length << '\n';
    return 0;
}
