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
struct BlueprintInputAxisKeyDelegateBinding : public BlueprintInputDelegateBinding {
    private: char pad_4[0x24]; public:
    void* get_AxisKey();
    void* get_FunctionNameToBind();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
