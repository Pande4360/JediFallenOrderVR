#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_Engine {
struct AnimationAsset;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct RsDynamicMontageData {
    private: char pad_0[0x38]; public:
    _Script_Engine::AnimationAsset*& get_AnimationAsset();
    void* get_SlotName();
    float& get_StartPosition();
    float& get_BlendInTime();
    float& get_BlendOutTime();
    float& get_Playrate();
    int32_t& get_LoopCount();
    float& get_BlendOutTriggerTime();
    float& get_TimeToStartMontageAt();
    void* get_BlendSpaceInput();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x38
#pragma pack(pop)
}
