#ifndef KGAME_H
#define KGAME_H

#include <SFML/Graphics.hpp>

class KGame
{
public:
    KGame();
    KGame(const KGame&) = delete;
    KGame& operator=(const KGame&) = delete;

    void init();
    void run();

private:
    void processEvents();
    void update();
    void render();

    sf::RenderWindow m_window;
    sf::CircleShape m_player;
};

#endif // KGAME_H
