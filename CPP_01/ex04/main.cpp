#include <iostream>
#include <fstream>

int main(int ac, char **av)
{
    if (ac != 4)
    {
        std::cerr << "Usage: " << av[0] << " <file> <str1> <str2>" << std::endl;
        return (1);
    }
    std::string filename = av[1];
    std::string s1 = av[2];
    std::string s2 = av[3];
    std::ifstream inputFile(filename); //to read
    std::ofstream outputFile(filename + ".replace"); //to create & write
    if(!inputFile.is_open())
    {
        std::cerr << "Error: unable to open " << filename << std::endl;
        return (1);
    }
    if(!outputFile.is_open())
    {
        std::cerr << "Error: unable to open " << filename << ".replace" << std::endl;
        inputFile.close();
        return (1);
    }
    std::string line;
    while (std::getline(inputFile, line))
    {
        size_t pos = 0;
        while ((pos = line.find(s1, pos)) != std::string::npos)
        {
            line.erase(pos, s1.length());
            line.insert(pos, s2);
            pos += s2.length();
        }
        outputFile << line << std::endl;
    }
    inputFile.close();
    outputFile.close();
    return (0);
}
