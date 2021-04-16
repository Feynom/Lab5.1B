#include <iostream>
#include <exception>
#include <stdexcept>
#include "Vector3D.h"

int main()
{
    Vector3D A, B, C;
    bool initResult;

    cout << "\nVector A" << endl;

    do
    {
        try
        {
            initResult = true;
            cin >> A;
        }
        catch (invalid_argument e)
        {
            initResult = false;
            cout << e.what() << endl;
        }
        catch (bad_exception e)
        {
            initResult = false;
            cout << e.what() << endl;
        }
        catch (MyException e)
        {
            initResult = false;
            cout << e.what() << endl;
        }
    } while (!initResult);

    cout << A;

    cout << "\nVector B" << endl;
    cin >> B;
    cout << B;

    cout << "\nVector C" << endl;
    cin >> C;
    cout << C;

    cout << "\nA + B = " << endl;
    cout << A + B << endl;

    cout << "\nB + C = " << endl;
    cout << B + C << endl;

    cout << "\nA + C = " << endl;
    cout << A + C << endl;

    cout << "\nA * B = " << A * B << endl;

    cout << "A++" << endl; cout << A++ << endl;
    cout << "A--" << endl; cout << A-- << endl;
    cout << "++A" << endl; cout << ++A << endl;
    cout << "--A" << endl; cout << --A << endl;

    cout << "Size of class is equal to " << sizeof(Vector3D);

    return 0;
}