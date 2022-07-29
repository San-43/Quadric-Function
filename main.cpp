#include <istream>
#include <cmath>

using namespace std;

int main() {

    double a;
    double b;
    double c;
    double d;

    do {
        printf("Enter coefficient a: ");
        if (scanf("%lf", &a) != 1) {
            printf("Wrong value");
            return 0;
        }

        printf("Enter coefficient b: ");
        if (scanf("%lf", &b) != 1) {
            printf("Wrong value");
            return 0;
        }

        printf("Enter coefficient c: ");
        if (scanf("%lf", &c) != 1) {
            printf("Wrong value");
            return 0;
        } else {
            break;
        }
    } while (true);

    d = pow(b, 2) - (4 * a * c);

    if (d > 0) {
        double x1 = (b * -1 + sqrt(d)) / (2 * a);
        double x2 = (b * -1 - sqrt(d)) / (2 * a);

        printf("Two solutions: %.1f and %.1f", x1, x2);
    } else if (d < 0) {
        d = d * -1;
        d = sqrt(d) / (2 * a);
        printf("Two complex solutions: %.1f + %.1f%s and %.1f - %.1f%s", -b/(2 * a), d, "i", -b/(2 * a), d, "i");
    } else {
        printf("One solution: %.1f", (b * -1)/(2 * a));
    }
}
