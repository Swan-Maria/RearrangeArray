#include <iostream>
#include <time.h>
#include <Windows.h>

void rearrangeArray(int* arr, int n);

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    srand(time(NULL));

    const int size = 20;

    int arr[size];

    for (int i = 0; i < size; ++i) {
        arr[i] = rand() % 20 -10;
    }

    std::cout << "До преобразования:   ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << "  ";
    }
    std::cout << std::endl;

    rearrangeArray(arr, size);

    std::cout << "После преобразования: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << "  ";
    }
    std::cout << std::endl;

    return 0;
}

void rearrangeArray(int* arr, int size) {
    int posIndex = 0;
    for (int i = 0; i < size; ++i) {
        if (arr[i] >= 0) {
            std::swap(arr[posIndex], arr[i]);
            posIndex++;
        }
    }
}
