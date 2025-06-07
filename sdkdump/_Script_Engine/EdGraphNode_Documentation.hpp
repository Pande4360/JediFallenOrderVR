#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "EdGraphNode.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct EdGraphNode_Documentation : public EdGraphNode {
    private: char pad_98[0x20]; public:
    void* get_Link();
    void* get_Excerpt();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xb8
#pragma pack(pop)
}
