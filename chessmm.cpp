/*matthias/maryia chess tour counting list*/

#include <iostream>
#include <fstream>
#include <string>
#include <limits>

int main()
{
    std::ifstream checkFile("chessmm.txt");
    bool fileEmpty = checkFile.peek() == std::ifstream::traits_type::eof();
    checkFile.close();

    std::ofstream file("chessmm.txt", std::ios::app);

    if (fileEmpty) {
        file << "Matthias\t\t\tMaryia\n";
    }

    int N;
    std::cout << "Oioi who won this time and who was a complete wurst?:\n";
    std::cout << "1. Matthias aka ketchup\n";
    std::cout << "2. Maryia aka boese\n";
    std::cin >> N;

    if(N == 1){
        file << "\n" << "🐄" << "\t\t\t" << "\n";  
    } else{
        file << "\n" << "\t\t\t\t\t" << "🐄" << "\n";
    }

    file.close();

    std::cout << "New winner was added, good luck next time!" << std::endl;

    return 0;
}