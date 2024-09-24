#include  <stdio.h>

 int main ()

{
       float C;
       printf ("veuillez entrer la temperature en Celsius :");
       scanf ("%f",&C);
       if (C < 0)
          printf ("l'etat de l'eau est solide :");
       else if (C >= 0 && C < 100 )
          printf("l'etat de l'eau est Liquide :");
       else
          printf ("l'etat de l'eau est Gaz :");

    return 0;
}
