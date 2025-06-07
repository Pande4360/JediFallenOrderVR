#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "InterpTrackInstProperty.hpp"
namespace _Script_CoreUObject {
struct BoolProperty;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct InterpTrackInstBoolProp : public InterpTrackInstProperty {
    private: char pad_38[0x18]; public:
    _Script_CoreUObject::BoolProperty*& get_BoolProperty();
    bool get_ResetBool();
    void set_ResetBool(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x50
#pragma pack(pop)
}
