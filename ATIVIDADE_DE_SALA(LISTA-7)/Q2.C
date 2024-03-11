#include <stdio.h>

int main()
{
    int i = 50;
    float r = 4.65;
    char c = 'P';
    
    int *i2 = &i;
    float *r2 = &r;
    char *c2 = &c;
    
    printf("Este é o valor de inteiro:%d \n ", i);
    printf("Este é o valor de real:%f \n ", r);  
    printf("Este é o valor de char:%c \n ", c);    

    *i2 = 40;    
    *r2 = 3.87;
    *c2 = 'M';

    printf("Este é o novo valor de inteiro:%d \n ", *i2);
    printf("Este é o novo valor de real:%f \n ", *r2);
    printf("Este é o novo valor de char:%c \n ", *c2);
    
    return 0;
}
