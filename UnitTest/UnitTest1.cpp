#include "pch.h"
#include "CppUnitTest.h"
#include "../Buble_Sort/bublesort.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;
namespace UnitTest1 
{
TEST_CLASS(UnitTest1) {
  public:
    TEST_METHOD(InputTest1) 
     {
       int arr[] = {3, 5, 6, 8, 0};
       input(arr, 5);
       int n = arr[0];  
       Assert::IsTrue(3 == n); 
     }
  };
TEST_CLASS(UnitTest2) {
  public:
    TEST_METHOD(InputTest2) 
     {
       int k;
       int arr[] = {3, 5, 1, 8, 0, 11, 21};
       int size - sizeof(arr);
       input(arr, 8);
       Assert::IsTrue(8 == size); 
     }
  };
TEST_CLASS(UnitTest3) {
  public:
    TEST_METHOD(SortTest1) 
     {
       int k;
       int arr[] = {3, 5, 1, 8, 0, 11, 21};
       int sort_arr[] = {0, 1, 3, 5, 8, 11, 21};
       const unsigned int size = 8; 
       input(arr, size);
       for(int i = 0; i < size; i++) {
         
       
       Assert::IsTrue(sort_arr[i] <= sort_arr[i+1]); 
       }
     }
  };
TEST_CLASS(UnitTest4) {
  public:
    TEST_METHOD(SortTest2) 
     {
       Buble_Sort A;
       const unsigned int size = 4;
       int arr[size] = {3, 5, 1, 8};
       int sort_arr[size] = {1, 3, 5, 8};
        A.bublesort(arr, size)
       for(int i = 0; i < size; i++) {
         
       
       Assert::AreEqual(sort_arr[i], arr[i]); 
       }
     }
  };

}