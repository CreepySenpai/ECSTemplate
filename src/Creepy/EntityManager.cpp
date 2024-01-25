#include <Creepy/EntityManager.hpp>
#include <ranges>

EntityManager::EntityManager(){

}

void EntityManager::Init(){
    
}

void EntityManager::Update(){

    for(auto& entity : m_entitiesToAdd){    // & may cause error
        m_entities.push_back(entity);
        m_entityMap[entity->Tag()].push_back(entity);
    }

    if(m_entitiesToAdd.size() > 0) {
        m_entitiesToAdd.clear();
    }

    std::ranges::remove_if(m_entities, [](auto& entity){
        return !entity->IsActive();
    });
    
}

std::shared_ptr<Entity> EntityManager::AddEntity(EntityType tag){
    // auto entity = std::make_shared<Entity>(tag, m_totalEntities++);
    auto entity = std::shared_ptr<Entity>(new Entity(tag, m_totalEntities++));
    m_entitiesToAdd.push_back(entity);
    return entity;
}

std::vector<std::shared_ptr<Entity>>& EntityManager::GetEntities(){
    return m_entities;
}

std::vector<std::shared_ptr<Entity>>& EntityManager::GetEntities(EntityType tag){
    return m_entityMap.at(tag);
}

bool EntityManager::RemoveEntity(EntityType tag) {
    // m_entityMap.at(tag).
    return true;
}