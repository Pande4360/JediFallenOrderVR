#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_DialoguePlugin {
#pragma pack(push, 1)
struct DialogueGestureParams {
    private: char pad_0[0x58]; public:
    void* get_Asset();
    void* get_SlotNodeName();
    float& get_GestureStartDelay();
    float& get_StartPosition();
    float& get_BlendInTime();
    float& get_BlendOutTime();
    float& get_InPlayRate();
    int32_t& get_LoopCount();
    float& get_BlendOutTriggerTime();
    float& get_InTimeToStartMontageAt();
    void* get_BlendSpaceInput();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x58
#pragma pack(pop)
}
