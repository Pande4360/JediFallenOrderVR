#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_SwGame {
struct SwCollisionDamageData;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwAbilityVictimData : public _Script_CoreUObject::Object {
    private: char pad_28[0x440]; public:
    void* get_PushGameplayData();
    void* get_PushFXData();
    void* get_PullGameplayData();
    void* get_PullFXData();
    void* get_SlowGameplayData();
    void* get_SlowFXData();
    void* get_TelekinesisGameplayData();
    void* get_TelekinesisFXData();
    _Script_SwGame::SwCollisionDamageData*& get_CollisionDamageData();
    void* get_DirectionAssistData();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x468
#pragma pack(pop)
}
