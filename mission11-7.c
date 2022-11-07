#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//#include <windows.h>
void swap(int *p1,int *p2);
void ARRY();
void print_matrix();
void Max(int x);

int len1=5,len2=5;
int arry[5][5];



int main(){

    system("cls");

    srand(time(0));
//    显示数组各元素，要求按矩阵形式排列整齐
    ARRY();
    puts("显示数组各元素，要求按矩阵形式排列整齐");
    print_matrix();
    printf("\n");

//    Sleep(4000);
//    将第 1 与第 5 行对调后，再显示之；
    for (int i = 0; i < len1; ++i) {//2
        swap(&arry[0][i],&arry[4][i]);
    }
    puts("将第 1 与第 5 行对调后，再显示之；");
    print_matrix();
    puts("\n");
//    求出每行元素的最大值，并指出其行号和列号。
    puts("求出每行元素的最大值，并指出其行号和列号。");
    for (int i = 0; i < len1; ++i) {
        Max(i);
    }

    system("pause");

    return 0;
}
//利用指针交换两个变量的数值
void swap(int *p1,int *p2){
    int temp;
    temp = *p2;
    *p2 =  *p1;
    *p1 = temp;
}
//生成随机二维数组
void ARRY(){
    for (int i = 0; i < len1; ++i) {
        for (int j = 0; j < len2; ++j) {
            arry[i][j]=rand()%1000;
        }
    }
}
//用于打印矩阵
void print_matrix(){
    for (int i = 0; i < len1; ++i) {
        _Bool flag = 0;
        for (int j = 0; j < len2; ++j) {
            printf("%03d ", arry[i][j]);
            if (j == len2 - 1) {
                flag = 1;
            }
            while (flag) {
                printf("\n");
                break;
            }
        }
    }
}
//求出每行元素的最大值，并指出其行号和列号。
void Max(int x) {

    int *p3=&arry[x][0];int max=arry[x][0];
    int y;
//    printf("%d",max);
    for (int i = 0; i < len1; ++i) {
        if(max < *(p3+i)){
            max = *(p3+i);
        }

//      *p3 >= *(p3+1) ? (tem = *p3) :tem = *(p3+1);
    }
    for (int j = 0; j < len1; ++j) {
        if(max == arry[x][j]){
            y=j+1;
        }
    }
    printf("第%d行的最大值是%d,在该行的第%d\n",x+1,max,y);
}
