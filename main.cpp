#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;
int main()
{

    ifstream myfile("data.csv");
    string line;
    if (myfile.is_open())
    {

        getline(myfile, line); // نسحب اول حمله وترميها

int MMax=0, PhMax=0,ChMax=0, BgMax=0, EgMax=0, HsMax=0, CpMax=0;
string TopInMath,TopInPh,TopInCh,TopInBg, TopInEg,TopInHs,TopInCp;
        double MathTotal = 0;
        int Mathcount = 0;
        double MathAvg = 0;

        double PhysicsTotal = 0;
        int Physicscount = 0;
        double PhysicsAvg = 0;

        double ChemistryTotal = 0;
        int Chemistrycount = 0;
        double ChemistryAvg = 0;

        double BiologyTotal = 0;
        int Biologycount = 0;
        double BiologyAvg = 0;

        double EnglishTotal = 0;
        int Englishcount = 0;
        double EnglishAvg = 0;

        double HistoryTotal = 0;
        int Historycount = 0;
        double HistoryAvg = 0;

        double ComputerTotal = 0;
        int Computercount = 0;
        double ComputerAvg = 0;

        while (getline(myfile, line))
        {

            if (line.empty())
                continue;

            stringstream ss(line);

            string name, subject, tempScore;

            getline(ss, name, ',');
            getline(ss, subject, ',');
            getline(ss, tempScore);

            double score = stod(tempScore); // بيحول الرقم رسمه ل رقم فعلي

            if (subject == "Math")
            {

                MathTotal += score;
                Mathcount++;
                if(score>MMax){
                    MMax= score ;TopInMath=name;
                   
                }
                else if (score ==MMax && MMax>0 )
                {
                    TopInMath +=" And "+name;
                }
            }
            else if (subject == "Physics")
            {
                
                PhysicsTotal += score;
                Physicscount++;
                if(score>PhMax){
                    PhMax= score ;TopInPh=name;

                } else if (score ==PhMax && PhMax>0 )
                {
                    TopInPh +=" And "+name;
                }
            }
            else if (subject == "Chemistry")
            {
                
                ChemistryTotal += score;
                Chemistrycount++;
                if(score>ChMax){
                    ChMax= score ;TopInCh=name;

                } else if (score ==ChMax && ChMax>0 )
                {
                    TopInCh +=" And "+name;
                }
            }
            else if (subject == "Biology")
            {
                
                BiologyTotal += score;
                Biologycount++;
                if(score>BgMax){
                    BgMax= score ;TopInBg=name;

                } else if (score ==BgMax && BgMax>0 )
                {
                    TopInBg +=" And "+name;
                }
            }
            else if (subject == "English")
            {
                
                EnglishTotal += score;
                Englishcount++;
                if(score>EgMax){
                    EgMax= score ;TopInEg=name;

                } else if (score ==EgMax && EgMax>0 )
                {
                    TopInEg +=" And "+name;
                }
            }
            else if (subject == "History")
            {
                
                HistoryTotal += score;
                Historycount++;
                if(score>HsMax){
                    HsMax= score ;TopInHs=name;

                } else if (score ==HsMax && HsMax>0 )
                {
                    TopInHs +=" And "+name;
                }
            }
            else if (subject == "Computer")
            {
                
                ComputerTotal += score;
                Computercount++; 
                if(score>CpMax){
                    CpMax= score ;TopInCp=name;

                } else if (score ==CpMax && CpMax>0 )
                {
                    TopInCp +=" And "+name;
                }
            }
            // cout << " Name:" << name << " |Subject:" << subject << " |Grade:" << score << endl;
            
        }
        myfile.close();

        // cout << MathTotal << endl;
        // cout << Mathcount << endl;
         MathAvg = MathTotal / Mathcount;
        cout << "MathAvg Is : "<<MathAvg<<endl;
        
        
        // cout << PhysicsTotal << endl;
        // cout << Physicscount << endl;
         PhysicsAvg = PhysicsTotal / Physicscount;
        cout << "PhysicsAvg Is : "<<PhysicsAvg<<endl;
        
        // cout << ChemistryTotal << endl;
        // cout << Chemistrycount << endl;
         ChemistryAvg = ChemistryTotal / Chemistrycount;
        cout << "ChemistryAvg Is : "<<ChemistryAvg<<endl;
        
        
        // cout << BiologyTotal << endl;
        // cout << Biologycount << endl;
        BiologyAvg = BiologyTotal / Biologycount;
        cout << "BiologyAvg Is : "<<BiologyAvg<<endl;
    
        
        // cout << EnglishTotal << endl;
        // cout << Englishcount << endl;
         EnglishAvg = EnglishTotal / Englishcount;
        cout << "EnglishAvg Is : "<<EnglishAvg<<endl;

        
        // cout << HistoryTotal << endl;
        // cout << Historycount << endl;
         HistoryAvg = HistoryTotal / Historycount;
        cout << "HistoryAvg Is : "<<HistoryAvg<<endl;
        
        
        // cout << ComputerTotal << endl;
        // cout << Computercount << endl;
         ComputerAvg = ComputerTotal / Computercount;
        cout <<"ComputerAvg Is : "<<ComputerAvg<<endl;
        
        // double minAvg=min({MathAvg,PhysicsAvg,ChemistryAvg,BiologyAvg,EnglishAvg,HistoryAvg,ComputerAvg});
        // if (minAvg ==MathAvg){
            
        //     cout <<"This Is The Hardest Subject: "<<"Math / Avg : "<<MathAvg<<"\n";
        // }
        // else if(minAvg ==PhysicsAvg){
            
        //     cout <<"This Is The Hardest Subject: "<<"Physics / Avg : "<<PhysicsAvg<<"\n";
        // }
        // else if(minAvg ==ChemistryAvg){
            
        //     cout <<"This Is The Hardest Subject: "<<"Chemistry / Avg : "<<ChemistryAvg<<"\n";
        // }else if(minAvg ==BiologyAvg){
            
        //     cout <<"This Is The Hardest Subject: "<<"Biology / Avg : "<<BiologyAvg<<"\n";
        // }else if(minAvg ==EnglishAvg){
            
        //     cout <<"This Is The Hardest Subject: "<<"English / Avg : "<<EnglishAvg<<"\n";
        // }else if(minAvg ==HistoryAvg){
            
        //     cout <<"This Is The Hardest Subject: "<<"History / Avg : "<<HistoryAvg<<"\n";
        // }else{
        //     cout <<"This Is The Hardest Subject :"<<"Computer / Avg : "<<ComputerAvg<<"\n";
        //     cout<<"\n=====================================\n"; 
        // }
        cout <<"1 In Math : " <<TopInMath<<", His Score :"<<MMax<<endl;
        cout <<"1 In Physics : " <<TopInPh<<", His Score :"<<PhMax<<endl;
        cout <<"1 In Chemistry : " <<TopInCh<<", His Score :"<<ChMax<<endl;
        cout <<"1 In Biology : " <<TopInBg<<", His Score :"<<BgMax<<endl;
        cout <<"1 In English : " <<TopInEg<<", His Score :"<<EgMax<<endl;
        cout <<"1 In History : " <<TopInHs<<", His Score :"<<HsMax<<endl;
        cout <<"1 In Computer : " <<TopInCp<<", His Score :"<<CpMax<<endl;

        
double averages[] = {MathAvg, PhysicsAvg, ChemistryAvg, BiologyAvg, EnglishAvg, HistoryAvg, ComputerAvg};
string subjectNames[] = {"Math", "Physics", "Chemistry", "Biology", "English", "History", "Computer"};

int TheHardest=0;
for(int i=1;i<7;i++){
if (averages[i]<averages[TheHardest]){
    TheHardest=i;
}
}
cout <<"This Is The Hardest Subject :"<<subjectNames[TheHardest]<<"/Avg : "<<averages[TheHardest];
}






    return 0;
}


