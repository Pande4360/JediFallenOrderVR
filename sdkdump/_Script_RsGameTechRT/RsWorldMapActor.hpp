#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Actor.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsWorldMapActor : public _Script_Engine::Actor {
    private: char pad_360[0x8]; public:
    bool get_bKeepOnStaticLayer();
    void set_bKeepOnStaticLayer(bool value);
    int32_t& get_StaticLayerOverride();
    static _Script_CoreUObject::Class* static_class();
    void SetVisible();
    void ApplyRuntimeSettings();
}; // Size: 0x368
#pragma pack(pop)
}
