#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_Engine {
struct AnimSequenceBase;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsAIPOIBehaviorData {
    private: char pad_0[0xb8]; public:
    bool get_bRandomStartTimeForLoopSection();
    void set_bRandomStartTimeForLoopSection(bool value);
    void* get_AnimData();
    void* get_MontageExitSectionName();
    void* get_ExitAnimData();
    bool get_bUseOverrideDeathAnim();
    void set_bUseOverrideDeathAnim(bool value);
    _Script_Engine::AnimSequenceBase*& get_OverrideDeathAnim();
    void* get_MotionParmName();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xb8
#pragma pack(pop)
}
