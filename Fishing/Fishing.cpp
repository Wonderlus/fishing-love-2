#include <SFML/Graphics.hpp>
#include <iostream>
#include <string>
using namespace sf;
using namespace std;

int main()
{
    RenderWindow window(VideoMode(1000, 1000), "SFMLworks");
   
    Texture river;
 
    if (!river.loadFromFile("D:\\Coding\\C++\\Ispu\\Fishing\\templates\\river.jpg")) {
        return -1;
    }

    Sprite sprite;
    sprite.setTexture(river);

    sprite.setPosition(0, 0);

    while (window.isOpen()) {
        Event event;
        while (window.pollEvent(event)) {
            if (event.type == Event::Closed) {
                window.close();
            }
        }

        window.clear();
        window.draw(sprite);
        window.display();
    }

    return 0;
}
