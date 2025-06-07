#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwAIFightResourceWeights {
    private: char pad_0[0x2c]; public:
    float& get_CharacterType();
    float& get_Distance();
    float& get_CanAttack();
    float& get_QueueTime();
    float& get_LockoutInactive();
    float& get_OnScreen();
    float& get_LastDamagedBy();
    float& get_ZTargeted();
    float& get_Ambusher();
    float& get_PostSync();
    float& get_Wildcard();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x2c
#pragma pack(pop)
}
