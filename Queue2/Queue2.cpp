#include "Header.h"
#include "Queue.h"

/*
Вам потрібно буде самостійно заповнити чергу у консолі.
*/
int main()
{
    std::cout << "start" << std::endl;
    std::cout << std::endl;
    Queue<int> cherw(5);
    cherw.display();
    int value;
    for (int i = 0; i < 5; i++)
    {
        std::cin >> value;
        cherw.push(value);
    }
    std::cout << std::endl;
    cherw.display();
    //cherw.display();
    std::cout << std::endl;
    std::cout<< "Back element" << std::endl;
    cherw.back();
    std::cout << std::endl;
    std::cout << "front element" << std::endl;
    cherw.front();
    std::cout << std::endl;
    std::cout << "Delete one element" << std::endl;
    cherw.pop();
    std::cout << std::endl;
    cherw.display();
    
    return 0;
}

