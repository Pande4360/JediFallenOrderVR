#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "EnvQueryNode.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AIModule {
#pragma pack(push, 1)
struct EnvQueryGenerator : public EnvQueryNode {
    private: char pad_30[0x20]; public:
    void* get_OptionName();
    void* get_ItemType();
    bool get_bAutoSortTests();
    void set_bAutoSortTests(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x50
#pragma pack(pop)
}
