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
struct QueuedDrawDebugItem {
    private: char pad_0[0x68]; public:
    void* get_ItemType();
    void* get_StartLoc();
    void* get_EndLoc();
    void* get_Center();
    void* get_Rotation();
    float& get_Radius();
    float& get_Size();
    int32_t& get_Segments();
    void* get_Color();
    bool get_bPersistentLines();
    void set_bPersistentLines(bool value);
    float& get_LifeTime();
    float& get_Thickness();
    void* get_Message();
    void* get_TextScale();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x68
#pragma pack(pop)
}
