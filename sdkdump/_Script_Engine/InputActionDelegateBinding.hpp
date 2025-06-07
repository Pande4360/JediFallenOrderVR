#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "InputDelegateBinding.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct InputActionDelegateBinding : public InputDelegateBinding {
    private: char pad_28[0x10]; public:
    void* get_InputActionDelegateBindings();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x38
#pragma pack(pop)
}
