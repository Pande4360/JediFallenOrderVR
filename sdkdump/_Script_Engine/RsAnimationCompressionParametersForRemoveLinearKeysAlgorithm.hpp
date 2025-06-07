#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct RsAnimationCompressionParametersForRemoveLinearKeysAlgorithm {
    private: char pad_0[0x20]; public:
    float& get_MaxPosDiff();
    float& get_MaxAngleDiff();
    float& get_MaxScaleDiff();
    float& get_MaxEffectorDiff();
    float& get_MinEffectorDiff();
    float& get_EffectorDiffSocket();
    float& get_ParentKeyScale();
    bool get_bRetarget();
    void set_bRetarget(bool value);
    bool get_bActuallyFilterLinearKeys();
    void set_bActuallyFilterLinearKeys(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x20
#pragma pack(pop)
}
