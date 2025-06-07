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
struct AnimState_Swim {
    private: char pad_0[0x18]; public:
    void* get_CurrentState();
    float& get_DesiredPitchAngle();
    float& get_DiveUpAnimationTime();
    float& get_DiveDownAnimationTime();
    float& get_BoostUnderwaterAnimationTime();
    bool get_AnticipateSwimAfterCinematic();
    void set_AnticipateSwimAfterCinematic(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x18
#pragma pack(pop)
}
