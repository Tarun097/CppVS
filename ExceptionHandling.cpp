// // #include <iostream>
// #include <exception>

// class Exception : public std::exception 
// {
// 	const char * msg = nullptr;

// public :
// 	Exception(const char* s) throw() : msg(s) {}
// 	const char* what() const throw() {return msg; }
// };

// int main(int argc, char* argv[])
// {
// 	try{

// 		int* arr = new (std::nothrow) int[3] {1,2,3};
        
//         if(arr!=nullptr)
//         {
//             std::cout << arr[0] << " ," << arr[1] << " ," << arr[2] << std::endl;  
//     		delete[] arr;
//         }
		
// 		throw Exception("This is how we throw exception : index out of range exception");

// 		//throw std::out_of_range("This is how we throw exception : index out of range exception");

// 	}
// 	catch(Exception &ex)
//     {
// 		std::cout << "Custom Exception caught: " << ex.what() <<std::endl;
//     }
// 	catch(std::exception& ex)
// 	{
// 		std::cout << "Exception caught: " << ex.what() <<std::endl;
// 	}
    

//     return 0;
// }