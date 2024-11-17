//Sarah Shao
//11/12/2024
//Lab 11

#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std; //shortcut


int main()
{
    srand(time(0)); //random number generator

    const int ARRAY_SIZE = 50; //array size
    double alpha[ARRAY_SIZE]; //array is 50 boxes
    int i; //counter
    int hundredCounter; //counter for 100

    for (i = 0; i <25; i++) //first 25 boxes
    {
        alpha[i] = pow(i, 2); //square of index
    }

    for (i = 25; i < 50; i++) //last 25 boxes
    {
        alpha[i] = i * 3; //multiply by 3
    }

    for (i = 0; i < 50; i++) //goes through array
      {
        if (i < 10) //first 10 boxes
        {
          cout << alpha[i] << " ";
        }
        else if (i == 10) // at the 11th box
        {
          cout << endl;
          cout << alpha[i] << " ";
        }
        else if (i < 20) //next 10 boxes
          {
            cout << alpha[i] << " ";
          }
        else if (i == 20) //at the 21st box
        {
          cout << endl;
          cout << alpha[i] << " ";
        }
        else if (i < 30) //next 10 boxes
          {
            cout << alpha[i] << " ";
          }
        else if (i == 30) //at the 31st box
        {
          cout << endl;
          cout << alpha[i] << " ";
        }
        else if (i < 40) //next 10 boxes
          {
            cout << alpha[i] << " ";
          }
        else if (i == 40) //at the 41st box
        {
          cout << endl;
          cout << alpha[i] << " ";
        }
        else if (i < 50) //next 10 boxes
          {
            cout << alpha[i] << " ";
          }
      }
  cout << endl; //end line after printing all the boxes of the array

    double beta[100]; //array is 100 boxes
    int a; //counter
    int sum = 0; //sum of all the boxes starts at 0

    for (a = 1; a <100; a++) //goes through array
    {
        beta[a] = rand() % 100 + 1; //puts a random number in each of the boxes
        sum = sum + beta[a]; //adds all the numbers in the array
    }

    for (a = 1; a <100; a++) //goes through array
    {
        if (beta[a] == 100) //if the box is 100
        {
            hundredCounter = hundredCounter + 1; //add 1 to the counter
        }
    }
   cout << "The average of all the numbers in the array is " << sum/100 << endl;
    cout << "Elements equal to 100: "<< hundredCounter << endl;
    //prints out the number of elements equal to 100
}

/* 
0 1 4 9 16 25 36 49 64 81 
100 121 144 169 196 225 256 289 324 361 
400 441 484 529 576 75 78 81 84 87 
90 93 96 99 102 105 108 111 114 117 
120 123 126 129 132 135 138 141 144 147 
The average of all the numbers in the array is 49
Elements equal to 100: 1
*/
