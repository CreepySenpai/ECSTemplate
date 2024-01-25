#pragma once


#include <memory>

#include <SFML/Graphics.hpp>
#include <Components/Transform.hpp>
#include <Components/Collision.hpp>
#include <Components/Score.hpp>
#include <Components/Input.hpp>
#include <Components/LifeSpan.hpp>
#include <Components/Shape.hpp>
#include "EntityType.hpp"

class Entity
{
    public:

        void Destroy();
        bool IsActive() const;
        EntityType Tag() const;
        size_t Id() const;

        std::shared_ptr<Collision> cCollision{nullptr};
        std::shared_ptr<Transform> cTransform{nullptr};
        std::shared_ptr<Score> cScore{nullptr};
        std::shared_ptr<Shape> cShape{nullptr};
        std::shared_ptr<Input> cInput{nullptr};
        std::shared_ptr<LifeSpan> cLifeSpan{nullptr};

        friend class EntityManager;     // only entity manager create entity
    private:

        Entity();
        Entity(EntityType tag, size_t id);
        EntityType m_tag{EntityType::DEFAULT};
        size_t m_id{0};
        bool m_active{true};
};