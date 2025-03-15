#include<iostream>
using namespace std;

class Rectangle{
    private:
        int width;
        int length;

    public:
        Rectangle(){ width=0,length=0;}

        void set(int w, int l);
        int area() const{return width*length;}

};

void Rectangle::set(int w, int l){
    width = w;
    length = l;
}

int main(){
    Rectangle r1;
    r1.set(5,8);

    cout<<r1.area()<<endl;

    //pointer to object
    Rectangle *ptrrec=NULL;
    
    ptrrec = &r1;
    ptrrec->set(10,10);
    cout<<ptrrec->area()<<endl;

    Rectangle *ptr1 = nullptr;

    //dynamic memory allocation of object pointer
    ptr1 = new Rectangle();
    ptr1->set(20,10);
    cout<<ptr1->area()<<endl;

    delete ptr1;
    ptr1 = nullptr;

}