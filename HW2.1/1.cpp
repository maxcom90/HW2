#include <iostream>

class Calculator
{
public:

    double num1;
    double num2;
    

    double add(double num1, double num2)
    {
        return num1 + num2;
    }

    double multiply(double num1, double num2)
    {
        return num1 * num2;
    }

    double subtract_1_2(double num1, double num2)
    {
        return num1 - num2;
    }

    double subtract_2_1(double num1, double num2)
    {
        return num2 - num1;
    }

    double divide_1_2(double num1, double num2)
    {
        return num1 / num2;
    }

    double divide_2_1(double num1, double num2)
    {
        return num2 / num1;
    }

    bool set_num1(double num1)
    {
        this->num1 = num1;
        if (num1 == 0)
        {
            return false;
        }
        else
        {
            return true;
        }
    }

    bool set_num2(double num2)
    {
        this->num2 = num2;
        if (num2 == 0)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
};


int main()
{
    setlocale (LC_ALL, "Russian");
    std::system("chcp 1251");
    double numb1, numb2;
    

    

    Calculator calculator;
    

    

    for (;;)
    {
        std::cout << "Введите num1: ";
        std::cin >> numb1;
        calculator.num1 = numb1;

        if (calculator.set_num1(numb1))
        {
           do
           {
               std::cout << "Введите num2: ";
               std::cin >> numb2;
               calculator.num2 = numb2;

               if (calculator.set_num2(numb2))
               {
                   std::cout << "num1 + num2 = " << calculator.add(numb1, numb2) << std::endl;
                   std::cout << "num1 - num2 = " << calculator.subtract_1_2(numb1, numb2) << std::endl;
                   std::cout << "num2 - num1 = " << calculator.subtract_2_1(numb1, numb2) << std::endl;
                   std::cout << "num1 * num2 = " << calculator.multiply(numb1, numb2) << std::endl;
                   std::cout << "num1 / num2 = " << calculator.divide_1_2(numb1, numb2) << std::endl;
                   std::cout << "num2 / num1 = " << calculator.divide_2_1(numb1, numb2) << std::endl;
               }
               else
               {
                   std::cout << "Неверный ввод!" << std::endl;
               }
           } while (numb2 == 0);
           
            
        }
        else
        {
            std::cout << "Неверный ввод!" << std::endl;
        }
    } 

    
  
}



   


