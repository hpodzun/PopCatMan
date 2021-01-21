//
// Created by Hans on 2021-01-21.
//

#include "TextureManager.h"

SDL_Texture* TextureManager::loadTexture(const char* texture, SDL_Renderer* renderer) {
    SDL_Surface* tmpSurface = IMG_Load(texture);
    SDL_Texture* newTexture = SDL_CreateTextureFromSurface(renderer, tmpSurface);
    SDL_FreeSurface(tmpSurface);

    return newTexture;
}
