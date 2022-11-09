#include <math.h>
#include <stdio.h>

//利用递归求n!
int recursion(int n) {
    if (n == 1)return n;
    else {
        return recursion(n - 1) * n;
    }
}

double Taylor() {
    double sum = 1.0, num;
    double accuracy = pow(10, 6);
    for (int i = 1;  recursion(i) < accuracy; ++i) {
        num = 1.0 / recursion(i);
        sum = sum + num;
    }
    return sum;
}

int main() {
    printf("e = %lf ", Taylor());
}
