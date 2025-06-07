#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "RsCameraConditional.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct RsCameraConditional_IsInputActive : public RsCameraConditional {
    private: char pad_28[0x8]; public:
    float& get_DeactivateAfter();
    void* get_ActivationInputType();
    void* get_DeactivationInputType();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x30
#pragma pack(pop)
}
