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
struct RsHeroStateModifier_Modifications {
    private: char pad_0[0x58]; public:
    void* get_MotionTweaks();
    void* get_AttributeTags();
    void* get_CameraModeName();
    int32_t& get_CameraModePriority();
    void* get_FlagSets();
    bool get_bSetCollisionTweaks();
    void set_bSetCollisionTweaks(bool value);
    void* get_CollisionTweaks();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x58
#pragma pack(pop)
}
