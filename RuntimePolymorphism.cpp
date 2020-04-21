// #include <iostream>

// #define Log(msg) std::cout << msg << std::endl;

// /*
// Dynamic or runtime polymorphism or late binding 
// possible using pointers and reference only , uisng virtual functions
// functions marked as virtual are stored in VFT
// Each class has it's own VFT
// Object of each class has virtual pointer which points to it's own class VFT
// */


// class Base
// {

// private:
//     int x, y;

// public:
//     virtual void f1()
//     {
//         Log("Base"); //Compiled to =>  Base::f1(const Base*)");
//         //This function will be in VFT (Virtual Function Table of Base class)
//         //
//     };

    
//     void g1()
//     {
//         Log("Base"); //Compiled to =>  Base::g1(const Base*)")
//     }

//     virtual void J1()
//     {
//         Log("Base");
//     }
// };

// class Derived: public Base{

// private:
//     int z;

// public:

//     void f1() override
//     {
//         //overriding function of base class
//         Log("Derived");
//     };

//     void g1()    {          //Compiled to => Derived::g1(const Derived*)
//         Log("Derived");
//     }

//     virtual void k1()
//     {
//         Log("Derived");
//     }

// };

// int main(int argc, char** argv)
// {
//     Base* b = new Derived();
//     b->f1(); // resolved to b->vft[0](b);
//     b->g1(); // resolved to B::g1(const Base*); //So it will print Base not derived
//     return 0;
// }


// /*  
//     VFT of Base
//     [0] Base::f1(const Base*)
//     [1] Base::J1(const Base*)


//     VFT of Derived
//     [0] Derived::f1(const Base*)    //Because this virtual function is overridden in Derived
//     [1] Base::J1(const Base*)
//     [2] Derived::K1(const Base*)

// */


// /*---Memory layout of object of class Base------/
//     *vtp -> virtual table pointer  , points to VTF of Base
//     x  
//     y
// //---------------------------------------------*/