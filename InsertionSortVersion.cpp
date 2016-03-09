#include <iostream>
#include <algorithm>
#include <sstream>
#include <vector>
#include <fstream>
using namespace std;

template<class T>
void insertionSort(vector<T>& v,int s)
{
    T key;
    for(int i = 1;i < s;i++)
    {
        key = v[i];
        int j = i;
        while(j > 0 && v[j-1] > key)
        {
            v[j]=v[j-1];
            j--;
        }
        v[j]=key;
    }
}
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
            insertionSort(sorted,i);
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