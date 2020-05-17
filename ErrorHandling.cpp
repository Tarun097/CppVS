// #include <iostream>
// #include <cstdlib>

////Error handling in C can be done in multiple ways
//// 1. return error code from function
//// 2. error code using function parameters
//// 3. local goto statements
//// 4. using cerrorno lib, it sets global variable errorno , flow can check this GV, 
////    Ex - pow(x,y) sets this variable on error


// static void atexit_handler_1()
// {
//     std::cout << "within 'atexit_handler_1'" << std::endl;
// }

// static void atexit_handler_2()
// {
//     std::cout << "within 'atexit_handler_2'" << std::endl;
// }

// int main(int argc, char* argv[])
// {

//     //exit(exit_code) calls atexit() which calls handlers registered in reverse order

//     atexit(atexit_handler_1);
//     atexit(atexit_handler_2);

//     exit(EXIT_SUCCESS);

//     std::cout << "This line should never be called" << std::endl;
//     return 0;
// }