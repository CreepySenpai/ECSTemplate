#include <Creepy/Entity.hpp>

Entity::Entity(){

}

Entity::Entity(EntityType tag, size_t id) : m_tag{tag}, m_id{id}{

}

void Entity::Destroy() {
    m_active = false;
}

bool Entity::IsActive() const {
    return m_active;
}

EntityType Entity::Tag() const {
    return m_tag;
}

size_t Entity::Id() const {
    return m_id;
}