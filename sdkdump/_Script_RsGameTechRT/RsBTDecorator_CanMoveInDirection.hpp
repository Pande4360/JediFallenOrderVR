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
struct RsBTDecorator_CanMoveInDirection : public _Script_AIModule::BTDecorator {
    private: char pad_68[0x18]; public:
    float& get_OffsetAngle();
    float& get_TestDistance();
    float& get_OverrideMaxProjectionHeight();
    bool get_bUseOverrideMaxProjectionHeight();
    void set_bUseOverrideMaxProjectionHeight(bool value);
    bool get_bIncludeActorRadius();
    void set_bIncludeActorRadius(bool value);
    void* get_FilterClass();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x80
#pragma pack(pop)
}
