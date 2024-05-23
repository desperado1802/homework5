#include <iostream>
#include <cmath>

double circleArea(double radius) {
    return M_PI * radius * radius;
}


unsigned long long factorial(int n) {
    unsigned long long result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}


bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    if (n <= 3) {
        return true;
    }
    if (n % 2 == 0 || n % 3 == 0) {
        return false; 
    }
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}


unsigned long long fibonacci(int n) {
    if (n <= 1) return n;
    unsigned long long a = 0, b = 1, c;
    for (int i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}


bool isPalindrome(int n) {
    if (n < 0) return false;
    int reversed = 0, original = n, remainder;
    while (n != 0) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }
    return original == reversed;
}

int main() {
    double radius = 15.5;
    double area = circleArea(radius);
    std::cout << "The area of the circle is: " << area << std::endl;

    int number = 10;
    unsigned long long fact = factorial(number);
    std::cout << "The factorial of " << number << " is: " << fact << std::endl;

    int primeCheck = 29;
    bool prime = isPrime(primeCheck);
    std::cout << "Is " << primeCheck << " a prime number? " << (prime ? "Yes" : "No") << std::endl;

    int fiboIndex = 20;
    unsigned long long fiboNumber = fibonacci(fiboIndex);
    std::cout << "The " << fiboIndex << "th Fibonacci number is: " << fiboNumber << std::endl;

    int palindromeCheck = 12321;
    bool palindrome = isPalindrome(palindromeCheck);
    std::cout << "Is " << palindromeCheck << " a palindrome? " << (palindrome ? "Yes" : "No") << std::endl;

    return 0;
}
