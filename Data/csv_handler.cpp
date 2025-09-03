#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "csv_handler.h"

using namespace std;
using namespace Data;


// ? DataTable Class

// * Constructor
DataTable::DataTable(string &data, char delimiter)
{
    parseData(data, delimiter);
}

// * Destructor
DataTable::~DataTable()
{
    table.clear();
}

// * Method - Convert given string data to table
void DataTable::parseData(string &data, char delimiter)
{
    table.clear();

    vector<string> row;
    string cell;

    for (char ch : data)
    {
        // ? Column creation
        if (ch == delimiter)
        {
            row.push_back(cell);
            cell.clear();
        }
        // ? Row creation
        else if (ch == '\n')
        {
            row.push_back(cell);
            table.push_back(row);
            row.clear();
            cell.clear();
        }
        else
        {
            cell += ch;
        }
    }

    // ! Add the last cell and row if they exist
    if (!cell.empty())
    {
        row.push_back(cell);
    }
    
    // ! Add the last row if it exists
    if (!row.empty())
    {
        table.push_back(row);
    }
}

// ? Reader Class

// * Constructor
Reader::Reader(string path) : path(path)
{
    file.open(path);
    if (!file.is_open())
    {
        cerr << "Error: Could not open file " << path << " for reading." << endl;
    }
}

// * Method - Read data from file
DataTable Reader::read(char delimiter)
{
    if (!file.is_open())
    {
        file.open(path);
    }

    string data((istreambuf_iterator<char>(file)), istreambuf_iterator<char>());
    file.close();
    return DataTable(data, delimiter);
}

// * Destructor
Reader::~Reader()
{
    if (file.is_open())
    {
        file.close();
    }
}

// ? Writer Class

// * Constructor
Writer::Writer(string path) : path(path)
{
    file.open(path);
    if (!file.is_open())
    {
        cerr << "Error: Could not open file " << path << " for writing." << endl;
    }
}

// * Method - Write data to file
void Writer::write(const DataTable &data, char delimiter)
{
    if (!file.is_open())
    {
        file.open(path);
    }

    // ? Writing the data from table to file
    for (const auto &row : data.table)
    {
        for (size_t i = 0; i < row.size(); ++i)
        {
            file << row[i];
            if (i < row.size() - 1)
            {
                file << delimiter;
            }
        }
        file << '\n';
    }

    file.close();
}

// * Destructor
Writer::~Writer()
{
    if (file.is_open())
    {
        file.close();
    }
}
