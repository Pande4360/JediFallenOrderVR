#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "PlatformInterfaceBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct InGameAdManager : public PlatformInterfaceBase {
    private: char pad_38[0x28]; public:
    bool get_bShouldPauseWhileAdOpen();
    void set_bShouldPauseWhileAdOpen(bool value);
    void* get_ClickedBannerDelegates();
    void* get_ClosedAdDelegates();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x60
#pragma pack(pop)
}
