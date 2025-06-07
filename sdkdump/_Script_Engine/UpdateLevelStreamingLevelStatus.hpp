#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct UpdateLevelStreamingLevelStatus {
    private: char pad_0[0x10]; public:
    void* get_PackageName();
    int32_t& get_LODIndex();
    bool get_bNewShouldBeLoaded();
    void set_bNewShouldBeLoaded(bool value);
    bool get_bNewShouldBeVisible();
    void set_bNewShouldBeVisible(bool value);
    bool get_bNewShouldBlockOnLoad();
    void set_bNewShouldBlockOnLoad(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x10
#pragma pack(pop)
}
