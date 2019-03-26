#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

int main(int argc, char** argv)

{
cout << "The total number of directories in directory " <<  argv[1] << " is ";
string dir = "find ";
dir = dir + argv[1] + " -maxdepth 1 -type d | wc -l";

cout << "\n";
const char *dirCom = dir.c_str();
system(dirCom);




cout << "The total number of files in directory " <<  argv[1] << " is ";
string file = "find ";
file = file + argv[1] + " -maxdepth 1 -type f | wc -l";

cout << "\n";
const char *fileCom = file.c_str();
system(fileCom);


cout << "The total number of bytes in " << argv[1] << " is ";
cout << "\n";
string bytesNum = "du -sbh ";
bytesNum = bytesNum + argv[1];
bytesNum = bytesNum + " | sed 's/\\s.*$//'";
const char *bytesCom = bytesNum.c_str();
system(bytesCom);

return 0;
}
