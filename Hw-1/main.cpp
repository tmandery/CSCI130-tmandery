/*
Name: Tristan Mandery

Hangman Game
*/

#include <iostream>

using namespace std;

int main()
{
    string name;
    cout << " What is your name? " << endl;
    


    string label; 
    string stage0;
    label = "Stage 0";
    stage0 = "  |-----------------\n  |//       |\n  |\n  |\n  |\n  |\n  |\n=========== \n     "; 
    cout << label << endl;
    cout << stage0 << endl; 

 string label1; 
    string stage1;
    label1 = "Stage 1";
    stage1 = "  |-----------------\n  |//       |\n  |        ( )\n  |\n  |\n  |\n  |\n=========== \n     "; 
    cout << label1 << endl;
    cout << stage1 << endl; 

     string label2; 
    string stage2;
    label2 = "Stage 2";
    stage2 = "  |-----------------\n  |//       |\n  |        ( )\n  |         |\n  |\n  |\n  |\n=========== \n     "; 
    cout << label2 << endl;
    cout << stage2 << endl; 

     string label3; 
    string stage3;
    label3 = "Stage 3";
    stage3 = "  |-----------------\n  |//       |\n  |        ( )\n  |        /|\n  |\n  |\n  |\n=========== \n     ";
    cout << label3 << endl;
    cout << stage3 << endl; 

 string label4; 
    string stage4;
    label4 = "Stage 4";
    stage4 = "  |-----------------\n  |//       |\n  |        ( )\n  |        /|\\\n  |\n  |\n  |\n=========== \n     ";
    cout << label4 << endl;
    cout << stage4 << endl; 

 string label5; 
    string stage5;
    label5 = "Stage 5";
    stage5 = "  |-----------------\n  |//       |\n  |        ( )\n  |        /|\\\n  |        /\n  |\n  |\n=========== \n     ";
    cout << label5 << endl;
    cout << stage5 << endl; 

 string label6; 
    string stage6;
    label6 = "Stage 6";
    stage6 = "  |-----------------\n  |//       |\n  |        ( )\n  |        /|\\\n  |        / \\\n  |\n  |\n=========== \n     ";
    cout << label6 << endl;
    cout << stage6 << endl; 

 string label7; 
    string stage7;
    label7 = "Stage 7";
    stage7 = "  |-----------------\n  |//       |\n  |        (=)\n  |        /|\\\n  |        / \\\n  |\n  |\n=========== \n     "; 
    cout << label7 << endl;
    cout << stage7 << endl; 

 

    return 0;
}