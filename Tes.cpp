#include <iostream>

int main() {
    int angka;
    std::cout << "Masukkan sebuah angka: ";
    std::cin >> angka;

    if (angka % 2 == 0) {
        std::cout << angka << " adalah bilangan genap." << std::endl;
    } else {
        std::cout << angka << " adalah bilangan ganjil." << std::endl;
    }

    return 0;
}
