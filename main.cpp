#include <iostream>
#include <cmath>


int main() {
    const double EPS=0.00001; 
    double a, x, iteration=0;
    std::cout << "input a: ";
    std::cin >> a;
    std::cout << "input x0: ";
    std::cin >> x;
    
    while (fabs(x * x - a) > EPS) {
        iteration++;
        x = 0.5 * (x + a / x);	
        std::cout << "x[" << iteration << "]=" << x;
        std::cout << " x^2=" << x*x;
        std::cout << " (x^2-a)=" << x*x-a << std::endl;
    }


    std::cout << "sqrt(a) = " << x << std::endl;
    return 0;
}
