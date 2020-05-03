// #include <iostream>

// class A 
// {
//     public :
//     void f() { std::cout << "base" << "\n"; }
// };

// class B : public A
// {
//     public :
    
//     //overload of A::f(), this will hide a::f()
//     void f(int n) {std:: cout << n << " overloaded f" << "\n"; }

//     //So to unhide A::f(), use using construct
//     //using constructs unhide A::f()
//     using A::f;

// };

// int main(int argc, char* argv[])
// {
//     B b;
//     b.f(); // will give error if using not used
//     b.f(1);

//     return 0;
// }