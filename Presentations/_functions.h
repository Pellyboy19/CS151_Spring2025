#ifndef _FUNCTIONS_H
#define _FUNCTIONS_H

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cmath>

namespace Presentations
{
    template <typename T>
    void Print(const T arr[], int size)
    {
        std::cout << '[';
        for (int i = 0; i < size; i++)
        {
            std::cout << arr[i];
            if (i < size - 1)
            {
                std::cout << ", ";
            }
        }
        std::cout << ']' << std::endl;
    }

    template <typename T>
    void Swap(T& a, T& b)
    {
        T temp = a;
        a = b;
        b = temp;
    }

    template <typename T>
    T Maximum(T arr[], int size)
    {
        T max = arr[0];
        for (int i = 1; i < size; i++)
        {
            if (arr[i] > max)
            {
                max = arr[i];
            }
        }
        return max;
    }

    template <typename T>
    T Minimum(T arr[], int size)
    {
        T min = arr[0];
        for (int i = 1; i < size; i++)
        {
            if (arr[i] < min)
            {
                min = arr[i];
            }
        }
        return min;
    }

    int Sum(const int arr[], int size)
    {
        int sum = 0;
        for (int i = 0; i < size; i++)
        {
            sum += arr[i];
        }
        return sum;
    }

    double Sum(const double arr[], int size)
    {
        double sum = 0;
        for (int i = 0; i < size; i++)
        {
            sum += arr[i];
        }
        return sum;
    }

    double Average(const int arr[], int size)
    {
        return Sum(arr, size) / size;
    }

    double Average(const double arr[], int size)
    {
        return Sum(arr, size) / size;
    }

    template <typename T>
    int Count(const T arr[], int size, T target)
    {
        int count = 0;
        for (int i = 0; i < size; i++)
        {
            if (arr[i] == target)
            {
                count++;
            }
        }
        return count;
    }

    int AsciiValue(char c)
    {
        return static_cast<int>(c);
    }

    char AsciiValue(int n)
    {
        if (n >= 0 && n <= 127)
        {
            return static_cast<char>(n);
        }
        return '\0';
    }
    int LetterIndex(const char letter)
    {
        if (letter >= 'A' && letter <= 'Z')
        {
            return letter - 'A';
        }
        else if (letter >= 'a' && letter <= 'z')
        {
            return letter - 'a';
        }
        return -1;
    }

    int Middle(int a, int b)
    {
        return a + (b - a) / 2;
    }
    int NumberOfDigits(int num)
    {
        return (!num) ? 1 : static_cast<int>(log10(abs(num))) + 1;
    }

    void FillDeck(int deck[], int size)
    {
        for (int i = 0; i < size; i++)
        {
            deck[i] = rand() % size + 1;
        }
    }

    void FillDeck(char deck[], int size)
    {
        for (int i = 0; i < size; i++)
        {
            std::string alphanum = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
            deck[i] = alphanum[rand() % alphanum.size()];
        }
    }

    std::string BinaryNumber()
    {
        std::string binary = "";
        int length = rand() % 8 + 1;
        for (int i = 0; i < length; i++)
        {
            binary += rand() % 2 + '0';
        }
        return binary;
    }
}

#endif