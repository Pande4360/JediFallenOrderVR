#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "BTAuxiliaryNode.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AIModule {
#pragma pack(push, 1)
struct BTDecorator : public BTAuxiliaryNode {
    private: char pad_60[0x8]; public:
    bool get_bInverseCondition();
    void set_bInverseCondition(bool value);
    void* get_FlowAbortMode();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x68
#pragma pack(pop)
}
