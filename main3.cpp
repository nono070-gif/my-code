#include <array>
#include <iostream>
#include <Limits.h>
#include <string.h>
#include <cmath>
#include <ctype.h>
#include <algorithm>
#include <vector>
#include <map>
#include <list>
using namespace std;

int main()
{
    map<string, vector<pair<string, int>>> students;
    map<string, int> subjectTotal;
    vector<string> subjects = {"Math", "Physics", "Chemistry", "Biology",
                               "English", "History", "Computer"};
    map<string, int> TopG;
    map<string, string> TopS;

    string name;
    int grade;
    char choice;
    int studentCounter = 0;

    double MinAvg = 1000;
    string MinSub = "";

    while (true)
    {
        studentCounter++;

        cout << "Enter Name For Student /" << studentCounter << ":";
        cin >> name;
        for (string sub : subjects){ // بتلف على المواد اي حاجه من المتكرر الحزء التاني من الماب
            cout << "Grade Of " << sub << " :";
            cin >> grade;
            students[name].push_back({sub, grade});
            subjectTotal[sub] += grade;
        }
        cout << "Add Another Student y/n ?";
        cin >> choice;
        if (choice != 'y' && choice != 'Y')
            break;

        cout << "=============\n";
    }

    for (auto const &[Name, Data] : students){
        cout << "Student :" << Name << endl;

        for (auto const &item : Data){
            cout << item.first << ":" << item.second << endl;
            if (item.second > TopG[item.first]|| TopS[item.first] == ""){
                TopG[item.first] = item.second;
                TopS[item.first] = Name;
            }
        }
    }

    for (auto const &[subname, total] : subjectTotal){

        double Avg = double(total) / studentCounter;
        cout << "The Avg of " << subname << " = "<<Avg<< endl;
        if (Avg < MinAvg){
            MinAvg = Avg;
            MinSub = subname;
        }
    }
cout << "======================" << endl;
        for (string s : subjects){
            cout << "Top in " << s << " Is " << TopS[s] << " /" << TopG[s]<<endl;
        }

    
        cout << "The HardestSub Is: " << MinSub<<endl;
    

    return 0;
}

