#include <Creepy/Game.hpp>

Game::Game(const std::string &title, unsigned int width, unsigned int height) noexcept : m_width{width}, m_height{height} {
    m_window.create(sf::VideoMode(width, height), title);
    m_window.setFramerateLimit(60);
    m_window.setVerticalSyncEnabled(false);

    Init();
}

void Game::Init(){
    sh.setFillColor(sf::Color::Yellow);
    sh.setPosition(100.f, 100.f);
}

void Game::MainLoop(){
    m_entities.Update();

    sUserInput();

    sMovement();

    sCollision();

    sRender();
}

void Game::Update(){

    while(m_isRunning){

        
        
        MainLoop();
    }

}

void Game::sMovement() {

}

void Game::sUserInput() {
    while (m_window.pollEvent(m_event))
    {
        if (m_event.type == sf::Event::Closed)
        {
            m_isRunning = false;
        }
    }
}

void Game::sRender() {
    m_window.clear(sf::Color::Black);

    m_window.draw(sh);

    m_window.display();
}

void Game::sEnemySpawner() {

}

void Game::sCollision() {

}