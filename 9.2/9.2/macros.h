#pragma once
#pragma once
#include <iostream>

// Константа Z для вибору гілки на етапі препроцесування.
// Змініть значення на <= 10 (наприклад, 5), щоб скомпілювати другу гілку.
#define Z 15

// Макроси для математичних операцій
#define MAX(a, b) (((a) > (b)) ? (a) : (b))
#define MIN(a, b) (((a) < (b)) ? (a) : (b))
#define ABS(a)    (((a) < 0) ? -(a) : (a))
#define SQR(a)    ((a) * (a))
#define CUBE(a)   ((a) * (a) * (a))

// Макроси для логічних операцій та введення/виведення
#define IS_GREATER(a, b) ((a) > (b))
#define INPUT(var_name, var)  std::cout << "Enter " << (var_name) << ": "; std::cin >> (var)
#define PRINT_RES(val)        std::cout << "Result w = " << (val) << std::endl
#define PRINT_MSG(msg)        std::cout << (msg) << std::endl