#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\ActorComponent.hpp"
namespace _Game_Levels_WorldMap_BP_BP_WorldMapHologram {
struct BP_WorldMapHologram_C;
}
namespace _Script_RsGameTechRT {
struct RsWorldMapStaticMeshComponent;
}
namespace _Script_Engine {
struct StaticMeshComponent;
}
namespace _Script_Engine {
struct ParticleSystemComponent;
}
namespace _Script_Engine {
struct StaticMesh;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Vector;
}
namespace _Script_CoreUObject {
struct Rotator;
}
namespace _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_HologramCone {
#pragma pack(push, 1)
struct WMC_HologramCone_C : public _Script_Engine::ActorComponent {
    private: char pad_170[0xf0]; public:
    void* get_UberGraphFrame();
    _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C*& get_WorldMapHologram_Ref();
    _Script_RsGameTechRT::RsWorldMapStaticMeshComponent*& get_HologramMaskMeshComponent();
    _Script_Engine::StaticMeshComponent*& get_HologramConeNull();
    _Script_Engine::ParticleSystemComponent*& get_HologramCone();
    _Script_Engine::ParticleSystemComponent*& get_Main_HolotableCone();
    _Script_Engine::StaticMeshComponent*& get_HolotableConeRoot();
    _Script_Engine::ParticleSystemComponent*& get_HologramCone_Cine();
    float& get_LargeCone_X();
    float& get_LargeCone_Y();
    float& get_SmallCone_X();
    float& get_SmallCone_Y();
    float& get_MaskSphereSizeXY();
    float& get_MaskSphereSizeZ();
    float& get_LargeConeGlow_X();
    float& get_LargeConeGlow_Y();
    float& get_vertMovement();
    float& get_VertMovementTarget();
    float& get_fresnelSwitch();
    float& get_fresnelSwitchInterpSpeed();
    float& get_Cine_CamOffset();
    float& get_Cine_SmallCamOffset();
    bool get_StartHologramConeAnim();
    void set_StartHologramConeAnim(bool value);
    bool get_EndAnimStart();
    void set_EndAnimStart(bool value);
    bool get_bInitiateSphereSize();
    void set_bInitiateSphereSize(bool value);
    void* get_SmallConeColor();
    void* get_LargeConeColor();
    void* get_LargeConeGlowColor();
    bool get_bConeCine_();
    void set_bConeCine_(bool value);
    float& get_ConeAnimationLength();
    _Script_Engine::StaticMesh*& get_MantisCone();
    _Script_Engine::StaticMesh*& get_WhileOpenMask();
    _Script_Engine::StaticMesh*& get_OpeningConeMask();
    _Script_Engine::StaticMesh*& get_MantisSphere();
    float& get_SpeedMult();
    float& get_Subtractor();
    float& get_InitialMult();
    float& get_InitialMultSwitch();
    _Script_Engine::ParticleSystemComponent*& get_HologramCone_BD();
    static _Script_CoreUObject::Class* static_class();
    void SetMantisConeParameters(float base, float Fresnel);
    void EnableHolomapEmitters(bool Holomap_);
    void EnableEmitters();
    void DisableEmitters();
    void UpdateConeLocationAndRotation();
    void RampBackgorundDarkness();
    void OnWorldMapClosed();
    void OnMantisEnter();
    void UpdateLocationAndRotationOfCone();
    void SetHolotableParticle();
    void InitiateHolotableCones();
    void SetCineParticleSystemLocation();
    void FindBuddyDroidLocationAndRotation(_Script_CoreUObject::Vector& SocketLocation, _Script_CoreUObject::Rotator& Rotation);
    void DecideMaskFate();
    void SetLocationAndRotationOfCone();
    void OnTickHologramCone();
    void SetSphereTransforms();
    void EndAnimEvent();
    void FresnelSwitchEvent();
    void SetLargeConeGlowParameters(_Script_Engine::ParticleSystemComponent* System, float InterpMultiplier, float XSize, float YSize);
    void SetSmallConeParameters(_Script_Engine::ParticleSystemComponent* System, float InterpMultiplier, float XSize, float YSize);
    void SetLargeConeParameters(_Script_Engine::ParticleSystemComponent* System, float InterpMultiplier, float XSize, float YSize);
    void OpeningHologramConeAnimation(_Script_Engine::ParticleSystemComponent* HologramConeSystem);
    void ActivateHologramCone(_Script_Engine::ParticleSystemComponent* HologramConeSystem, bool IsCombat);
    void ZeroAllAnimParams();
    void ReceiveBeginPlay0();
    void StartTutorialCone();
    void EndTutorialCone();
    void TutorialConeDeactivated();
    void SetHologramConeBD();
    void ExecuteUbergraph_WMC_HologramCone(int32_t EntryPoint);
}; // Size: 0x260
#pragma pack(pop)
}
