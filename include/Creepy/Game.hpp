#pragma once

#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <iostream>
#include <map>
#include <memory>
#include "EntityManager.hpp"

class Game{
    private:
        sf::RenderWindow m_window;
        sf::Event m_event;

        EntityManager m_entities;
        std::shared_ptr<Entity> m_player{nullptr};
        
        bool m_isPause{false};
        bool m_isRunning{true};

        size_t m_width{0}, m_height{0};

        sf::CircleShape sh{30, 7};
        void Init();
        void MainLoop();

        // System
        void sMovement();
        void sUserInput();
        void sRender();
        void sEnemySpawner();
        void sCollision();
    public:
        explicit Game(const std::string &title, unsigned int width, unsigned int height) noexcept;
        virtual ~Game() = default;

        void Update();

};