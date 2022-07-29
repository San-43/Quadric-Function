#include <istream>
#include <cmath>
#include "/libcs50-11.0.1/src/cs50.h"

using namespace std;

int main() {

    double a = get_double("Enter coefficient a: ");
    double b = get_double("Enter coefficient b: ");
    double c = get_double("Enter coefficient c: ");

    double d;

    d = pow(b, 2) - 4 * a * c;

    if (d > 0) {
        double x1 = (-b + sqrt(d)) / (2 * a);
        double x2 = (-b - sqrt(d)) / (2 * a);

        printf("Two solutions: %d and %d ", x1, x2);
    } else if (d < 0) {
        d = d * -1;
        d = sqrt(d) / (2 * a);
        printf("Two complex solutions: %d + %d%s and %d - %d%s", -b/(2 * a), d, "i", -b/(2 * a), d, "i");
    } else {
        printf("One solution: %d", -b / (2 * a));
    }
}
