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
struct RsCharacterAnimDataBase {
    private: char pad_0[0x40]; public:
    float& get_StartTime();
    bool get_PlayRandomAnimation();
    void set_PlayRandomAnimation(bool value);
    float& get_Playrate();
    bool get_bStopAnimOnAbort();
    void set_bStopAnimOnAbort(bool value);
    float& get_BlendInTime();
    float& get_BlendOutTime();
    int32_t& get_LoopCount();
    float& get_BlendOutTriggerTime();
    void* get_SlotNodeName();
    void* get_BlendSpaceInput();
    bool get_bUseMontage();
    void set_bUseMontage(bool value);
    bool get_bUseBlendSpace();
    void set_bUseBlendSpace(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x40
#pragma pack(pop)
}
