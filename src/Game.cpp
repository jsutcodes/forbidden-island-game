#include "Game.hpp"
#include "util/Constants.hpp"


Game::Game():
    running(true) {
}

Game::~Game() {
    window.close();
}

int Game::run() {
    createWindow();

    sf::Clock clock;

    //level.start();
    while (running) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
                return EXIT_SUCCESS;
            }
            //level.onEvent(event);
        }

        window.clear();
        //level.update(clock.restart().asMilliseconds());
        //level.show(window);
        window.display();
    }
    return EXIT_SUCCESS;
}

void Game::createWindow() {
    if (window.isOpen())
        window.close();

    window.create(sf::VideoMode(APP_WIDTH, APP_HEIGHT), APP_TITLE, sf::Style::Close);
    window.setKeyRepeatEnabled(true);
    window.setFramerateLimit(APP_FPS);
}
