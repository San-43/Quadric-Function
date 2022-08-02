#include <cmath>
#include <cstdio>
#include <locale>
#include <cstdlib>

void solution (double a, double b, double c);

int main() {

    double a;
    double b;
    double c;

    setlocale(LC_CTYPE, "spanish");
    system("cls");
    system("color 02");

    printf("*** ECUACIONES DE SEGUNDO GRADO ***\n");
    printf("*** POR MEDIO DE LA FÓRMULA GENERAL ***\n");

    printf("Ingrese el coeficiente a: ");
    if (scanf("%lf", &a) != 1) {
        if (a == 0) {
            printf("División por cero");
            return 0;
        }
        printf("Por favor introduzca un valor correcto. \n");
        return 0;
    }

    printf("\nIngrese el coeficiente b: ");
    if (scanf("%lf", &b) != 1) {
        printf("Por favor introduzca un valor correcto. \n");
        return 0;
    }

    printf("\n Ingrese el coeficiente c: ");
    if (scanf("%lf", &c) != 1) {
        printf("Por favor introduzca un valor correcto. \n");
        return 0;
    }

    solution(a, b ,c);
}

void solution (double a, double b, double c) {
    double d;

    d = pow(b, 2) - (4 * a * c);
    printf("\nDiscriminante = %.1f\n\n", d);

    if (d > 0) {
        double x1 = (-b + sqrt(d)) / (2 * a);
        double x2 = (-b - sqrt(d)) / (2 * a);

        printf("***** Dos soluciones: %.2f and %.2f *****\n", x1, x2);
    } else if (d < 0) {
        d = d * -1;
        d = sqrt(d) / (2 * a);
        printf("***** Dos soluciones complejas: %.2f + %.2f%s and %.2f - %.2f%s *****\n", -b / (2 * a), d, "i", -b / (2 * a), d, "i");
    } else {
        printf("***** Una solución: %.2f *****\n", -b / (2 * a));
    }
}

