// #include <iostream>
// #include <ostream>

// class Number{
// private:
//     int num{0};
// public:
//     Number(int n = 0) : num(n){}

//     //Prefix unary operator overload
//     Number& operator++()
//     {
//         num++;
//         return *this;
//     }

//     //Postfix - has int in argument
//     Number operator++(int)
//     {
//         //Return type is by value, returns the old state
//         Number temp(num);
//         num++;
//         return temp;
//     }

//     friend std::ostream& operator<< (std::ostream& o, const Number& n);
// };

// std::ostream& operator<< (std::ostream& o, const Number& n)
// {
//     return o << n.num;
// }

// int main(int argc, char* argv[])
// {
    
//     Number n1(10);

//     //Post fix op
//     std::cout << n1++ << "\n";
//     std::cout << n1 << "\n";


//     Number n2(15);
//     //Pre fix op
//     std::cout << ++n2 << "\n";
//     std::cout << n2 << "\n";


//     return 0;
// }