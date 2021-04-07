/* Create the preprocessor to define the OS that user uses */
/* __unix__ is usually defined by compilers targeting Unix systems */
#ifdef __unix__

    #define OS_Windows false

/* _Win32 is usually defined by compilers targeting 32 or 64 bit Windows systems */
#elif defined(_WIN32) || defined(WIN32)

    #define OS_Windows true

#endif

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    cout << "Hello World!" << endl;
    cin.get();
    if(OS_Windows){
        system("cls");
        cout << "Your Operating System is Windows" << endl;
    }else if(!OS_Windows){
        system("clear");
        cout << "Your Operating System is Unix" << endl;
    }
    return 0;
}
