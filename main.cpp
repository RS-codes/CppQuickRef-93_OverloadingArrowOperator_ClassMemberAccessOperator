//93 _ Overloading Arrow Operator _ Class Member Access Operator

#include<iostream>
using namespace std;
class Marks{
int mark;
public:
    Marks(int mark){
        this->mark=mark;
        cout<<"Constructor is called"<<endl;
    }
    void disp(){
        cout<<"Ur mark is "<<mark<<endl;
    }
    //Overloaded Arrow -> operator //must be NON-STATIC and NON-FRIEND ftn
    Marks* operator-> (){ //doesnt take any parameter, since its UNARY and the current obj is passed implicitly. //returns obj pointer
        cout<<"\nOverloaded Arrow -> operator called"<<endl;
        return this;
    }
};

int main(){
    Marks m1(100);
    m1.disp();
    m1->disp(); //since the overloaded -> operator returns the address of the current obj, we can access the member ftn thru it
    return 0;
}
