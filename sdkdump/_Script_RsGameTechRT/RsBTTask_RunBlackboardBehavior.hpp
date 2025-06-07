#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_AIModule\BTTask_RunBehaviorDynamic.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsBTTask_RunBlackboardBehavior : public _Script_AIModule::BTTask_RunBehaviorDynamic {
    private: char pad_90[0x30]; public:
    void* get_BehaviorAssetKey();
    bool get_bClearBlackboardKeyOnInjection();
    void set_bClearBlackboardKeyOnInjection(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xc0
#pragma pack(pop)
}
