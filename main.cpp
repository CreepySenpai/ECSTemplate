#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <Creepy/Game.hpp>


int main(){
    Game game("ECS", 640, 640);
    game.Update();
    return 0;
}