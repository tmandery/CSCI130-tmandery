/*
Tristan Mandery
Date: 4/17/2024
Hw-6 
Program info: The Apaaaaxian language translator 
*/

/* Program Steps
1. Program asks for input to be stored in a string
2. Using assert tests the input for the string to verify if its part of the apaxian language
3. Outputs a compressed string with out the extra letters 
*/

#include <iostream>
#include <cassert>
#include <cstdio>
using namespace std;

string compressString(const string& input)
{
     string compressed;
    char previous ='\0';
    for (char c : input)
    {
        if (c != previous)
        {
            compressed.push_back(c);
            previous=c;
        }
    }
    return compressed;
}

void testcompressString()
{
assert(compressString("cat")=="cat");

assert(compressString("aaabbbcccaaa")== "abca");

assert(compressString("caaaaat")=="cat");
}

int main(int argc, char *argv[])
{
    if(argc >1 && std::string(argv[1])=="test")
    {
        testcompressString();

        cout<< "All tests passed" << endl;
        return 0;
    }
string input;
cin >> input;
cout << compressString(input) << endl;
return 0;
} 

