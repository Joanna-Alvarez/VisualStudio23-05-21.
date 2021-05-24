#include <stdio.h>


int main ()
{
    char letra;
    printf ("\n Introduce una letra:");
     scanf ("%c",&letra);

     if( 
         (letra == 'a' || letra == 'A') ||
         (letra == 'e' || letra == 'E') ||
         (letra == 'i' || letra == 'I') ||
         (letra == 'o' || letra == 'O') ||
         (letra == 'u' || letra == 'U')
     )
    {
        printf ("\n Es una VOCAL");
    }
    else
    {
        printf ("\n No es VOCAL");
    }




      return 0;
}