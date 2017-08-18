/* the death clock is created by john miller this is an open source program and is free to alter if you are charged please contact the seller and ask for a refund ©Yetionc 2017 */

#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << "Hello what is your name: ";
    string name;
    cin >> name;

    cout << "so " << name << " would you like to know when you will die: ";
    string qw;
    cin >> qw;

    if (qw =="yes")
    {
        cout << "What is your gender: ";
        string wq;
        cin >> wq;

        if (wq == "male")
        {
            cout <<" What is your age: ";
            int ageM;
            cin >> ageM;

            cout << "You will die in " << 82 - ageM << " years" << endl;
        }
        if (wq == "female")
        {
            cout << "What is your age: ";
            int ageF;
            cin >> ageF;

            cout << "You will die in " << 85 - ageF << " years" << endl;
        }
    }
    else cout << "Have a nice day" << endl;

    return 0;
}
