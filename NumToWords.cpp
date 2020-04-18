// #include <iostream>

// void upto999(uint64_t num);

// const char* teens[] {"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen",
// "sixteen", "seventeen", "eighteen", "nineteen"};

// const char* ones[] {"", "one", "two", "three", "four",
//  "five", "six", "seven", "eight", "nine"};

// const char* tens[] {"", "", "twenty", "thirty", "fourty", "fifty", "sixty",
// "seventy", "eighty", "ninety"};

// const char* places[] {"hundred", "thousand", "lakh", "crore"};

// void toWords(uint64_t num)
// {
//     //999450 Q=999 R=450 
//     if(num/1000>0)
//     {
//         upto999(num/1000);
//         std::cout << " " << places[1];
        
//         num %=1000;
//         if(num!=0)
//             upto999(num);
//     }
//     else
//     {
//         upto999(num);
//     }

// }


// void upto999(uint64_t num)
// {
//     if(num >999)
//     {
//         return;
//     }

//     if(num == 0) 
//     {
//         std::cout << "zero";
//     }
//     //145
//     if(num/100 > 0 && num <= 999)
//     {
//         std::cout << " " << ones[num/100] << " "<< places[0];
//         num %= 100; //num =45 
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

