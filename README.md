- ð Hi, Iâm @AfraidofTime
- ð Iâm interested in ...
- ð± Iâm currently learning C language,and i'm going to known about PYthon.
- ðï¸ Iâm looking to collaborate on ...
- ð« How to reach me ...

<!---
AfraidofTime/AfraidofTime is a â¨ special â¨ repository because its `README.md` (this file) appears on your GitHub profile.
You can click the Preview link to take a look at your changes.
--->

# Learning
Learning C language together
# ==C Language==

## ç¨å°çå½æ°å.h

###  .h

```c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
```

### rand()

### time()

### srand()

### system(âclsâ);

## ä»£ç ææ

### éæºæ°ççæ

```c
int Rand(){
    srand((unsigned)time(0));
    return rand();
    
}
```



### çæäºç»´æ°ç»

```c
void ARRY(){
    for (int i = 0; i < len1; ++i) {
        for (int j = 0; j < len2; ++j) {
            arry[i][j]=rand()%1000;
        }
    }
}
//ç¨äºæå°ç©éµ
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
```

### å©ç¨æéäº¤æ¢ç¬¬ä¸è¡åç¬¬äº

```c
void swap(int *p1,int *p5){
    int temp;
    temp = *p1;
    *p1 =  *p2;
    *p1 = temp;
}


```



### æ±åºæ¯è¡åç´ çæå¤§å¼ï¼å¹¶æåºå¶è¡å·ååå·

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
    printf("ç¬¬%dè¡çæå¤§å¼æ¯%d,å¨è¯¥è¡çç¬¬%d\n",x+1,max,y);
}
```
