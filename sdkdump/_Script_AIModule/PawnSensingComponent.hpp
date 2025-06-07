#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\ActorComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AIModule {
#pragma pack(push, 1)
struct PawnSensingComponent : public _Script_Engine::ActorComponent {
    private: char pad_170[0x48]; public:
    float& get_HearingThreshold();
    float& get_LOSHearingThreshold();
    float& get_SightRadius();
    float& get_SensingInterval();
    float& get_HearingMaxSoundAge();
    bool get_bEnableSensingUpdates();
    void set_bEnableSensingUpdates(bool value);
    bool get_bOnlySensePlayers();
    void set_bOnlySensePlayers(bool value);
    bool get_bSeePawns();
    void set_bSeePawns(bool value);
    bool get_bHearNoises();
    void set_bHearNoises(bool value);
    void* get_OnSeePawn();
    void* get_OnHearNoise();
    float& get_PeripheralVisionAngle();
    float& get_PeripheralVisionCosine();
    static _Script_CoreUObject::Class* static_class();
    void SetSensingUpdatesEnabled(bool bEnabled);
    void SetSensingInterval(float NewSensingInterval);
    void SetPeripheralVisionAngle(float NewPeripheralVisionAngle);
    float GetPeripheralVisionCosine();
    float GetPeripheralVisionAngle();
}; // Size: 0x1b8
#pragma pack(pop)
}
