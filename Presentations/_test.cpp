#include "anagramCheck.cpp"
#include "binarySearch.cpp"
#include "isPrime.cpp"
#include "palindromeNumber.cpp"
#include "rotate2DArray.cpp"
#include "selectionSort.cpp"
#include "shuffleAndCut.cpp"

#include <cassert>

namespace Presentations
{
    void anagramCheckTest()
    {
        // anagramCheck
        assert(anagramCheck("listen", "silent") == true);
        assert(anagramCheck("triangle", "integral") == true);
        assert(anagramCheck("hello", "world") == false);
        assert(anagramCheck("hello", "world!") == false);
        assert(anagramCheck("TRIanGLE", "INTegral") == true);
    }
    
    void binarySearchTest()
    {
        // binarySearch
        int arr[] = {-10, -9, -8, -7, -6, -5, -4, -3, -2, -1, 0, 1, 2, 3, 4, 5};
        assert(binarySearch(arr, 16, 0) == 10);
        assert(binarySearch(arr, 16, -10) == 0);
        assert(binarySearch(arr, 16, 5) == 15);
        assert(binarySearch(arr, 16, -5) == 5);
        assert(binarySearch(arr, 16, 6) == -1);
        assert(binarySearch(arr, 16, -11) == -1);
    }
    
    void isPrimeTest()
    {
        // isPrime
        assert(isPrime(2) == true);
        assert(isPrime(3) == true);
        assert(isPrime(5) == true);
        assert(isPrime(7) == true);
        assert(isPrime(11) == true);
        assert(isPrime(13) == true);
        assert(isPrime(15) == false);
        assert(isPrime(16) == false);
        assert(isPrime(30) == false);
    }
    
    void palindromeNumberTest()
    {
        // palindromeNumber
        assert(palindromeNumber(121) == true);
        assert(palindromeNumber(1221) == true);
        assert(palindromeNumber(12321) == true);
        assert(palindromeNumber(-12321) == false);
        assert(palindromeNumber(9) == true);
        assert(palindromeNumber(123) == false);
        assert(palindromeNumber(-123) == false);
        assert(palindromeNumber(0) == true);
    }
    
    void rotate2DArrayTest()
    {
        // rotate2DArray
        int arr2D[5][5] = {{1, 2, 3, 4, 5},
                           {6, 7, 8, 9, 10},
                           {11, 12, 13, 14, 15},
                           {16, 17, 18, 19, 20},
                           {21, 22, 23, 24, 25}};
        rotate2DArray(arr2D);
        int arr2D_rotated[5][5] = {{21, 16, 11, 6, 1},
                                   {22, 17, 12, 7, 2},
                                   {23, 18, 13, 8, 3},
                                   {24, 19, 14, 9, 4},
                                   {25, 20, 15, 10, 5}};
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                assert(arr2D[i][j] == arr2D_rotated[i][j]);
            }
        }
    }
    
    void selectionSortTest()
    {
        // selectionSort
        int arr[] = {5, 3, 8, 4, 2, 7, 1, 6};
        selectionSort(arr, 8);
        int arr_sorted[] = {1, 2, 3, 4, 5, 6, 7, 8};
        for (int i = 0; i < 8; i++)
        {
            assert(arr[i] == arr_sorted[i]);
        }
    }
    
    void shuffleAndCutTest()
    {
        // shuffleAndCut
        int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        shuffleAndCut(arr, 10);
        int count = 0;
        for (int i = 0; i < 10; i++)
        {
            if (arr[i] == i + 1)
            {
                count++;
            }
        }
        assert(count < 10);
    }
}
