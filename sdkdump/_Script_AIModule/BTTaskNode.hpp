#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "BTNode.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AIModule {
#pragma pack(push, 1)
struct BTTaskNode : public BTNode {
    private: char pad_58[0x18]; public:
    void* get_Services();
    bool get_bIgnoreRestartSelf();
    void set_bIgnoreRestartSelf(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x70
#pragma pack(pop)
}
