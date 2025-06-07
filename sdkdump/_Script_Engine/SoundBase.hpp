#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_Engine {
struct SoundClass;
}
namespace _Script_Engine {
struct SoundConcurrency;
}
namespace _Script_Engine {
struct SoundAttenuation;
}
namespace _Script_Engine {
struct SoundSubmix;
}
namespace _Script_Engine {
struct SoundEffectSourcePresetChain;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct SoundBase : public _Script_CoreUObject::Object {
    private: char pad_28[0x80]; public:
    _Script_Engine::SoundClass*& get_SoundClassObject();
    bool get_bDebug();
    void set_bDebug(bool value);
    bool get_bOverrideConcurrency();
    void set_bOverrideConcurrency(bool value);
    bool get_bOutputToBusOnly();
    void set_bOutputToBusOnly(bool value);
    bool get_bIgnoreFocus();
    void set_bIgnoreFocus(bool value);
    bool get_bHasDelayNode();
    void set_bHasDelayNode(bool value);
    bool get_bHasConcatenatorNode();
    void set_bHasConcatenatorNode(bool value);
    bool get_bHasVirtualizeWhenSilent();
    void set_bHasVirtualizeWhenSilent(bool value);
    bool get_bBypassVolumeScaleForPriority();
    void set_bBypassVolumeScaleForPriority(bool value);
    _Script_Engine::SoundConcurrency*& get_SoundConcurrencySettings();
    void* get_ConcurrencyOverrides();
    float& get_Duration();
    float& get_MaxDistance();
    float& get_TotalSamples();
    float& get_Priority();
    _Script_Engine::SoundAttenuation*& get_AttenuationSettings();
    _Script_Engine::SoundSubmix*& get_SoundSubmixObject();
    void* get_SoundSubmixSends();
    _Script_Engine::SoundEffectSourcePresetChain*& get_SourceEffectChain();
    void* get_BusSends();
    void* get_PreEffectBusSends();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xa8
#pragma pack(pop)
}
