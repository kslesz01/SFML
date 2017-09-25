#include "kgame.h"

KGame::KGame() : m_window(sf::VideoMode(800, 600), "KGame")
{

}

void KGame::init()
{
    m_player.setRadius(150);
    m_player.setFillColor(sf::Color::Blue);
    m_player.setPosition(10, 20);
}

void KGame::run()
{
    while(m_window.isOpen())
    {
        processEvents();
        update();
        render();
    }

}

void KGame::processEvents()
{
    sf::Event event;
    while(m_window.pollEvent(event))
    {
        if(event.type == sf::Event::Closed)
        {
            m_window.close();
        }
        else if(event.type == sf::Event::KeyPressed)
        {
            if(event.key.code == sf::Keyboard::Escape)
            {
                m_window.close();
            }
        }
    }
}

void KGame::update()
{

}

void KGame::render()
{
    m_window.clear();
    m_window.draw(m_player);
    m_window.display();
}
