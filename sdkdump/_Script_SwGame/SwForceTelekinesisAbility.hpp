#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "RsAbility.hpp"
namespace _Script_Engine {
struct DataTable;
}
namespace _Script_Engine {
struct AnimMontage;
}
namespace _Script_AkAudio {
struct AkAudioEvent;
}
namespace _Script_RsGameTechRT {
struct RsPhysicalAnimationProfile;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwForceTelekinesisAbility : public RsAbility {
    private: char pad_b8[0x130]; public:
    _Script_Engine::DataTable*& get_WeightTable();
    bool get_bShouldPauseForce();
    void set_bShouldPauseForce(bool value);
    _Script_Engine::AnimMontage*& get_SuccessAnimation();
    _Script_Engine::AnimMontage*& get_TKCharacterAnimation();
    _Script_Engine::AnimMontage*& get_HeavyTKCharacterAnimation();
    _Script_Engine::AnimMontage*& get_FailAnimation();
    void* get_OutSection();
    void* get_DropSection();
    void* get_EffectType();
    void* get_ShakeType();
    float& get_TimeUntilForceUsageOverTimeTriggers();
    bool get_bUsePhysicalAnimation();
    void set_bUsePhysicalAnimation(bool value);
    bool get_bIgnoreObjectChannel();
    void set_bIgnoreObjectChannel(bool value);
    bool get_bTopologyTraceChannel();
    void set_bTopologyTraceChannel(bool value);
    void* get_IgnoreObjectChannel();
    void* get_TopologyTraceChannel();
    _Script_AkAudio::AkAudioEvent*& get_ForceTKCastEvent();
    _Script_AkAudio::AkAudioEvent*& get_ForceTKCastStopEvent();
    _Script_RsGameTechRT::RsPhysicalAnimationProfile*& get_PhysicalAnimationProfileTelekinesis();
    float& get_TurnDuration();
    static _Script_CoreUObject::Class* static_class();
    void OnForceMeterBarEmptied(void* ResponsibleForceName, float TimeUntilForceRegen);
}; // Size: 0x1e8
#pragma pack(pop)
}
