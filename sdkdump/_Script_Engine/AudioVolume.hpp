#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "Volume.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct ReverbSettings;
}
namespace _Script_Engine {
struct InteriorSettings;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct AudioVolume : public Volume {
    private: char pad_398[0x50]; public:
    float& get_Priority();
    bool get_bEnabled();
    void set_bEnabled(bool value);
    void* get_Settings();
    void* get_AmbientZoneSettings();
    static _Script_CoreUObject::Class* static_class();
    void SetReverbSettings(_Script_Engine::ReverbSettings& NewReverbSettings);
    void SetPriority(float NewPriority);
    void SetInteriorSettings(_Script_Engine::InteriorSettings& NewInteriorSettings);
    void SetEnabled(bool bNewEnabled);
    void OnRep_bEnabled();
}; // Size: 0x3e8
#pragma pack(pop)
}
