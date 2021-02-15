#include <iostream>
#include <fstream>
#include <stdio.h>

using namespace std;

bool filecopy()
{
    char buffer[200];
    ifstream file_1;
    ifstream file_2;
    ofstream out;
    file_1.open("file_1.txt");
    file_2.open("file_2.txt");
    out.open("file_3.txt");
    while(!file_1.eof())
    {
        file_1.getline(buffer,sizeof(buffer));
        out << buffer;
     }
    while(!file_2.eof())
    {
        file_2.getline(buffer,sizeof(buffer));
        out << buffer;
     }
      file_1.close();
      file_2.close();
      out.close();
      return 0;
}



int main()
{
  ofstream file1("file_1.txt");
  file1 << "Donec quam felis, ultricies nec, pellentesque eu, pretium quis, sem. "<< endl;
  file1.close();
  ofstream file2("file_2.txt");
  file2 << "Donec pede justo, fringilla vel, aliquet nec, vulputate eget, arcu. "<< endl;
  file2.close();
  filecopy();
}
