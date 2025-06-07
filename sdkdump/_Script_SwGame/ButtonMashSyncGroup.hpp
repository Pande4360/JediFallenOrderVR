#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "ButtonMashType.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct ButtonMashSyncGroup : public ButtonMashType {
    private: char pad_30[0x18]; public:
    int32_t& get_SyncGroupID();
    void* get_SyncGroupData();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x48
#pragma pack(pop)
}
