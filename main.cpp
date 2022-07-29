#include <istream>
#include <cmath>

using namespace std;

int main() {

    double a;
    double b;
    double c;
    double d;

    printf("Enter coefficient a: ");
    scanf("%lf", &a);
    printf("Enter coefficient b: ");
    scanf("%lf", &b);
    printf("Enter coefficient c: ");
    scanf("%lf", &c);

    d = pow(b, 2) - (4 * a * c);

    if (d > 0) {
        double x1 = (b * -1 + sqrt(d)) / (2 * a);
        double x2 = (b * -1 - sqrt(d)) / (2 * a);

        printf("Two solutions: %f and %f", x1, x2);
    } else if (d < 0) {
        d = d * -1;
        d = sqrt(d) / (2 * a);
        printf("Two complex solutions: %f + %f%s and %f - %f%s", -b/(2 * a), d, "i", -b/(2 * a), d, "i");
    } else {
        printf("One solution: %f", (b * -1)/(2 * a));
    }
}
