#include <iostream>
#include <vector>
void convert_matlab_to_cpp()
{
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;
    switch (n) {
    case -1:
        std::cout << "negative one" << std::endl;
        break;
    case 0:
        std::cout << "zero" << std::endl;
        break;
    case 1:
        std::cout << "positive one" << std::endl;
        break;
    default:
        std::cout << "other value" << std::endl;
        break;
    }
}

void print_vector(std::vector<int> v)
{
    for (const auto num : v)
    {
        std::cout << num << "  ";
    }
    std::cout << std::endl;
}

std::vector<int> Fib_4000000()
{
    std::vector<int> fib = { 1, 2 };
    bool exceed = false;
    while (!exceed)
    {
        fib.push_back(fib[fib.size() - 1] + fib[fib.size() - 2]);
        if (fib[fib.size() - 1] >= 4000000)
        {
            fib.pop_back();
            exceed = true;
        }
    }
    return fib;
}

bool isprime(int n) {

    for (int i = 2; i < std::pow(n, 0.5); i++)
    {
        if (n % i == 0) { return false; }
    }
    return true;
}

void test_isprime() {
    std::cout << "isprime(2) = " << isprime(2) << '\n';
    std::cout << "isprime(10) = " << isprime(10) << '\n';
    std::cout << "isprime(17) = " << isprime(17) << '\n';
}

std::vector<int> factorize(int n)
{
    std::vector<int> answer;
    for (int factor = 1; factor <= n; factor++)
    {
        if(n % factor == 0) 
        {
            answer.push_back(factor);
        }
    }
    return answer;
}
void test_factorize() {
    std::cout << "factorize(2): ";
    print_vector(factorize(2));
    std::cout << "factorize(72): ";
    print_vector(factorize(72));
    std::cout << "factorize(196): ";
    print_vector(factorize(196));
}
std::vector<int> prime_factorize(int n) 
{
    std::vector<int> answer;
    for (int factor = 2; factor <= n; factor++) 
    {
        while (n % factor == 0) 
        {
            answer.push_back(factor);
            n /= factor;
        }
    }
    return answer;
}

void test_prime_factorize() {
    std::cout << "prime_factorize(2): ";
    print_vector(prime_factorize(2));
    std::cout << "prime_factorize(72): ";
    print_vector(prime_factorize(72));
    std::cout << "prime_factorize(196): ";
    print_vector(prime_factorize(196));
}

void printPascalsTriangle()
{
    int n = 0;
    while (n < 3)
    {
        std::cout << "Enter a number larger than 3: ";
        std::cin >> n;
    }
    std::vector<std::vector<int>> triangle;
    triangle.push_back({ 1 });
    triangle.push_back({ 1, 1 });
    for (int row = 2; row < n; row++)
    {
        std::vector<int> row_new = { 1 };
        for (int col = 1; col < triangle[row - 1].size(); col++)
        {
            row_new.push_back(triangle[row - 1][col - 1] + triangle[row - 1][col]);
        }
        row_new.push_back(1);
        triangle.push_back(row_new);
    }

    for (const auto& row : triangle)
    {
        print_vector(row);
    }


}
int main()
{
	//problem 1
    std::cout << "Please test the function for problem1:" << std::endl;
    convert_matlab_to_cpp();


    //problem 2
    std::cout << "Please test the function for problem2:" << std::endl;
    std::vector<int> v = { 12, 23, 35, 48, 11, 9, 3, 8 };
    print_vector(v);

    //problem 3
    std::cout << "Please test the function for problem3:" << std::endl;
    print_vector(Fib_4000000());

    //problem 4a
    std::cout << "Please test the function for problem4a:" << std::endl;
    test_isprime();

    //problem 4b
    std::cout << "Please test the function for problem4b:" << std::endl;
    test_factorize();

    //problem 4c
    std::cout << "Please test the function for problem4c:" << std::endl;
    test_prime_factorize();

    //problem 5
    std::cout << "Please test the function for problem5:" << std::endl;
    printPascalsTriangle();

    //keep the console
    system("pause");

	return 0;
}