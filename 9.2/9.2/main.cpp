#include "macros.h"

int main() {
    double x, y, w;
    double z = Z; // Присвоюємо значення константи Z для обчислень

    PRINT_MSG("=== Variant 28 ===");
    std::cout << "Preprocessor constant Z = " << Z << std::endl;

    INPUT("x", x);

    // Умовна компіляція: препроцесор обирає гілку залежно від значення Z
#if IS_GREATER(Z, 10)
    PRINT_MSG("Compiled branch: z > 10 -> w = max(x^3, (x + y)^2)");
    INPUT("y", y);

    double term1 = CUBE(x);
    double term2 = SQR(x + y);
    w = MAX(term1, term2);
#else
    PRINT_MSG("Compiled branch: z <= 10 -> w = min(|x - z|, |x + z|)");
    // Для цієї гілки змінна y не використовується

    double term1 = ABS(x - z);
    double term2 = ABS(x + z);
    w = MIN(term1, term2);
#endif

    PRINT_RES(w);

    return 0;
}