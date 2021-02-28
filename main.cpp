#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;
main()
{
    int val1, val2, val3, val4;
    int opt;

    cout << "Please Input Value 1 : \t";
    cin >> val1;
    cout << "Please Input Value 2 : \t";
    cin >> val2;
    cout << "Please Input Value 3 : \t";
    cin >> val3;
    cout << "Please Input Value 4 : \t";
    cin >> val4;

    cout << "\n" << "v = " << val1 << " i" << "+" << val2 << " j" << endl;
    cout << "\n" << "w = " << val3 << " i" << "+" << val4 << " j" << endl;

    do {

        cout << "\n" << "Options of Operations; " << endl;
        cout << "1. addition & subs" << endl;
        cout << "2. multiplication" << endl;
        cout << "3. magnitude" << endl;
        cout << "4. dot Products" << endl;

        cout << "\n Your Option : " << endl;
        cin >> opt;

         switch(opt){
            case 1:
                cout << "\naddition (V+W): " << (val1+val3) << "i + " << (val2+val4) << "j" << endl;
                cout << "\nsubstraction (V-W): " << (val1-val3) << "i + " << (val2-val4) << "j" << endl;
                break;

            case 2:
                cout << "\nmultiplication (VxW) : " << (val1*val3) << "i + " << (val2*val4) << "j" << endl;
                break;
            case 3:
                cout << "magnitude: \n|V| : " << sqrt((val1*val1)+(val2*val2)) << endl;
                cout << "|W| : " << sqrt((val3*val3)+(val4*val4)) << endl;
                break;
            case 4:
                cout << "\ndot products (V.W) : " << ((val1*val3)+(val2*val4)) << endl;
                break;

            default:
                    cout<<"Wrong Option";
                    return 0;
            }
    cout<<endl;
    cout<<"For back press enter";
    getch();
    } while (opt !=5);
}
