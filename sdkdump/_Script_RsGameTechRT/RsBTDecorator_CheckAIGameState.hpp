#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_AIModule\BTDecorator.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
struct RsAIGameStateManager;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsBTDecorator_CheckAIGameState : public _Script_AIModule::BTDecorator {
    private: char pad_68[0x10]; public:
    void* get_GameState();
    static _Script_CoreUObject::Class* static_class();
    void OnAIGameStateChanged(_Script_RsGameTechRT::RsAIGameStateManager* GameStateManager, void* PreviousGameState, void* NewGameState);
}; // Size: 0x78
#pragma pack(pop)
}
