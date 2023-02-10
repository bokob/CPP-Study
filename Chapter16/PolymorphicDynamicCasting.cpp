#include <iostream>
using namespace std;

class SoSimmple
{
public:
    virtual void ShowSimpleInfo()
    {
        cout << "SoSimple Base Class" << endl;
    }
};

class SoComplex : public SoSimmple
{
public:
    void ShowSimpleInfo()
    {
        cout << "SoComplex Derived Class" << endl;
    }
};

int main()
{
    SoSimmple *simPtr = new SoComplex;
    SoComplex *comPtr = dynamic_cast<SoComplex *>(simPtr);
    comPtr->ShowSimpleInfo();
    return 0;
}