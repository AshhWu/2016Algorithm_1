#include <iostream>
#include <algorithm>
#include <sstream>
#include <vector>
#include <fstream>
using namespace std;

int main()
{
    ifstream inFile;
    inFile.open("input.txt",ios::in);
    ofstream outFile;
    outFile.open("output.txt",ios::out);
    
    int j,n,i=0,sum=0;
    inFile>>n;
    inFile.get();
    char ch;
    vector<int> sorted;
    while(inFile.get(ch))
    {
        if(ch=='\n')
        {
            sorted[i]=sum;
            i++;
            sort(sorted.begin(),sorted.begin()+i);
            for(j=0;j<i-1;j++)
            {
                outFile<<sorted[j]<<' ';
            }
            outFile<<sorted[j]<<'\n';
            i=0;sum=0;
            sorted.clear();
        }
        else if(ch==' ')
        {
            sorted.push_back(sum);
            sum=0;
            i++;
        }
        else
        {
            sum*=10;
            sum+=ch-'0';
        }
    }
}