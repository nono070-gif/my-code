#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>
#include <list>
using namespace std;
int main()
{

    map<string, list<int>> pokedex;

    ifstream file("data.csv");
    string line;
    
            int MaxSubject=0;
             int Top=0;
            string TopStudent="";
    if (file.is_open())
    {

        getline(file, line);

        while (getline(file, line))
        {
            
            if (line.empty())
            continue;

            stringstream ss(line);
            string name, subject, tempscore;
            
            getline(ss, name, ',');
            getline(ss, subject, ',');
            getline(ss, tempscore);
            
            double score = stod(tempscore);
            if (score > MaxSubject){
            MaxSubject =score;
            TopStudent ="Top Stubent :"+name+"\n";
        }else if(score ==MaxSubject){
            TopStudent+="Top Stubent :"+name +"\n";
        }
        pokedex[subject].push_back(score);
        
    }
    
    file.close();
}



int Lowest=10000000;
string HardestSub="";
for (auto const &[subjectName, scoreList] : pokedex)
{
    int subjectSum = 0;
    double theAvg=0;
    for (int i : scoreList)
    {
        subjectSum += i;
    }
    // cout << subjectSum<<endl;
    theAvg=subjectSum/double(scoreList.size());
    cout <<"Average/"<<subjectName<<"="<<theAvg<<endl;
    if (theAvg<Lowest){
        Lowest=theAvg;
        HardestSub =subjectName;
        
        
        
        
    } 
    
    
}
cout << "Most HardSubject-->"<<HardestSub<<endl;
cout<<TopStudent<<endl;





return 0;
}

