#include <iostream>
#include <string>

using namespace std;

string StringToUpper(string strToConvert)
{
    transform(strToConvert.begin(), strToConvert.end(), strToConvert.begin(), ::toupper);
    return (strToConvert);
}

int main(int ac, char **av)
{
    if (ac == 1)
        cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << endl;
    else
    {
        av++;
        while (*av)
        {
            string str(*av);
            cout << StringToUpper(*av);
            av++;
        }
        cout << endl;
    }
    return (0);
}