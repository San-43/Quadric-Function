//https://San-43: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@github.com/San-43/Quadric-Function.git

#include <iostream>
#include <D:\Projects\C++\libcs50-11.0.1\src\cs50.h>
#include <cmath>
using namespace std;

int main() {

    double a = get_double("Enter coefficient a: ");
    double b = get_double("Enter coefficient b: ");
    double c = get_double("Enter coefficient c: ");

    double d = 0;

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
