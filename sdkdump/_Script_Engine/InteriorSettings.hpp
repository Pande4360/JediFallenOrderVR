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
struct InteriorSettings {
    private: char pad_0[0x24]; public:
    bool get_bIsWorldSettings();
    void set_bIsWorldSettings(bool value);
    float& get_ExteriorVolume();
    float& get_ExteriorTime();
    float& get_ExteriorLPF();
    float& get_ExteriorLPFTime();
    float& get_InteriorVolume();
    float& get_InteriorTime();
    float& get_InteriorLPF();
    float& get_InteriorLPFTime();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x24
#pragma pack(pop)
}
