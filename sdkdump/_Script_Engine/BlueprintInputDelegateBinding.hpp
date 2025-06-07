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
struct BlueprintInputDelegateBinding {
    private: char pad_0[0x4]; public:
    bool get_bConsumeInput();
    void set_bConsumeInput(bool value);
    bool get_bExecuteWhenPaused();
    void set_bExecuteWhenPaused(bool value);
    bool get_bOverrideParentBinding();
    void set_bOverrideParentBinding(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x4
#pragma pack(pop)
}
