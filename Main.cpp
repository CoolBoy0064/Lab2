// Author YourName
// Description:Hello World in C++
//============================================================
main
#include <iostream>
using namespace std;
int hello1Function(string name1);
int hello2Function(string name2);
int main()
{
string name1="Liam Knight";
hello1Function(name1);
string name2="Adrian Hernandez";
hello2Function(name2);
return 0;
}

int hello1Function(stringname1){
  cout << "hello World "<< name1 << endl;return0;
}

int hello2Function(stringname2){
  cout << "hello World "<< name2 << endl;return0;
}
