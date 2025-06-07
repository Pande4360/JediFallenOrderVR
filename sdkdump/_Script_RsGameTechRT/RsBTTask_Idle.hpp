#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_AIModule\BTTaskNode.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsBTTask_Idle : public _Script_AIModule::BTTaskNode {
    private: char pad_70[0x10]; public:
    float& get_Timeout();
    float& get_RandomDeviation();
    bool get_bUseTimeOut();
    void set_bUseTimeOut(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x80
#pragma pack(pop)
}
