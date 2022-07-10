#include <iostream>
#include <fstream>

int main() {
   std::ifstream words;
   words.open ("E:\\SkillboxProject\\words.txt");

   std::string searchWord;
   std::cout << "enter the search word: ";
   std::cin >> searchWord;
   int  countWord = 0;
   while (!words.eof()){
       std::string temp;
       words >> temp;
      if (temp == searchWord) {countWord++;}
   }
   std::cout << countWord;
}
