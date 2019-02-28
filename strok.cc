#include <cstring>
#include <iostream>

//
using namespace std; 
int main() 
{
    string line = "  ZZZZZ       XXX C   D   "; 
    cout<<"put a line out"<<endl;
    //cin>>line;
    char *cstr = new char[line.length() + 1];
    strcpy(cstr, line.c_str());
    // do stuff
    char *token = std::strtok(cstr, " ");
    while (token != NULL) {
        std::cout << token << " "<<strlen(token)<<'\n';
        token = std::strtok(NULL, " ");
    }
    delete [] cstr;
}
