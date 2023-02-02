#include <iostream>
#include <cstring>
using namespace std;

class Gun
{
private:
    int bullet;

public:
    Gun(int bnum) : bullet(bnum)
    {
    }
    void Shot()
    {
        cout << "BBANG!" << endl;
        bullet--;
    }
};

class Police
{
private:
    int handcuffs;
    Gun *pistoal;

public:
    Police(int bnum, int bcuff)
        : handcuffs(bcuff)
    {
        if (bnum > 0)
            pistoal = new Gun(bnum);
        else
            pistoal = NULL;
    }
    void PutHandcuff()
    {
        cout << "SNAP!" << endl;
        handcuffs--;
    }
    void Shot()
    {
        if (pistoal == NULL)
            cout << 'Hut BBANG!' << endl;
        else
            pistoal->Shot();
    }
    ~Police()
    {
        if (pistoal != NULL)
            delete pistoal;
    }
};

int main(void)
{
    Police pman1(5, 3);
    pman1.Shot();
    pman1.PutHandcuff();

    Police pman2(0, 3);
    pman2.Shot();
    pman2.PutHandcuff();
    return 0;
}