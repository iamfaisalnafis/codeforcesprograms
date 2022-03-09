<<<<<<< HEAD
#include <iostream>
#include <cmath>

int main() {
    const int num_primes = 10005;
    bool primes[num_primes];
    for (int i = 2; i != num_primes; ++i) {
        primes[i] = true;
    }

    for (int i = 2; i != int(sqrt(num_primes)); ++i) {
        if (primes[i]) {        
            for (int j = 2; i * j < num_primes; ++j) {
                primes[i*j] = false;
            }
        }
    }
    int n;
	std::cout << "Input an integer: ";
    std::cin >> n;
	std::cout << "Twin primes are: ";
        for (int i = n; i - 2 >= 0; --i) {
            if (primes[i] && primes[i - 2]) {
                std::cout << i - 2 << " " << i << std::endl;
                break;
            }
    }
    return 0;
=======
#include <iostream>
#include <cmath>

int main() {
    const int num_primes = 10005;
    bool primes[num_primes];
    for (int i = 2; i != num_primes; ++i) {
        primes[i] = true;
    }

    for (int i = 2; i != int(sqrt(num_primes)); ++i) {
        if (primes[i]) {        
            for (int j = 2; i * j < num_primes; ++j) {
                primes[i*j] = false;
            }
        }
    }
    int n;
	std::cout << "Input an integer: ";
    std::cin >> n;
	std::cout << "Twin primes are: ";
        for (int i = n; i - 2 >= 0; --i) {
            if (primes[i] && primes[i - 2]) {
                std::cout << i - 2 << " " << i << std::endl;
                break;
            }
    }
    return 0;
>>>>>>> b9f7f5e043190485111f18651093313dd6b4ade8
}