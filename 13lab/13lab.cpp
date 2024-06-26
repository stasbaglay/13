#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

template <class T>
void insertSort(T a[], long size) {
    T x;
    long i, j;

    for (i = 0; i < size; i++) {  // цикл проходов, i - номер прохода
        x = a[i];

        // поиск места элемента в готовой последовательности 
        for (j = i - 1; j >= 0 && a[j] > x; j--)
            a[j + 1] = a[j];    // сдвигаем элемент направо, пока не дошли

        // место найдено, вставить элемент
        a[j + 1] = x;
    }
}

int main() {
    srand(time(NULL));
    const long SIZE = 10;
    int ar[SIZE];

    // до сортировки
    for (int i = 0; i < SIZE; i++) {
        ar[i] = rand() % 100;
        cout << ar[i] << " ";
    }
    cout << "\n\n";
    insertSort(ar, SIZE);

    // после сортировки
    for (int i = 0; i < SIZE; i++) {
        cout << ar[i] << " ";
    }
    cout << "\n\n";
}