// #include <iostream>
// #include <cstring>
// #include <ostream>

// class String
// {
// private :
//     char* str;
//     size_t len;

// public:
//     String(const char* s)
//     {
//         std::cout << "ctor : " << s << "\n";
//         len = strlen(s);
//         str = new char[len+1];
//         strcpy(str, s);
//     }

//     String(const String& s)
//     {
//         std::cout << "copy ctor : " << s.str << "\n";
//         len = s.size();
//         str = new char[len +1];
//         strcpy(str, s.str);
//     }

//     String& operator=(const String& s)
//     {
//         std::cout << "assignment overload : " << s.str << "\n";

//         if(this != &s)
//         {
//             delete[] str;
//             str = new char[len+1];
//             strcpy(str, s.str);
//         }

//         return *this;
//     }

//     size_t size() const
//     {
//         return len;
//     }

//     String& operator+(const String& s)
//     {
//         std::cout << "operator+ overload : " << s.str << "\n";;

//         char* newStr = new char[len + s.size() + 1];

//         strcpy(newStr, this->str);
//         strcat(newStr, s.str);

//         String *newString = new String(newStr);
//         delete[] newStr;

//         return *newString;
//     }

//     friend std::ostream& operator << (std::ostream& o,const String& s);

//     ~String()
//     {
//         std::cout << "dtor : " << str << "\n";
//         delete[] str;
//     }
// };

// std::ostream& operator << (std::ostream& o,const String& s)
// {
//     o << s.str << std::endl;
//     return o;
// }


// int main(int argc, char* argv[])
// {
//     String s1("Hello");
//     String s2("World");

//     String s3 = s1+s2;

//     std::cout << "New String : " << s3 << "Length: " << s3.size() << std::endl;

//     return 0;
// }