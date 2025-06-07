#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_Engine {
struct PlayerController;
}
namespace _Script_OnlineSubsystemUtils {
#pragma pack(push, 1)
struct TurnBasedBlueprintLibrary : public _Script_Engine::BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    void RegisterTurnBasedMatchInterfaceObject(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::PlayerController* PlayerController, _Script_CoreUObject::Object* Object);
    void GetPlayerDisplayName(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::PlayerController* PlayerController, void* MatchID, int32_t PlayerIndex, void*& PlayerDisplayName);
    void GetMyPlayerIndex(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::PlayerController* PlayerController, void* MatchID, int32_t& PlayerIndex);
    void GetIsMyTurn(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::PlayerController* PlayerController, void* MatchID, bool& bIsMyTurn);
}; // Size: 0x28
#pragma pack(pop)
}
