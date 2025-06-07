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
struct AnimState_Zipline {
    private: char pad_0[0x8]; public:
    void* get_CurrentAttachmentState();
    void* get_CurrentAnimationState();
    void* get_MovementDirection();
    void* get_EntryType();
    float& get_IdleSwingAmount();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x8
#pragma pack(pop)
}
