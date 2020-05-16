// #include <iostream>

// class Base1
// {
//     private :
//     int data_;

//     public :
//     Base1(int x) : data_(x) { std:: cout << "Base1" << "\n"; }

//     void f() {std:: cout << "Base1::f()" << "\n"; }
//     void g(int x) {std:: cout << "Base1::g()" << "\n"; }

//     ~Base1(){std::cout << "~Base1"<< "\n";}

// };

// class Base2
// {
//     private :
//     int data_;

//     public :
//     Base2(int x) : data_(x) { std:: cout << "Base2" << "\n"; }

//     void f() {std:: cout << "Base2::f()" << "\n"; }
//     void g() {std:: cout << "Base2::g()" << "\n"; }

//     ~Base2(){std::cout << "~Base2"<< "\n";}
// };

// class Derived : public Base1, public Base2
// {
//     private :
//     int j;

//     public :
//     Derived(int x, int y, int z) : Base1(x), Base2(y), j(z) { std::cout << "Derived"<< "\n";}

//     using Base2::f; //Hides Base1::f()

//     ~Derived(){std::cout << "~Derived"<< "\n";};
// };

// int main(int argc, char* argv[])
// {
//     Derived d(1,2,3);

//     //d.g(5); //Should ideally call Base1::g(int x);
//     // But won't because function overload resolution happens only within namespace

//     d.f(); //Base2::f()
//     d.Base1::f(); //We can call Base1::f() explicitly using class name resolution


//     return 0;
// }