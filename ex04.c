#include  <stdio.h>

 int main ()
{
       float ms,kmh;
       printf ("veuillez entrer la vitesse en kmh :");
       scanf ("%2.f", &kmh);
       ms = kmh * 0.27778;
       printf ("la transforme en ms est :%f\n",ms );
    return 0;
}
