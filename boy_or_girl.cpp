#include <iostream>
#include <string>

int main() {
    std::string cadena;
    std::string letrasUnicas;

    std::getline(std::cin, cadena);

    for (char c : cadena) {
        if (isalpha(c)) {
            char lowercase = tolower(c);
            if (letrasUnicas.find(lowercase) == std::string::npos) {
                letrasUnicas += lowercase;
            }
        }
    }
    if ((letrasUnicas).length()%2==0){
        std::cout << "CHAT WITH HER!"<< std::endl;
    }else{
        std::cout << "IGNORE HIM!"<< std::endl;
    }

    return 0;
}
