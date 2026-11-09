#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Input values for a, b, c\n");
    if (scanf("%d %d %d", &a, &b, &c) == 3) {       //ввод
        int max, min;
        int old_a = a, old_b = b, old_c = c;

        if (a > b) {    //поиск max/min
            max = a;
            min = b;
        } else {
            max = b;
            min = a;
        }
        if (c > max) max = c; // поиск max
        if (c < min) min = c; // поиск min

        if (max != min) {   // проверка равных чисел (3 3 3)
            if (old_a == max) { // значение a
                a -= 2;
            } else if (old_a == min) {
             a += 2;
            }
            if (old_b == max) { // значение b
                b -= 2;
            } else if (old_b == min) {
                b += 2;
            }
            if (old_c == max) { // значение c
                c -= 2;
            } else if (old_c == min) {
                c += 2;
            }
    }
        printf("%d %d %d\n", a, b, c);
    }
    else {
        printf("Data wrong!\n");
    }
    return 0;
}

//1) 1 2 3 = 3 2 1  = OK
//2) 1 3 2 = 3 1 2  = OK
//3) 2 1 3 = 2 3 1  = OK
//4) 2 3 1 = 2 1 3  = OK
//5) 3 1 2 = 1 3 2  = Ok
//6) 3 2 1 = 1 2 3  = OK
//7) 1 1 2 = 3 3 0  = OK
//8) 1 2 1 = 3 0 3  = OK
//9) 2 1 1 = 0 3 3 = OK
//10) 3 3 1 = 1 1 3 = OK
//11) 3 1 3 = 1 3 1 = OK
//12) 1 3 3 = 3 1 1 = OK
//13) 1 1 a = Data wrong! = OK
//14) 1 a 1 = Data wrong! = OK
//15) a 1 1 = Data wrong! = OK
//16) 3 3 3 = 3 3 3 = OK
