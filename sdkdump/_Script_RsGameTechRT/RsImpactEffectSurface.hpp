#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\TableRowBase.hpp"
namespace _Script_AkAudio {
struct AkAudioEvent;
}
namespace _Script_Engine {
struct DataTable;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsImpactEffectSurface : public _Script_Engine::TableRowBase {
    private: char pad_8[0x38]; public:
    bool get_LightSaberImpact();
    void set_LightSaberImpact(bool value);
    _Script_AkAudio::AkAudioEvent*& get_ImpactSound();
    _Script_Engine::DataTable*& get_SurfaceEffectTable();
    void* get_CameraShake();
    float& get_ForceFeedbackIntensity();
    float& get_ForceFeedbackDuration();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x40
#pragma pack(pop)
}
