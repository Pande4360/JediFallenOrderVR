#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_RsGameTechRT\RsCameraBehavior.hpp"
namespace _Script_SwGame {
struct RsCameraConditional;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct R4CameraBehavior_BranchingCameraBehavior : public _Script_RsGameTechRT::RsCameraBehavior {
    private: char pad_30[0x80]; public:
    _Script_SwGame::RsCameraConditional*& get_Conditional();
    void* get_TrueBehaviors();
    float& get_TrueBlendInTime();
    bool get_TrueApplyBlendAsOffset();
    void set_TrueApplyBlendAsOffset(bool value);
    void* get_FalseBehaviors();
    float& get_FalseBlendInTime();
    bool get_FalseApplyBlendAsOffset();
    void set_FalseApplyBlendAsOffset(bool value);
    static _Script_CoreUObject::Class* static_class();
    void GetBlendParameters(float& OutBlendTime, bool& bOutApplyBlendAsOffset, bool bBoolean);
    void* GetBehaviors(bool bBoolean);
}; // Size: 0xb0
#pragma pack(pop)
}
