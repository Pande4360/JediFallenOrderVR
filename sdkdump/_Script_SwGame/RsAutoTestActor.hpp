#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Actor.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_GameplayTags {
struct GameplayTag;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct RsAutoTestActor : public _Script_Engine::Actor {
    private: char pad_360[0x130]; public:
    static _Script_CoreUObject::Class* static_class();
    void TagRemoved(_Script_GameplayTags::GameplayTag& Tag);
    void TagAdded(_Script_GameplayTags::GameplayTag& Tag);
}; // Size: 0x490
#pragma pack(pop)
}
