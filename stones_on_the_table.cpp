#include <iostream>
#include <string>

int main() {
    int n;
    std::string s;
    int count = 0;

    std::cout << "Ingrese el valor de n: ";
    std::cin >> n;

    std::cout << "Ingrese la cadena s: ";
    std::cin >> s;

    for (int i = 0; i < n - 1; i++) {
        if (s[i] == s[i + 1]) {
            count++;
        }
    }

    std::cout << "La cantidad de caracteres consecutivos iguales es: " << count << std::endl;

    return 0;
}
