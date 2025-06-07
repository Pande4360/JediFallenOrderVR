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
struct RsBTService_POIRootBehavior : public _Script_AIModule::BTService {
    private: char pad_70[0x88]; public:
    void* get_POIKey();
    void* get_POISyncRotationKey();
    bool get_bShouldTickPOIKeyUpdate();
    void set_bShouldTickPOIKeyUpdate(bool value);
    void* get_MotionParmNameKey();
    bool get_bUsePOIWhenDeactivated();
    void set_bUsePOIWhenDeactivated(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xf8
#pragma pack(pop)
}
