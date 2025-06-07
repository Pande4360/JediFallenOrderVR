#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_OnlineSubsystemUtils {
#pragma pack(push, 1)
struct PlayerReservation {
    private: char pad_0[0x50]; public:
    void* get_UniqueId();
    void* get_ValidationStr();
    void* get_Platform();
    bool get_bAllowCrossplay();
    void set_bAllowCrossplay(bool value);
    float& get_ElapsedTime();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x50
#pragma pack(pop)
}
