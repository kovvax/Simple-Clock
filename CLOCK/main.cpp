/* kovax */

#include <string.h>
#include <iostream>
#include <windows.h>

using namespace std;


int main()
{
    char kova;
    int hr,mn,sc,error;
    error=0;
    while(error==0)
    {
        cout << "enter hour: ";
        cin >> hr;
        cout << "enter minute: ";
        cin >> mn;
        cout << "enter seconds: ";
        cin >> sc;
        if (hr<24 && mn<60 && sc<60)
        {
            error++;
        }
        else
            system("cls");
    }
    system("cls");
             while(1)
            {
                system("cls");
                cout << "The time is: " << hr << ":" << mn << ":" << sc << "\n";
                Sleep(1000);
                sc++;
                if (sc>59)
                    {
                        sc=0;
                        mn++;
                    }
                if (mn>59)
                    {
                        mn=0;
                        hr++;
                    }
                if(hr>24)
                    {
                        hr=0;
                    }
            }
        }
