#include <iostream>
#include <string>

using namespace std;

int main() {
	string first, second;
    cin >> first >> second;

    cout << first.length() << " " << second.length() << endl;
    cout << first + second << endl;
    
    string first_prime = first, second_prime = second;
    first_prime[0] = second[0];
    second_prime[0] = first[0];

    cout << first_prime << " " << second_prime;
  
    return 0;
}