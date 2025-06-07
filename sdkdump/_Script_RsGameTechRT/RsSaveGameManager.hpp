#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\RsSaveGameManagerBase.hpp"
namespace _Script_RsGameTechRT {
struct RsSaveGameObject;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsSaveGameManager : public _Script_Engine::RsSaveGameManagerBase {
    private: char pad_58[0x1a0]; public:
    _Script_RsGameTechRT::RsSaveGameObject*& get_CurrentSaveObject();
    void* get_ActorRecords();
    void* get_PendingActorRecords();
    void* get_PendingBeginPlayActorsToSave();
    void* get_CachedSaveSlotInfo();
    static _Script_CoreUObject::Class* static_class();
    void OnRegisteredActorEndPlay(_Script_Engine::Actor* Actor, void* EndPlayReason);
}; // Size: 0x1f8
#pragma pack(pop)
}
