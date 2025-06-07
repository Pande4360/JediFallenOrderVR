#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "RsBTTask_DirectMoveToBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsBTTask_DirectMoveToBlackboardBase : public RsBTTask_DirectMoveToBase {
    private: char pad_88[0x28]; public:
    void* get_TargetBlackboardKey();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xb0
#pragma pack(pop)
}
