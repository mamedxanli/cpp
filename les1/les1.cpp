#include <iostream>
using namespace std;

int main(){
    //std::vector <int> v = create_vector();
    int i;
    int x;
    int a;
    int b;
    int fib;
    std::cout << "What is your fibonacci length?" << std::endl;
    std::cin >> x;
    std::cout << "enter a: " << std::endl;
    std::cin >> a;
    std::cout << "enter b: " << std::endl;
    std::cin >> b;
    fib = a + b;
    std::cout << std::endl;
    std::cout << fib << std::endl;
    for (i = 0; i < x-2; i++) {
        a = b;
        b = fib;
        fib = a + b;
        std::cout << fib << std::endl;
    }
    return 0;
    }