#include <SFML/Graphics.hpp>


#include <vector>

#include <iostream>

#ifdef _WIN32
#include <conio.h>
#include <windows.h>
#endif
#include <cmath>

#include <ctime>
//Пишет Саида
using namespace std;
using namespace sf;
int stolb[3];//порядок столбцов
int nullpole(int field[]) {//обнуляем поле и расставляем блоки
    for (int i = 0; i < 25; i++) {
        field[i] = 0;
    }
    field[1] = field[3] = field[11] = field[13] = field[21] = field[23] = 9;
    return field[25];
}
int proverka(int field[], int orderCubesToBeEnd[]) {//проверка на то, совпали ли столбцы с верхними столбцами
    //если совпали - вернется 1, в обратном случае - 0
    int answer = 0, countMatchCubes = 0;
    int size = 25;
    for (int i = 0; i < 25; i += 5) {
        if (field[i] == field[i + 5] && field[i] == orderCubesToBeEnd[0]) {
            countMatchCubes++;
        }
        if (countMatchCubes == 4) {
            countMatchCubes = 0;
            for (int j = 2; j < 18; j += 5) {
                if (field[j] == field[j + 5] && field[j] == orderCubesToBeEnd[1])
                    countMatchCubes++;
                if (countMatchCubes == 4) {
                    countMatchCubes = 0;
                    for (int m = 4; m < 20; m += 5) {
                        if (field[m] == field[m + 5] && field[m] == (orderCubesToBeEnd[2]))
                            countMatchCubes++;
                        if (countMatchCubes == 4) {
                            answer = 1;
                        }
                    }
                }
            }
        }
    }
    return answer;
}
int arrangement(int field[]) {//случайная расстановка кубиков на поле
    int randIndex, blue = 0, red = 0, yellow = 0;
    while (true) {
        while (blue != 5) {
            randIndex = rand() % 25;
            if (field[randIndex] != 9 && field[randIndex] != 1) {
                field[randIndex] = 1;
                blue++;
            }
        }
        while (red != 5) {
            randIndex = rand() % 25;
            if (field[randIndex] != 9 && field[randIndex] != 1 && field[randIndex] != 2) {
                field[randIndex] = 2;
                red++;
            }
        }
        while (yellow != 5) {
            randIndex = rand() % 25;
            if (field[randIndex] != 9 && field[randIndex] != 1 && field[randIndex] != 2 && field[randIndex] != 3) {
                field[randIndex] = 3;
                yellow++;
            }
        }
        break;
    }
    return field[25];
}
//Пишет Ангелина
int stolbi(int order[]) {//случайная расстановка порядка столбцов, которые нужно собрать
    srand(time(0));
    int orderCubesToBeEnd[3], rnd;
    orderCubesToBeEnd[0] = rand() % 3;
    orderCubesToBeEnd[1] = rand() % 3;
    while (orderCubesToBeEnd[1] == orderCubesToBeEnd[0]) {
        orderCubesToBeEnd[1] = rand() % 3;
    }
    orderCubesToBeEnd[2] = rand() % 3;
    while (orderCubesToBeEnd[1] == orderCubesToBeEnd[2] || orderCubesToBeEnd[0] == orderCubesToBeEnd[2]) {
        orderCubesToBeEnd[2] = rand() % 3;
    }
    order[0] = orderCubesToBeEnd[0];
    order[1] = orderCubesToBeEnd[1];
    order[2] = orderCubesToBeEnd[2];
    return order[3];
}
int matrixShow(int field[]) {//выводит текущее состояние поля
    for (int i = 0; i < 25; i++) {
        if (i % 5 == 0) {
            cout << endl;
        }
        cout << field[i] << " ";
    }
    return field[25];
}
int ModelBox(int field[], int vibor1, int vibor2) {//тут происходит проверка корректное перемещение блоков, то есть что мы не хотим перейти из клеточки 4 в клеточку 15, в случае если это сделать можно, то мы заменяем значения в матрице и перерисовываем поле
    int temp, complete = 0;
    complete = 0;
    if (vibor1 != 1 && vibor1 != 3 && vibor1 != 11 && vibor1 != 13 && vibor1 != 21 && vibor1 != 23) {
        if (field[vibor2] == 0) {
            if (vibor2 != 1 && vibor2 != 3 && vibor2 != 11 && vibor2 != 13 && vibor2 != 21 && vibor2 != 23) {
                if ((vibor1 == 4 && vibor2 == 5) || (vibor1 == 5 && vibor2 == 4) || (vibor1 == 9 && vibor2 == 10) || (vibor1 == 10 && vibor2 == 9) || (vibor1 == 14 && vibor2 == 15) || (vibor1 == 15 && vibor2 == 14) || (vibor1 == 19 && vibor2 == 20) || (vibor1 == 20 && vibor2 == 19)) {}
                else {
                    if ((abs(vibor1 - vibor2) == 1 || abs(vibor1 - vibor2) == 5)) {
                        temp = field[vibor1];
                        field[vibor1] = field[vibor2];
                        field[vibor2] = temp;
                        complete = 1;
                    }
                }
            }
        }
    }
    return field[25];
}

void vivodporyadka(int orderCubesToBeEnd[]) {//вывод порядка столбцов можно использовать для документации
    for (int i = 0; i < 3; i++)
        cout << orderCubesToBeEnd[i] << "   ";
}
