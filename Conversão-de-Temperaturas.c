#include <stdio.h>
#include <stdlib.h>
#include<locale.h>

//TiagoAFDS

float n;//variavel global
float f_c (float n)
{
    float Celsius = 0;
    Celsius = (32 - n) / 1.8;
    printf (" %.2fº Farenheit = %.2fº Celsius\n", n, Celsius);
}

float c_f (float n)
{
    float Farenheit = 0;
    Farenheit = (1.8 * n) + 32;
    printf (" %.2fº Celsius = %.2fº Farenheit\n", n, Farenheit);
}

int
main ()
{
    setlocale (LC_ALL, "Portuguese_Brazil.1252");
    int op = 0;
    printf ("Digite a Temperatura:\n");
    scanf ("%f", &n);


    while (op != 3)
    {
        printf ("Escolha uma opção:\n");
        printf ("1 - %.2fº Celsius para Farenheit:\n",n);
        printf ("2 - %.2fº Farenheit para Celsius:\n",n);
        printf ("3 - Sair\n");
        scanf ("%d", &op);
        switch (op)
        {
        case 1:

            c_f (n);


            break;

        case 2:

            f_c (n);

            break;

        case 3:

            return 0;

            break;

        default:
            printf ("Digite uma opção válida!\n");

        }
        printf ("\n\n");
    }
    return 0;
}
