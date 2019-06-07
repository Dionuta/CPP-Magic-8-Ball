#include <iostream>
#include <cstdlib> 

int main() {

 std:: cout << "Magic 8-Ball: ";
 int answer = std::rand() % 10; // Generates Random Nums 0 - 9  
 
 switch(answer) {
   case 1:
     std::cout << "It is certain.\n";
     break;
   case 2:
     std::cout << "It is decidedly so.\n";
     break;
   case 3:
     std::cout << "Ask again later.\n";
     break;
   case 4:
     std::cout << "Yes - definitely.\n";
     break;
   case 5:
     std::cout << "You may rely on it.\n";
     break;
   case 6:
     std::cout << "As I see it, yes.You may rely on it.\n";
     break;
   case 7:
     std::cout << "My reply is no.\n";
     break;
   case 8:
     std::cout << "Outlook not so good.\n";
     break;
   case 9:
     std::cout << "Very doubtful.\n";
     break;
   case 0: 
     std::cout << "Better not tell you now.";
     break;
   default:
     std::cout << "Something is wrong with your code";
     break;
 }
  
}