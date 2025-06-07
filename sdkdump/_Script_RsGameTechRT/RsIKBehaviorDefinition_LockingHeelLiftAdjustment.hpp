#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "RsIKBehaviorDefinition.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsIKBehaviorDefinition_LockingHeelLiftAdjustment : public RsIKBehaviorDefinition {
    private: char pad_30[0x8]; public:
    bool get_bDebugDraw();
    void set_bDebugDraw(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x38
#pragma pack(pop)
}
