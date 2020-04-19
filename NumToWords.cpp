// #include <iostream>

// void printUpTo999(int upto999);
// void upto99(uint64_t num);

// const char* teens[] {"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen",
// "sixteen", "seventeen", "eighteen", "nineteen"};

// const char* ones[] {"", "one", "two", "three", "four",
//  "five", "six", "seven", "eight", "nine"};

// const char* tens[] {"", "", "twenty", "thirty", "fourty", "fifty", "sixty",
// "seventy", "eighty", "ninety"};

// const char* places[] {"hundred", "thousand", "lakh", "crore"};

// void toWords(uint64_t num)
// {
//     if(num == 0) 
//     {
//         std::cout << "zero";
//     }

//     uint64_t thousandOrMore = num/1000;
//     uint64_t upto999 = num%1000;

//     //9 00 00 000 Q=9 00 00 R=000 
//     if(thousandOrMore > 0)
//     {
//         uint64_t hundredlakhs = thousandOrMore / 100; //90 00 00
        
//         uint64_t crores = hundredlakhs / 100; //9
//         uint64_t lakhs = hundredlakhs % 100; //00

//         uint64_t thousands = thousandOrMore % 100; //00
        
//         if(crores > 0) 
//         {
//             upto99(crores);
//             std::cout << " " << places[3];
//         }

//         if(lakhs > 0)
//         {
//             upto99(lakhs);
//             std::cout << " " << places[2];
//         }

//         if(thousands > 0)
//         {
//             //print thousands
//             upto99(thousands);
//             std::cout << " " << places[1];
//         }
//     }
    
//     printUpTo999(upto999);

// }

// void printUpTo999(int upto999)
// {
//     //0 to 999
//     if (upto999 / 100 > 0)
//     {
//         std::cout << " " << ones[upto999 / 100];
//         std::cout << " " << places[0];
//     }

//     upto99(upto999 % 100);
// }

// void upto99(uint64_t num)
// {
//     if(num >99 || num <= 0)
//     {
//         return;
//     }

//     //for 20 to 99
//     if(num/10 > 1 && num <=99)
//     {
//         std::cout << " " << tens[num/10] << " " << ones[num%10];
//         num %= 10; //num 5 
//     }
//     else{
//         //for 10 to 19
//         if(num/10 == 1 && num <= 19)
//         {
//             std:: cout << " " <<teens[num%10];
//         }else
//         {
//             std:: cout << " " << ones[num];
//         }
//     }

// }

// int main() 
// {
//     char c {};
//     uint64_t num{};
    
//     do
//     {
//         std::cout<< "Enter a number" << "\n";
//         std::cin >> num;
//         toWords(num);
//         std::cout<<std::endl;
//         fflush(stdin);
//         std::cout << "Enter 'q' to quit" <<std::endl;
//         c = getchar();
//     }while(c != 'q');
// }

