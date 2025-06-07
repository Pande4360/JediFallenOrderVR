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
struct RsBTService_ClearBlackboardKey : public _Script_AIModule::BTService {
    private: char pad_70[0x30]; public:
    void* get_BlackboardKey();
    bool get_bClearOnDeactivation();
    void set_bClearOnDeactivation(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xa0
#pragma pack(pop)
}
