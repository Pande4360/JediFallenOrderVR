#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_SwGame {
struct RsAbilityPriorityManager;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct RsAbilitySystem : public _Script_CoreUObject::Object {
    private: char pad_28[0x1f0]; public:
    void* get_EffectsInPlay();
    void* get_TasksInPlay();
    _Script_SwGame::RsAbilityPriorityManager*& get_PriorityManager();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x218
#pragma pack(pop)
}
