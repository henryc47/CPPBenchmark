#include <stdio.h>
#include <vector>

void checkPrime(int n, std::vector<int>& primes);

int main(int argc, char** argv) 
{
    int n = atoi(argv[1]);
    std::vector<int> primes;
    for(int i=2;i<n;i++)
    {
        checkPrime(i,primes);
    }
    return 0;
}

void checkPrime(int n, std::vector<int>& primes)
{
    bool is_prime = true;
    int max_n = int(sqrt(n))+1;
    for(int i=0;i<primes.size();i++)
    {
        int prime = primes[i];
        if(prime>max_n)
        {
            break;
        }
        if((n%prime)==0)
        {
            is_prime = false;
            break;
        }
    }
    if(is_prime)
    {
        primes.push_back(n);
    }
    return;
}
