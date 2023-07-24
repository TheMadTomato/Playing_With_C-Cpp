#include<iostream>
#include<cstdlib>
#include<ctime>
#include<iomanip>
using namespace std;

void GeneratePasswords(int num)
{
    //array of characters that will be used
    char Alphabets[85] = {'a','b','c','d','e','f','g','h',
                          'i','j','k','l','m','n','o','p','q',
                          'r','s','t','u','v','w','x','y','z',
                          'A','B','C','D','E','F','G','H','I',
                          'J','K','L','M','N','O','P','Q','R',
                          'S','T','U','V','W','X','Y','Z','0',
                          '1','2','3','4','5','6','7','8','9',
                          '`','~','!','@','#','$','%','^','&',
                          '*','(',')','-','_','+','=','|',':',
                          ';',',','/','<','>'};
    //the loop to concatenate radnom charactes from the array
    char randomPass[15];
    for (int y = num; y!= 0; y--)
    {
        for(int i = 0; i < 15; i++)
        {
            int randomLetter = rand() % 85;
            randomPass[i] = Alphabets[randomLetter];
        }
        for(int j = 0; j < 15; j++)
        {
            cout<<randomPass[j];
        }
        cout<<endl;
    }
   
}

int main()
{   
    srand(time(0));
    int numberOfPassToGenerate;
    char choice;
    do{
        system("cls");
        cout << "\033[1;35m***Welcome To PoroPass Generator!***\033[0m"
            <<"\nHow many password you want to generate?\n";
        cin >> numberOfPassToGenerate;
        cout<<endl;
        GeneratePasswords(numberOfPassToGenerate);

        cout<<"\n\n\033[1;35m***Do you want to repeat the program?(y/n)***\033[0m\n";
        cin>>choice;

    }while(choice == 'y' || choice == 'Y');
    system("cls");
    system("pause");
    return 0;
}

