#include "gui.h"

using namespace std;

gui::gui() {}
gui::~gui() {}

sf::Font font;
sf::Text text;

void gui::init() {
    if(!font.loadFromFile("bin\\Debug\\arial.ttf")) {
        std::cout << "Did not load font" << std::endl;
    }

    text.setFont(font);
    text.setString("TEST");
    text.setFillColor(sf::Color::White);
}

sf::Text gui::getText() {
    return text;
}

void gui::primed() {
    text.setFillColor(sf::Color::Red);
}

bool gui::isInArea(int x, int y) {

    int lowx = text.getPosition().x;
    int lowy = text.getPosition().y;

    int highx = lowx + text.getLocalBounds().width;
    int highy = lowy + text.getLocalBounds().height;

    std::cout << text.getLocalBounds().height << std::endl;
    std::cout << text.getLocalBounds().top << std::endl;


    if (x > lowx && x < highx &&
        y > lowy && y < highy) {
        return true;
    }

    return false;
}
