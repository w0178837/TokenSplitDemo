#define _SCL_SECURE_NO_WARNINGS // ignore "false" errors
#include <iostream>
#include <stdio.h>
#include <string.h>

void strtokExample();
void chartoExample(const string &strIn);

using namespace std;

int main() {
    string s = "Hello $";
    cout << "Begin string token demo " << endl;
    strtokExample();
    cout << "Begin char token demo" << endl;
    chartoExample(s);
    return 0;
}

void strtokExample(){
    int numT = 0; // token counter
    char str[] = "hello,world"; // string to be tokenized
    char *pch = NULL;
    printf("Tokenizing string \"%s\" into tokens:\n\n", str);
    pch = strtok(str," ,.-");
    while(pch!=NULL)
    {
        printf("%s\n",pch);
        pch=strtok(NULL," ,.-");
        numT++;
    }
    cout << "\nTotal tokens: \n" << numT << endl;
    cout << "Press any key for next example\n" << endl;
    cin.ignore();
}


void chartoExample(const string &strIn) {
    char dol;
    cout << "Parsing string: ""Hello $"" into tokens: \n" << endl;
    char cArray[20]; // create char array size 20
    strIn.copy(cArray,20); // copy string into char array
    for (char i : cArray) {
        if(i =='$')
            dol = i;
    }
}
// end chartoExample
