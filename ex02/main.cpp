#include <iostream>
#include "Array.hpp"

#define MAX_VAL 750

int main(int, char**)
{
    std::cout << std::endl << "\033[1m\033[31m" << "TESTS for INT" << "\033[0m" << std::endl << std::endl; 

    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
        for (int i = 0; i < MAX_VAL; i++)
        {
            if (test[i] != numbers[i])
            {
                std::cerr << "didn't save the same value!!" << std::endl;
                return 1;
            }
        }
    }
    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;

    std::cout << std::endl << "\033[1m\033[31m" << "TESTS for STD::STRING" << "\033[0m" << std::endl << std::endl;


    Array<std::string> letters(5);
    std::string* mirrorl = new std::string[5];
    for (int i = 0; i < 5; i++)
    {
        letters[i] = "hi";
        mirrorl[i] = "hi";
    }
    //SCOPE
    {
        Array<std::string> tmpl = letters;
        Array<std::string> testl(tmpl);
        
        for (int i = 0; i < 5; i++)
        {
            if (testl[i] != letters[i])
            {
                std::cerr << "didn't save the same value!!" << std::endl;
                return 1;
            }
        }
    }
    for (int i = 0; i < 5; i++)
    {
        if (mirrorl[i] != letters[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        letters[-2] = "ho";
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        letters[5] = "ho";
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int j = 0; j < 5; j++)
    {
        letters[j] = "bye";
    }
    delete [] mirrorl;
    return 0;
}