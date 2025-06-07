#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_AIModule\AIController.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsAIControllerBase : public _Script_AIModule::AIController {
    private: char pad_480[0x8]; public:
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x488
#pragma pack(pop)
}
