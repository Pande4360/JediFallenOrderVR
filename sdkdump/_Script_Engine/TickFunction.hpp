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
struct TickFunction {
    private: char pad_0[0x60]; public:
    void* get_TickGroup();
    void* get_EndTickGroup();
    bool get_bTickEvenWhenPaused();
    void set_bTickEvenWhenPaused(bool value);
    bool get_bCanEverTick();
    void set_bCanEverTick(bool value);
    bool get_bStartWithTickEnabled();
    void set_bStartWithTickEnabled(bool value);
    bool get_bAllowTickOnDedicatedServer();
    void set_bAllowTickOnDedicatedServer(bool value);
    float& get_TickInterval();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x60
#pragma pack(pop)
}
