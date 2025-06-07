#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "BlueprintInputDelegateBinding.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct BlueprintInputKeyDelegateBinding : public BlueprintInputDelegateBinding {
    private: char pad_4[0x34]; public:
    void* get_InputChord();
    void* get_InputKeyEvent();
    void* get_FunctionNameToBind();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x38
#pragma pack(pop)
}
