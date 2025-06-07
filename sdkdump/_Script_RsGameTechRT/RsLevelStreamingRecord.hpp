#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsLevelStreamingRecord {
    private: char pad_0[0x10]; public:
    void* get_Name();
    bool get_bShouldBeLoaded();
    void set_bShouldBeLoaded(bool value);
    bool get_bShouldBeVisible();
    void set_bShouldBeVisible(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x10
#pragma pack(pop)
}
