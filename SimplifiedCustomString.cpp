// #include <iostream>
// #include <cstring>
// #include <ostream>

// class String
// {
// private:
//     char* str = nullptr;
//     size_t len {0};

// public:
//     String(const char* s) : str(strdup(s)), len(strlen(s)){}
//     String(const String& s) : str(strdup(s.str)), len(s.len){}

//     String& operator= (const String& s) 
//     {
//         if(this!=&s)
//         {
//             free(str);
//             str = strdup(s.str);
//             len = s.len;
//         }

//         return *this;
//     }

//     String& operator + (const String& s)
//     {
//         return *(new String((strdup(strcat(this->str, s.str)))));
//     }

//     ~String()
//     {
//         free(str);
//     }   

//     friend std::ostream& operator<< (std::ostream& o, const String& s);
// };

// std::ostream& operator<< (std::ostream& o, const String& s)
// {
//     return o << s.str;
// } 


// int main(int argc, char* argv[])
// {
//     String s1("Hello");
//     std::cout << s1 + " World" <<std::endl;
//     return 0;
// }