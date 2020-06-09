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
