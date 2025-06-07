#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\AnimNotify.hpp"
namespace _Script_Engine {
struct DataTable;
}
namespace _Script_AkAudio {
struct AkAudioEvent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct AnimNotify_RsSurfaceEffect : public _Script_Engine::AnimNotify {
    private: char pad_38[0x50]; public:
    _Script_Engine::DataTable*& get_EffectTable();
    void* get_SocketName();
    bool get_bMirrorDecal();
    void set_bMirrorDecal(bool value);
    void* get_DecalRotation();
    void* get_RayDirection();
    float& get_RayDistance();
    float& get_Radius();
    _Script_AkAudio::AkAudioEvent*& get_SoundEvent();
    _Script_AkAudio::AkAudioEvent*& get_FoliageSoundEvent();
    bool get_OcclusionEnabled();
    void set_OcclusionEnabled(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x88
#pragma pack(pop)
}
