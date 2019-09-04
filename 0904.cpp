#include<stdio.h>
#include<stdlib.h>
#include <iostream>
using namespace std;
int main()
{
int **data;
int data_height, data_width;

// declare array size
cout << "Please input 2 dimention array :";
cin >> data_height >> data_width;
data = new int*[data_height];
for(int i = 0; i < data_height; i++)
    data[i] = new int[data_width];

// assign a summation for array
for(int i=0;i < data_height; i++){
    for(int j=0;j < data_width; j++){
         data[i][j]=i + j;
         cout << "i=" << i <<" j=" << j << " i+j=" << data[i][j] << endl;
    }
}
// release allocate memory
for(int i = 0; i < data_height; i++){
    delete [] data[i];
delete [] data;
 }
return 0;
}
