#include <iostream>
#include <chrono>
#include <random>
using namespace std;
using namespace std::chrono;

const int RANGE_FROM  = 0;
const int RANGE_TO    = 10000;
const int QTY = 100000;

void fillArr(int myArray[QTY])
{
  std::random_device                  rand_dev;
  std::mt19937                        generator(rand_dev());
  std::uniform_int_distribution<int>  distr(RANGE_FROM, RANGE_TO);
  for (int i = 0 ; i<QTY;++i){
    myArray[i] = distr(generator);
  }
}

bool isPrime(int num)
{
  for (int i=2; i<=num/2 ; i++) 
     if (num%i==0)
        return false; //divider mod input number = 0 not prime

  return true;
}

int findPrimes(int myArray[QTY]){
  int sum = 0;
  for (int i = 0 ; i<QTY;++i){
    if(isPrime(myArray[i]))
      sum++;
  }
  return sum;
}

void printArray(int myArray[QTY]){
  for (int i = 0 ; i<QTY;++i){
    cout << myArray[i];      
  }
}
// return 1 for prime numbers and 0 for not prime
int main()
{
  int myArray[QTY];
  fillArr(myArray);
  auto startTime = high_resolution_clock::now();
  cout<<findPrimes(myArray)<<endl;
  auto stopTime = high_resolution_clock::now();
  auto duration = duration_cast<microseconds>(stopTime - startTime);
  cout<<"Duration (microseconds): "<<duration.count();
  //printArray(myArray);
}