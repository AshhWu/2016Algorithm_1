#include <iostream>
#include <algorithm>
#include <sstream>
#include <string>
#include <vector>
#include <fstream>
using namespace std;

int main()
{
    ifstream inFile;
    inFile.open("input.txt",ios::in);
    ofstream outFile;
    outFile.open("output.txt",ios::out);
    int i,j,n,s_=1;
    inFile>>n;
    string seq;
    //getline(inFile,seq);
    inFile.get();
    vector<int> sorted(1);
    stringstream ss;
    while(n>0)
    {
        getline(inFile,seq);
        
        ss.clear();
        ss<<seq;
        i=0;j=0;
        while(ss>>sorted[i])
        {
            i++;
            if(i==s_)
            {
                s_*=2;
                sorted.resize(s_);
            }
        }
        cout<<endl;
        //quickSort(sorted,0,i-1);
        sort(sorted.begin(),sorted.begin()+i);
        for(;j<i-1;j++)
        {
            outFile<<sorted[j]<<' ';
        }
        outFile<<sorted[j]<<'\n';
        n--;
    }
}

