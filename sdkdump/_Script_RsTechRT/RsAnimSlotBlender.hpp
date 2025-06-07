#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\AnimNode_Base.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsTechRT {
#pragma pack(push, 1)
struct RsAnimSlotBlender : public _Script_Engine::AnimNode_Base {
    private: char pad_30[0x70]; public:
    float& get_Driver();
    float& get_TotalRange();
    void* get_Poses();
    void* get_PoseDeltaRange();
    void* get_PoseDeltaBlendMode();
    bool get_Loop();
    void set_Loop(bool value);
    float& get_Progress();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xa0
#pragma pack(pop)
}
