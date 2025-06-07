#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_AIModule\BTDecorator.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsBTDecorator_CheckAwarenessOf : public _Script_AIModule::BTDecorator {
    private: char pad_68[0x40]; public:
    void* get_ActorKey();
    void* get_Comparison();
    float& get_AwarenessValue();
    float& get_MinAwarenessValue();
    float& get_MaxAwarenessValue();
    bool get_bIsRangeCheck();
    void set_bIsRangeCheck(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xa8
#pragma pack(pop)
}
