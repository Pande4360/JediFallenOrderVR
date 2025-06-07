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
struct RsBTService_Investigate : public _Script_AIModule::BTService {
    private: char pad_70[0x58]; public:
    void* get_LastKnownLocationKey();
    void* get_InvestigateModeKey();
    float& get_DistanceToRestartSearch();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xc8
#pragma pack(pop)
}
