#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_AIModule\BTService.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsBTService_UpdateLOS : public _Script_AIModule::BTService {
    private: char pad_70[0x50]; public:
    void* get_HasLOSToTargetKey();
    void* get_HasClearLOSToTargetKey();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xc0
#pragma pack(pop)
}
