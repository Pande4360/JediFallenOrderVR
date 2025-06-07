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
struct RsStreamingArea {
    private: char pad_0[0x30]; public:
    void* get_AreaName();
    bool get_bIgnoreUnloadByOmission();
    void set_bIgnoreUnloadByOmission(bool value);
    bool get_bInitiallyLoaded();
    void set_bInitiallyLoaded(bool value);
    void* get_InitialLoadType();
    void* get_InitialLoadTokens();
    void* get_LevelsToLoad();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x30
#pragma pack(pop)
}
