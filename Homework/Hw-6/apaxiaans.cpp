/*
Tristan Mandery
Date: 4/17/2024
Hw-6
*/
#include <iostream>
#include <cassert>
#include <cstdio>
std::string compressString(const std::string& input)
{
    std:: string compressed;
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

        std::cout<< "All tests passed" << std::endl;
        return 0;
    }
std::string input;
std:: cin >> input;
std::cout << compressString(input) << std::endl;
return 0;
}

