#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsAICharacterAwarenessReactionAnimations {
    private: char pad_0[0x40]; public:
    void* get_PrimaryAmbientToAlertReaction();
    void* get_DefaultAmbientToAlertReaction();
    void* get_AlertToAmbientReaction();
    void* get_UnsheatheWeapon();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x40
#pragma pack(pop)
}
