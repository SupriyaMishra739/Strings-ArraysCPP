#include <iostream>
using namespace std;

void *myMemcpy(void *dest, const void *src, int n)
{
    // Convert to char pointers for byte-by-byte copying
    char *d = (char *)dest;
    const char *s = (const char *)src;

    for (int i = 0; i < n; ++i)
    {
        d[i] = s[i];
    }

    return dest;
}

int main()
{
    char source[] = "Hello, world!"; // This creates a character array (C-style string):
    // Each letter is stored as a character in an array.
    // Includes the null terminator \0 at the end.
    char destination[20];

    myMemcpy(destination, source, sizeof(source));

    cout << "Copied string: " << destination << endl;

    return 0;
}
