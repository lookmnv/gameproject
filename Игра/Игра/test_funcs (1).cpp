int nullpole(int field[]) {//обнуляем поле и расставляем блоки
    for (int i = 0; i < 25; i++) {
        field[i] = 0;
    }
    field[1] = field[3] = field[11] = field[13] = field[21] = field[23] = 9;
    return field[25];
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
