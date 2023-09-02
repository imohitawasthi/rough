
// https://projecteuler.net/problem=10

#include <iostream>

using namespace std;

bool isPrime(int n)
{
  if (n <= 1)
    return false;

  for (int i = 2; i <= n / 2; i++)
    if (n % i == 0)
      return false;

  cout << "found prime " << n << "\n";

  return true;
}

long sumPrimes(long limit)
{

  long sum = 0;

  for (long i = 0; i < limit; i++)
  {

    if (isPrime(i))
    {
      sum += i;
    }
  }

  return sum;
}

int main()
{

  cout << sumPrimes(2000000);

  return 0;
}
