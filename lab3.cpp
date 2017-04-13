#include<iostream>
#include<vector>
#include<stdio.h>
#include<fstream>
#include <iomanip>
#include <algorithm>

using namespace std;

int main(){

	ifstream inFile("input.txt",ios::in);
	if(!inFile)
		{
			cout<<"file opened failed"<<endl;
			exit(1);
		}
	ofstream outFile("outfile.txt", ios::out);
	if(!outFile) {
 cerr << "Failed opening" << endl;
 exit(1);
 }



	int num,a,b,c,d,e,f,g,h;
	if(inFile>>num>>a>>b>>c>>d>>e>>f>>g>>h)
	{
		const int size = 8;
        int init_array[size]={a,b,c,d,e,f,g,h};

		vector<int> v(size);
        for(int i=0; i<size; ++i)
		{ v.at(i) = init_array[i];}
		sort(v.begin(), v.end());
		for(int i=0; i<size; ++i)
          outFile << setw(4) << v.at(i);
          outFile << endl;
		  outFile <<"weight is "<< v.at(3)+v.at(4)+v.at(5)+v.at(6)+v.at(7)<<endl;
		  return 0;
	}

}
