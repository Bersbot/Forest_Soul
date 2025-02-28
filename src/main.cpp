
#include <iostream>
#include <string>
#include <SFML/All.hpp>


int main()
{
    //OnStart();
    
    sf::RenderWindow window(sf::VideoMode(940, 450), "SFML works");
    sf::Clock clock1;
    sf::Event event;
    while (window.isOpen())
    {
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }
        //Draw();
        window.clear();
        //Update();
        window.display();
    }

    return 0;
}
