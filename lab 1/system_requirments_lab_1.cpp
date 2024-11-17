#include <iostream>
#include <cmath>

bool is_simple(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int M;
    std::cout << "Введите число M (от 100 до 999): ";
    std::cin >> M;

    if (M >= 100 && M <= 999) {
        int* numbers = new int[M];
        int count = 0;

        for (int x = 2; x <= M; x++) {
            if (is_simple(x)) {
                numbers[count] = x;
                count++;
            }
        }

        std::cout << "Простые числа: ";
        for (int i = 0; i < count; i++) {
            std::cout << numbers[i];
            if (i < count - 1) std::cout << ", ";
        }
        std::cout << std::endl;

        std::cout << "Количество простых чисел: " << count << std::endl;

        int sum = 0;
        for (int i = 0; i < count; i++) {
            sum += numbers[i];
        }
        std::cout << "Сумма простых чисел: " << sum << std::endl;

        delete[] numbers;
    };

    return 0;
}
