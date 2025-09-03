#ifndef CSV_HANDLER_H
#define CSV_HANDLER_H

#include <fstream>
#include <string>
#include <vector>

namespace Data
{
    class DataTable
    {
        
        // * Method - Convert given string data to table
        void parseData(std::string &data, char delimiter);
        
    public:
        // * Attribute
        std::vector<std::vector<std::string>> table;

        // * Constructor
        DataTable(std::string &data, char delimiter);

        // * Destructor
        ~DataTable();
    };

    class Reader
    {
        // * Attributes
        std::ifstream file;
        std::string path;

    public:
        // * Constructor
        Reader(std::string path);

        // * Method - Read data from file
        DataTable read(char delimiter = ',');

        // * Destructor
        ~Reader();
    };

    class Writer
    {
        // * Attributes
        std::ofstream file;
        std::string path;
    
    public:
        // * Constructor
        Writer(std::string path);

        // * Method - Write data to file
        void write(const DataTable &data, char delimiter = ',');

        // * Destructor
        ~Writer();
    };
}

#endif