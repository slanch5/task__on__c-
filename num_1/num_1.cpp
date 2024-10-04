// num_1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>


int main() {


    int size = 0;
    int sum = 0;

    std::cout << "Enter the number of numbers: ";
    std::cin >> size;

    int* a = new int[size]; 
    int* evenArray = new int[size]; 
    int evenCount = 0; 

    std::cout << "write the numbers: " << std::endl;
    for (int i = 0; i < size; i++) {
        std::cin >> a[i];
        if (a[i] % 2 == 0) {
            evenArray[evenCount] = a[i]; 
            evenCount++;
        }
    }

    
    for (int i = 0; i < evenCount; i++) {
        sum += evenArray[i];
    }

    delete[] a;        
    delete[] evenArray;

    std::cout << "result: " << sum << std::endl;

    return 0;
}


