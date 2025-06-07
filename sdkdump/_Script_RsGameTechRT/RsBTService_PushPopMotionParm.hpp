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
struct RsBTService_PushPopMotionParm : public _Script_AIModule::BTService {
    private: char pad_70[0x38]; public:
    void* get_MotionParmName();
    void* get_MotionParmNameKey();
    bool get_bUseBlackboardKeyForName();
    void set_bUseBlackboardKeyForName(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xa8
#pragma pack(pop)
}
