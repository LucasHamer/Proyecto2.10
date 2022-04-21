#include<stdio.h>
#include<stdlib.h>

int main()
{
    float radio,super,per,vol;

    printf("Ingrese el valor del radio de un circulo: ");
    scanf("%f",&radio);

    super=3.14159265359*radio*radio;
    per=2*3.14159265359*radio;
    vol=1.33333333333*3.14159265359*radio*radio*radio;

    printf("La superficie del circulo es de: %0.3f\n",super);
    printf("El perimetro del circulo es de: %0.3f\n", per);
    printf("El volumen de la esfera es de: %0.3f\n", vol);

    return 0;
}
