#include <stdio.h>

int main() {
   int nota1, nota2, nota3;
   float Media;
   
   printf ("*** Calculadora de Media ***\n");
   
   printf ("Nota de Matematica: \n");
   scanf ("%d", &nota1);
   
   printf ("Nota de Quimica: \n");
   scanf ("%d", &nota2);
   
   printf ("Nota de Fisica: \n");
   scanf ("%d", &nota3);
   
   Media = (float)(nota1 + nota2 + nota3) / 3;
   
   printf ("A Media é: %.2f", Media);
   
    return 0;
}
