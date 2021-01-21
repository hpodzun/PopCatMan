//
// Created by Hans on 2021-01-21.
//

#ifndef POPCATMAN_TEXTUREMANAGER_H
#define POPCATMAN_TEXTUREMANAGER_H

#include <SDL_image.h>

class TextureManager {
public:
    static SDL_Texture* loadTexture(const char* fileName, SDL_Renderer* renderer);
};

#endif //POPCATMAN_TEXTUREMANAGER_H
