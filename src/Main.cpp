#include <iostream>
#include <SDL.h>
#include <SDL_image.h>
#include <SDL_ttf.h> 
#include <SDL_mixer.h>
#include <glm/glm.hpp>
#include <imgui/imgui.h>
#include <sol/sol.hpp>

 
int main() 
{
    sol::state lua;
    lua.open_libraries(sol::lib::base);

    SDL_Init(SDL_INIT_EVERYTHING);

    glm::vec2 veclocity = glm::vec2(100.0f, 100.0f);

    std::cout << "Hello, world!" << std::endl;
    return 0;
}