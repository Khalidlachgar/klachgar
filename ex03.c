#include  <stdio.h>

 int main ()
{
       float ms,kmh;
       printf ("la vitesse en km/h ");
       scanf ("%2.f", &kmh);
       ms = kmh * 0.27778;
       printf ("la transforme en ms est :%f\n",ms );
    return 0;
}
