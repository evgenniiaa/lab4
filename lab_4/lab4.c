#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

void zadanie1() {
    char c = '!';
    int i = 2;
    float f = 3.14f;
    double d = 5e-12;
    printf("1) Исходные: %c %d %f %le\n", c, i, f, d);
    printf("2) Введите символ, целое, float, double: ");
    scanf(" %c %d %f %lf", &c, &i, &f, &d);
    printf("Результат: %c %d %f %le\n", c, i, f, d);

    double num;
    printf("3) Введите вещественное число: ");
    scanf("%lf", &num);
    printf("Целая: %d, дробная: %lf\n", (int)num, num - (int)num);

    char ch;
    printf("4) Введите символ: ");
    scanf(" %c", &ch);
    printf("Десятичный код: %d, шестнадцатеричный код: %x\n", ch, ch);

    int k;
    printf("5) Введите целое число для 1/k: ");
    scanf("%d", &k);
    printf("Результат: %lf\n", 1.0 / k);
}

void zadanie2() {
    int a = 11, b = 3;
    int x;
    float y;
    double z;
    x = a / b;
    y = a / b;
    z = a / b;
    printf("6.1)Неявное: %d %f %lf\n", x, y, z);
    printf("6.2)Явное: %f %lf\n", (float)a / b, (double)a / b);
}

void zadanie3() {
    int n;
    printf("7.)Введите трехзначное число: ");
    scanf("%d", &n);
    int last = n % 10;
    int first = n / 100;
    int sum = first + ((n / 10) % 10) + last;
    int rev = last * 100 + ((n / 10) % 10) * 10 + first;
    printf("Последняя: %d, первая: %d, сумма: %d, наоборот: %d\n", last, first, sum, rev);
}

int main() {
    setlocale(LC_ALL, "RUS");

    zadanie1();
    zadanie2();
    zadanie3();
    return 0;
}