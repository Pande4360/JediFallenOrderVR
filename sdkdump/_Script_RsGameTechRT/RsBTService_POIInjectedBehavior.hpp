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
struct RsBTService_POIInjectedBehavior : public _Script_AIModule::BTService {
    private: char pad_70[0x8]; public:
    bool get_bUsePOIWhenDeactivated();
    void set_bUsePOIWhenDeactivated(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x78
#pragma pack(pop)
}
