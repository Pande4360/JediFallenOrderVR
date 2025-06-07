#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_UI_GameMenu_Structs_ST_AncestorURL {
#pragma pack(push, 1)
struct ST_AncestorURL {
    private: char pad_0[0x10]; public:
    void* get_AncestorTag_2_EEE1023644F311643C57B885887460FB();
    int32_t& get_AncestorGeneration_5_34705CF6475B2433C304A0AC2FCFD14C();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x10
#pragma pack(pop)
}
