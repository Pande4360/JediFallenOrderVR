#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\AnimNode_Base.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AnimGraphRuntime {
#pragma pack(push, 1)
struct AnimNode_Slot : public _Script_Engine::AnimNode_Base {
    private: char pad_30[0x40]; public:
    void* get_Source();
    void* get_SlotName();
    void* get_ReferenceBoneName();
    bool get_bAlwaysUpdateSourcePose();
    void set_bAlwaysUpdateSourcePose(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x70
#pragma pack(pop)
}
