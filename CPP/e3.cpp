#include<iostream>
using namespace std;
class loggedinuser
{
    int user_id;
    static int count;
    public:
    loggedinuser()
    {
        ++count;
        user_id=count;
        cout<<"User logged in userid="<<user_id<<endl;
        cout<<"You are the "<<count<<"user."<<endl;
        cout<<"Total number of user is:"<<count<<endl<<endl;
    }
};
int loggedinuser::count=0;
int main()
{
    loggedinuser u1;
    loggedinuser u2;
    loggedinuser u3;
    loggedinuser u4;
    return 0;
}