#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>

/*бесконечный цикл с вводом данных и проверкой*/
int main()
{
    bool flag = true;
    while(flag)
    {
        double a, b, c, d;
        float x0, x1, x2;
        char str[3];
        
        scanf("%lf", &a);
        scanf("%lf", &b);
        scanf("%lf", &c);
        
        d = pow(b,2) - 4*a*c;
        
        if(d > 0) {
            x1 = (-b + sqrt(d))/(2 * a);
            x2 = (-b - sqrt(d))/(2 * a);
            printf("d = %lf, x1 = %lf, x2 = %lf\n", d, x1, x2);
            printf("Вычисление закончено, хотите продолжить? (Yes/No)\n");
            scanf("%s", str);
            if(strcmp(str, "No") == 0)
                flag = false;
            else if(strcmp(str, "Yes") == 0)
                continue;
        }
        
        else if(d = 0) {
            x0 = -b/(2 * a);
            printf("d = %lf, x0 = %lf\n", d, x0);
            printf("Вычисление закончено, хотите продолжить? (Yes/No)\n");
            scanf("%s", str);
           if(strcmp(str, "No") == 0)
                 flag = false;
            else if(strcmp(str, "Yes") == 0)
                continue;
        }
        
        else if(d < 0) {
            printf("Нет корней!\n");
            printf("Вычисление закончено, хотите продолжить? (Yes/No)\n");
            scanf("%s", str);
            if(strcmp(str, "No") == 0)
                flag = false;
            else if(strcmp(str, "Yes") == 0)
                continue;
        }
    }
    return 0;
}
