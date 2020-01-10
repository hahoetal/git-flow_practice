#include <stdio.h>

int add(int, int);
int sub(int, int);
int multi(int, int);
int div(int, int);

int main(){
    int a, b, c;
    char operator;

    printf("Please enter a expression : ");
    scanf("%d %c %d", &a, &operator, &b);

    switch (operator){
        case '+':
            c = add(a, b);
            break;
        case '-':
            c = sub(a,b);
            break;
        case '*':
            c = multi(a, b);
            break;
        case '/':
            c = div(a, b);
            break;
    }

    printf("Result : %d", &c);

    return 0;
}

int add(a, b){
    return a + b;
}
int sub(a, b){
    return a - b;
}
int multi(a, b){
    return a * b;
}
int div(a, b){
    return a / b;
}