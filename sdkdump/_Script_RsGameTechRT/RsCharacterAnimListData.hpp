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
struct RsCharacterAnimListData {
    private: char pad_0[0x30]; public:
    void* get_AnimationList();
    void* get_AnimationSlot();
    float& get_StartPosition();
    float& get_BlendInTime();
    float& get_BlendOutTime();
    float& get_Playrate();
    float& get_BlendOutTriggerTime();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x30
#pragma pack(pop)
}
