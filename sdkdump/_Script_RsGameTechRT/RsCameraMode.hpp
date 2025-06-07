#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsCameraMode : public _Script_CoreUObject::Object {
    private: char pad_28[0x48]; public:
    void* get_ModeName();
    float& get_BlendInTime();
    float& get_FocusTraceSize();
    bool get_bBaseRelative();
    void set_bBaseRelative(bool value);
    bool get_bApplyCameraShakes();
    void set_bApplyCameraShakes(bool value);
    bool get_bApplyTimeDeltaWhileGamePaused();
    void set_bApplyTimeDeltaWhileGamePaused(bool value);
    bool get_bResetRollOnBegin();
    void set_bResetRollOnBegin(bool value);
    bool get_bResetRollOnEnd();
    void set_bResetRollOnEnd(bool value);
    bool get_bAllowCameraObstructionCheck();
    void set_bAllowCameraObstructionCheck(bool value);
    void* get_ViewTargetRotationUpdateMethod();
    void* get_MotionParms();
    void* get_Aliases();
    void* get_Behaviors();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x70
#pragma pack(pop)
}
