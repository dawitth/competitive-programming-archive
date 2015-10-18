#include <iostream>

using namespace std;

inline
void use_io_optimizations()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
}

int main()
{
    use_io_optimizations();

    unsigned int test_cases;
    cin >> test_cases;

    for (unsigned int test {1}; test <= test_cases; ++test)
    {
        unsigned long long radius;
        cin >> radius;

        cout << "Case " << test << ": " << 4 * radius * radius << ".25\n";
    }

    return 0;
}
