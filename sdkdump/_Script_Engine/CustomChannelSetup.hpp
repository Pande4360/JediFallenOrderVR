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
struct CustomChannelSetup {
    private: char pad_0[0x18]; public:
    void* get_Channel();
    void* get_Name();
    void* get_DefaultResponse();
    bool get_bTraceType();
    void set_bTraceType(bool value);
    bool get_bStaticObject();
    void set_bStaticObject(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x18
#pragma pack(pop)
}
