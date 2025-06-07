#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "RsAIControllerBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsAITeamController : public RsAIControllerBase {
    private: char pad_488[0x8]; public:
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x490
#pragma pack(pop)
}
