#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_SwGame {
struct SwAIController;
}
namespace _Script_RsGameTechRT {
struct RsCharacter;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwAIBlueprintLibrary : public _Script_Engine::BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    _Script_SwGame::SwAIController* GetSwAIController(_Script_Engine::Actor* ControlledActor);
    void* GetAttackingAIForActor(_Script_RsGameTechRT::RsCharacter* Character);
    void* FindAICombatAwarenessGroup(_Script_SwGame::SwAIController* AIController, void* CharacterType, float Radius);
}; // Size: 0x28
#pragma pack(pop)
}
