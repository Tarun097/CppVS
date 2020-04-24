// #include <iostream>
// #include <cstring>

// #define print(msg) std::cout << msg << std::endl;



// int main(int argc, char* argv[])
// {
    
//     std::string s1 = "Hello";
//     //C-String
//     const char* s2 = "NewString";
//     print(strlen(s2));

//     char* s3 = nullptr;
//     s3 = strdup(s2); //Allocates memory and copies string and return pointer 
    
//     char* s5 = new char[10];
//     s5 = strcpy(s5, s3); //copies string to already allocated memory
//     print(s5); //Will print NewString

//     s1 = s5; //implicit conversion of c-style string to std::string
//     s5 = nullptr;

//     print(s1); //Will print NewString
//     print(s3); //Will print NewString
    
//     return 0;
// }