#pragma once

#include <vector>
#include <unordered_map>
#include <string>
#include <memory>
#include "EntityType.hpp"
#include "Entity.hpp"

class EntityManager
{
    public:
        EntityManager();
        // ~EntityManager();

        void Update();

        std::shared_ptr<Entity> AddEntity(EntityType tag);
        std::vector<std::shared_ptr<Entity>>& GetEntities();
        std::vector<std::shared_ptr<Entity>>& GetEntities(EntityType tag);
        bool RemoveEntity(EntityType tag);
    private:
        void Init();

        size_t m_totalEntities{0};
        std::vector<std::shared_ptr<Entity>> m_entities;
        std::vector<std::shared_ptr<Entity>> m_entitiesToAdd;
        std::unordered_map<EntityType, std::vector<std::shared_ptr<Entity>>> m_entityMap;
};

