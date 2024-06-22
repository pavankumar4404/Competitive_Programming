#include <bits/stdc++.h>
using namespace std;

vector<int> sieve(int lim) {
    vector<bool> is_prime(lim + 1, true);
    is_prime[0] = is_prime[1] = false;
    
    for (int i = 2; i * i <= lim; ++i) {
        if (is_prime[i]) {
            for (int j = i * i; j <= lim; j += i) {
                is_prime[j] = false;
            }
        }
    }
    
    vector<int> primes;
    for (int i = 2; i <= lim; ++i) {
        if (is_prime[i]) {
            primes.push_back(i);
        }
    }
    return primes;
}

int main(){
    vector<int> primes = sieve(50);
    for(auto i: primes) cout<<i<<' ';
    cout<<endl;
    return 0;
}