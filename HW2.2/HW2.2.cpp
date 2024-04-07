#include <iostream>
#include <fstream>
#include <string>
std::string** creatarr(int numb_address, int numb_elements)
{
    std::string** arr = new std::string * [numb_address];
    for (int i = 0; i < numb_address; i++)
    {
        arr[i] = new std::string[numb_elements];
    }
    return arr;
}
int main(int argc, char** argv)
std::string a;
std::ifstream fin("in.txt");
std::ofstream fout("out.txt");
if (fin.is_open())
{    
    fin >> a;
    int numb_address = std::stoi(a);
    int numb_elements = 4;
    creatarr(numb_address, numb_elements);
    std::string** arr1 = creatarr(numb_address, numb_elements);
    for (int i = 0; i < numb_address; i++)
    {
        for (int j = numb_elements - 1; j >= 0; j--)
        {
            fin >> arr1[i][j];
        }
    }
    std::cout << numb_address << std::endl;
    for (int i = numb_address - 1; 0 <= i; i--)
    {
        for (int j = numb_elements - 1; 0 <= j; j--)
        {
            std::cout << arr1[i][j];
            if (j != 0)
            {
                std::cout << ", ";
            }
        }
        std::cout << std::endl;
    }
    if (fout.is_open())
    {
        fout << numb_address << std::endl;
        for (int i = numb_address - 1; 0 <= i; i--)
        {
            for (int j = numb_elements - 1; 0 <= j; j--)
            {
                fout << arr1[i][j];
                if (j != 0)
                {
                    fout << ", ";
                }
            }
            fout << std::endl;
        }
    }
    for (int j = 0; j < numb_elements; j++)
    {
        delete[] arr1[j];
    }
    delete[] arr1;
}
fout.close();
fin.close();
}

