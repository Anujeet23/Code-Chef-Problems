#include<iostream>
using namespace std;

int lenght(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

int main()
{
    char name[20];

    cin >> name;

    cout << "Length is: " << lenght(name);

    return 0;
}