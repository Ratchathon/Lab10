#include<iostream>
#include<string>
#include<cmath>
#include<fstream>
#include<cstdlib>
#include<iomanip>
using namespace std;



int main()
{
    ifstream source;
    source.open("score.txt");
    string score;
    ofstream dest;
    dest.open("scorecopy.txt");
    int i = 0;
    float sum = 0,sum_of_square = 0;
    while(getline(source,score))
    {
        dest<<i<<". "<<score<<endl;
        i++;
        sum +=stod(score.c_str());
        sum_of_square +=pow(stod(score.c_str()),2);

    }
    cout<<"Number of data = "<<i<<endl;
    cout<<setprecision(3);
    cout<<"Mean = "<<sum/i<<"\n";
    cout<<"Standard deviation = "<<sqrt(sum_of_square/i-pow(sum/i,2));
}

