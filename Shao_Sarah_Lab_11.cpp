//Sarah Shao
//11/12/2024
//Lab 11

#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;


int main()
{
    srand(time(0));
    
    const int ARRAY_SIZE = 50;
    double alpha[ARRAY_SIZE];
    int i;
    int hundredCounter;
    int counter = 0;

    for (i = 0; i <25; i++)
    {
        alpha[i] = pow(i, 2);
    }

    for (i = 25; i < 100; i++)
    {
        alpha[i] = i * 3;
    }

    if (counter < 10)
    {
        cout << "hi";
        cout << alpha[counter];
        counter++;
    }

    double beta[100];
    int a;

    for (a = 1; a <100; a++)
    {
        beta[a] = rand() % 100 + 1;
    }
    cout << endl;

    for (a = 1; a <100; a++)
    {
        if (beta[a] == 100)
        {
            hundredCounter = hundredCounter + 1;
            cout << "Elements equal to 100: \n"<< hundredCounter << endl;
        }
    }
}

/* for (i = 0; i < 10; i++)
    {
        cout << alpha[i] << " " ;
    }
    cout << endl;
    for (i = 9; i < 20; i++)
    {
        cout << alpha[i] << " ";
    }
    cout << endl;
    for (i = 19; i < 30; i++)
    {
        cout << alpha[i] << " ";
    }
    cout << endl;
    for (i = 29; i < 40; i++)
    {
        cout << alpha[i] << " ";
    }
    cout << endl;
    for (i = 39; i < 50; i++)
    {
        cout << alpha[i] << " ";
    }
    cout << endl;
    cout << alpha[50]; */