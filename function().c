#include <stdio.h>

#include <time.h>

int reverse_order(); //用于对整数进行逆序
void bubble_sort();//冒泡排序算法
int function_1();//while
int function_2();//do -while
int function_3();//for 循环
void timing();//by recorder cod's running time

int main() {
    
    return 0;
}

int reverse_order() {
    int num;
    scanf("%d", &num);

    int digit;
    int ret = 0;

    while (num > 0) {
        digit = num % 10;
        ret = ret * 10 + digit;
        num /= 10;
    }
    printf("%d", ret);


    return ret;
}

int function_1() {
    int x = 0, y = 0, z = 0, cnt = 0;

    while (x < 33) {
        x++;
        y = 0;
        while (y < 50) {
            y++;
            z = 100 - x - y;
            if (z % 2 != 0)continue;
            if (z * 1.0 / 2 + 2 * y + 3 * x == 100) {
                printf("大马%2d匹，中马%2d匹，小马%2d匹\n", x, y, z);
                cnt++;
            }
        }
    }
    printf("有%d种解法\n", cnt);
    return 0;
}

int function_2() {
    int x = 0;
    int y = 0;
    int z = 0;
    int cnt = 0;

    do {
        x++;
        y = 0;
        do {
            y++;
            z = 100 - x - y;
            if (z % 2 != 0) {
                continue;
            }
            if ((3 * x + 2 * y + z * 1.0 / 2) == 100) {
                printf("大马%2d匹，中马%2d匹，小马%2d匹\n", x, y, z);
                cnt++;
            }
        } while (y < 50);
    } while (x < 33);
    printf("有%d种解法\n", cnt);

    return 0;
}

int function_3() {
    int x, y, z, cnt=0;

    for (x = 0; x <= 33; x++) {
        for (y = 0; y <= 50; y++) {
            z = 100 - x - y;
            if (z % 2 != 0) {
                continue;
            }
            if (x * 3 + y * 2 + z * 0.5 == 100) {

                printf("大马%2d匹，中马%2d匹，小马%2d匹\n", x, y, z);
                cnt++;
            }
        }
    }
    printf("有%d种解法\n", cnt);
    return 0;
}

void timing() {

    int fre=1;


    clock_t start, finish;
    float Total_time_1, Total_time_2, Total_time_3;
    start = clock();
    for (int i = 0; i < fre; ++i) {
        function_1();//while
    }

    finish = clock();
    Total_time_1 = (float) (finish - start) ;// CLOCKS_PER_SEC
    printf("WHILE running %f ms.\n", Total_time_1);


    start = clock();
    for (int i = 0; i < fre; ++i) {
        function_2();//do-while
    }

    finish = clock();
    Total_time_2 = (double) (finish - start) ;// CLOCKS_PER_SEC
    printf("DO_WHILE running time %f ms.\n", Total_time_2);

    start = clock();
    for (int i = 0; i < fre; ++i) {
        function_3();//for
    }

    finish = clock();
    Total_time_3 = (double) (finish - start) ;// CLOCKS_PER_SEC
    printf("FOR running time %f ms.\n", Total_time_3);

    printf("每个函数运行%d次\n",fre);
    printf("The code by   WHILE  total running time is %.3f ms.\n", Total_time_1);
    printf("         by DO_WHILE total running time is %.3f ms.\n", Total_time_2);
    printf("         by    FOR   total running time is %.3f ms.\n", Total_time_3);
    printf("The code by   WHILE  average running time is %.3f ms.\n", 1.0*Total_time_1/fre);
    printf("         by DO_WHILE average running time is %.3f ms.\n", 1.0*Total_time_2/fre);
    printf("         by    FOR   average running time is %.3f ms.\n", 1.0*Total_time_3/fre);
//    int x;
//    if (Total_time_1<Total_time_2){
//         x = Total_time_1;
//         Total_time_1=Total_time_2;
//         Total_time_2
//    }

}

void bubble_sort() {
    int arry[] = {45, 97, 6, 3, 46, 45, 46, 6, 5, 45, 4, 431, 40, 20};
    int tmp;
    for (int i = 0; i < 14; i++) {
        _Bool flag = 0;
        for (int j = 0; j < 14 - i; ++j) {
            if (arry[j] > arry[j + 1]) {
                tmp = arry[j];
                arry[j] = arry[j + 1];
                arry[j + 1] = tmp;
                flag = 1;
            }
        }
        if (flag == 0)break;
    }
    for (int i = 0; i < 13; ++i) {
        printf("%d<", arry[i]);
    }
    printf("%d", arry[13]);
}
