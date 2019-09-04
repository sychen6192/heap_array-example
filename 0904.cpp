#include<stdio.h>
#include<stdlib.h>
#include <iostream>
using namespace std;
int main()
{
int **data;
int data_height, data_width;

cout << "¿é¤J¤Gºû°}¦Cºû«×:";
cin >> data_height >> data_width;
data = new int*[data_height];
for(int i = 0; i < data_height; i++)
    data[i] = new int[data_width];


for(int i=0;i < data_height; i++){
    for(int j=0;j < data_width; j++){
         cout << "i=" << i << "\t" <<"j=" << j << endl;
    }
}

for(int i = 0; i < data_height; i++){
    delete [] data[i];
delete [] data;
 }
return 0;
}
