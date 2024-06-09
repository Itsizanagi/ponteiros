#include <stdio.h>
#include <stdbool.h>

/*
int main(void) {

    int a[] = {2017, 2018, 2019};

    for (int i=0; i<3; i++)
       printf("%d\n", *a + i);

    printf("o endereco de 'a' em memoria: %p\n", (void*)&a);

    return 0;
}*/

/*
int main(void) {
    int i = 17;
    int *p;

    p = &i;

    printf("O endereco de i: %p\n", (void*)&i);
    printf("O endereco de i: %d\n", *p);

// Acessa um endereço de memória específico
    int *address = (int *)0x0061FF14;
    printf("O valor no endereco: %d\n", *address);

    return 0;
}
*/

void imprime(char *s){
    while (*s != '\0'){
        putchar(*s++);
    }
    
}


int main(void) {

    char s[] = "gustavo";
    char *t = "gustavo";
    char *f = "Uma frase";
// puts(s);
// puts(t);
t++;
t++;
t++;
t++;
t++;
//putchar(*t);
//putchar('\n');

    imprime(f);




    int a[2];
    a[0] = 2017;
    a[1] = 2018;
//    printf("a[0] = %d\na[1] = %d\n", *a, *a+1);

    return 0;
}
