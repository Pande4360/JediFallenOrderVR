#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\TableRowBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwLightsaberMarkSurfaceInfo : public _Script_Engine::TableRowBase {
    private: char pad_8[0x58]; public:
    void* get_DecalMaterial();
    void* get_ParticleEffect();
    float& get_ParticleOffsetAlongNormal();
    bool get_bPlayAudio();
    void set_bPlayAudio(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x60
#pragma pack(pop)
}
