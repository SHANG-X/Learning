//输出n*n的乘法表

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//声明一个打印n*n矩阵的函数Matrix()
void Matrix(int n);

int main() {
    srand(time(0));
    int n = rand() % 14 + 7;
    Matrix(n);
    return 0;
}

void Matrix(int n) {
    int arry[n][n];

    for (int i = 0; i < n; ++i) {
        arry[0][i] = i + 1;
        arry[i][0] = i + 1;
    }
    for (int j = 1; j < n; ++j) {
        for (int i = 1; i < n; ++i) {
            arry[i][j] = (j + 1) * (i + 1);
        }
    }

    printf("-------以矩阵形式输出%d*%d乘法表-------\n", n, n);
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            printf("%3d ", arry[i][j]);
        }
        printf("\n");
    }
}
