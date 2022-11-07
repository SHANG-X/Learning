# Learning
Learning C language together
# ==C Language==

## 用到的函数及.h

###  .h

```c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
```

### rand()

### time()

### srand()

### system(“cls”);

## 代码构成

### 随机数的生成

```c
void Rand(){
    srand((unsigned)time(0));
    return rand();
    
}
```



### 生成二维数组

```c
int arry[5][5];
int len=5;
for (int 1=0;i<len;++i){
    for(int j=0;j<len;++j){
        arry[i][j]=rand();
    }
}
for (int i = 0; i < len1; ++i) {
        _Bool flag = 0;
        for (int j = 0; j < len2; ++j) {
            printf("%02d ",arry[i][j]);
            if (j==len2-1){
                flag =1;
            }
            while(flag){
                printf("\n");
                break;
            }
        }
    }
```

### 利用指针交换第一行和第五

```c
void swap(int *p1,int *p5){
    int temp;
    temp = *p1;
    *p1 =  *p2;
    *p1 = temp;
}
for ()

```



### 求出每行元素的最大值，并指出其行号和列号

```c
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
```
