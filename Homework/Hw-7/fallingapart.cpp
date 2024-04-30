/*
Tristan Mandery
Hw-7

*/

#include <iostream>
#include <cassert>
#include <algorithm>

using namespace std;

int aliceTotal ( int *numbers, int numCount)
{
int sum=0;
for (int i=0; i < numCount; i+=2)
{
    sum+= *(numbers + i);
}
return sum;
}
int bobTotal ( int *numbers, int numCount)
{
int sum=0;
for (int i=1; i < numCount; i+=2)
{
    sum+= *(numbers + i);
}
return sum;
}

    void test_sums()
{
int numbers1[] = {1, 2, 3, 4, 5};
assert(aliceTotal( numbers1 ,5)==9);
assert(bobTotal(numbers1,5)==6);

int numbers2[] = {2,4,6,8,10};
assert(aliceTotal(numbers2,5)==18);
assert(bobTotal(numbers2,5)==10);

int numbers3[] = {1,3,5,7,9};
assert(aliceTotal(numbers3,5)== 15);
assert(bobTotal(numbers3,5)== 10);

cout << "All test casers passed" << endl;
}

int main()
{
    int numCount;
    cout<< "How many numbers do you wish to input?";\
    cin>> numCount;
    int *numbers=new int(numCount);

    cout << "Enter"<< numCount << "numbers:" << endl;
    for( int i=0; i < numCount; i++)
    {
        cout<< "Number" << (i+1)<< ":";
        cin>> *(numbers +i);
    }
    sort(numbers, numbers + numCount, greater<int>());

    int aliceTotalValue = aliceTotal(numbers,numCount);
    int bobTotalValue = bobTotal(numbers,numCount);

    cout << "Alices total : " << aliceTotalValue << endl;
    cout << "Bobs total : " << bobTotalValue << endl;

    test_sums();
    delete []numbers;

    return 0;
}