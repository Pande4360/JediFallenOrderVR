#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_RsGameTechRT\RsHeroComponent.hpp"
namespace _Script_AkAudio {
struct AkComponent;
}
namespace _Script_Engine {
struct ParticleSystemComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct AnimMontage;
}
namespace _Game_Characters_Hero_Logic_Components_Navigation_HC_Slide {
#pragma pack(push, 1)
struct HC_Slide_C : public _Script_RsGameTechRT::RsHeroComponent {
    private: char pad_180[0x40]; public:
    void* get_UberGraphFrame();
    bool get_slideLand();
    void set_slideLand(bool value);
    bool get_slideUpHillTumbling();
    void set_slideUpHillTumbling(bool value);
    void* get_SlideSpeed();
    void* get_PhysicalAnimationOperationParameters();
    void* get_CurrentSlideSpeed();
    _Script_AkAudio::AkComponent*& get_AkComponent_SFX_Slide();
    _Script_Engine::ParticleSystemComponent*& get_ParticleComponent();
    static _Script_CoreUObject::Class* static_class();
    void EndEffects();
    void StartEffects();
    void SlideUphillTumble(_Script_CoreUObject::Vector Rotation);
    void SlideStateEntered(void* NewState, void* PrevState);
    void SlideStateExited(void* NewState, void* PrevState);
    void EndSlideRumble();
    void EndSlideUphillTumbleEnter(_Script_Engine::AnimMontage* Montage, bool bInterrupted);
    void EndSlideUphillTumbleExit(_Script_Engine::AnimMontage* Montage, bool bInterrupted);
    void GroundStateEntered(void* NewState, void* PrevState);
    void SlideEnablePhysicalAnimation();
    void SlideDisablePhysicalAnimation();
    void SlideRumble();
    void StartSlideSpeed(void* NewSpeed);
    void SlideEnter();
    void ResetSlideSpeed();
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void SlideWalkBackDownExit(_Script_Engine::AnimMontage* Montage, bool bInterrupted);
    void ExecuteUbergraph_HC_Slide(int32_t EntryPoint);
}; // Size: 0x1c0
#pragma pack(pop)
}
