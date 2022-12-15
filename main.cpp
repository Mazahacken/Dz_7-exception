#include <iostream>
#include "IntArray.h"

int main()
{
    IntArray array(10);

    for (int i{ 0 }; i < 10; ++i)
        array[i] = i + 1;

    array.resize(8);

    array.insertBefore(20, 5);

    array.remove(3);

    array.insertAtEnd(30);
    array.insertAtBeginning(40);

    for (int i{ 0 }; i < array.getLength(); ++i)
        std::cout << array[i] << ' ';

    std::cout << '\n';
    try
    {
        IntArray array(-10);
        array.insertBefore(20, 115);
    }
    catch (IntArray&)
    {
        std::cout << "Error";
    }
    catch (std::exception& ex)
    {
        std::cout << ex.what();
    }
     catch (...)
    {
        std::cout << "throw" << endl;
    }
    return 0;
}
