#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Game_WorldInteracts_EventZones_Interact_Zone_Interact_Animated\Zone_Interact_Animated_C.hpp"
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_Engine {
struct CameraComponent;
}
namespace _Script_RsGameTechRT {
struct RsWorldMapStateTransitionGatewayComponent;
}
namespace _Script_Engine {
struct ParticleSystemComponent;
}
namespace _Script_Engine {
struct StaticMeshComponent;
}
namespace _Script_Engine {
struct TextRenderComponent;
}
namespace _Script_Engine {
struct ArrowComponent;
}
namespace _Script_Engine {
struct TimelineComponent;
}
namespace _Game_Characters_Hero_Logic_Components_General_HC_Cosmetics {
struct HC_Cosmetics_C;
}
namespace _Game_UI_UI_CosmeticCustomization {
struct UI_CosmeticCustomization_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct AnimMontage;
}
namespace _Game_WorldInteracts_LevelObjects_BP_CustomizationWorkbench {
#pragma pack(push, 1)
struct BP_CustomizationWorkbench_C : public _Game_WorldInteracts_EventZones_Interact_Zone_Interact_Animated::Zone_Interact_Animated_C {
    private: char pad_4a8[0xc0]; public:
    void* get_UberGraphFrame();
    _Script_Engine::SceneComponent*& get_SaberLocationStatic();
    _Script_RsGameTechRT::RsWorldMapStateTransitionGatewayComponent*& get_RsWorldMapStateTransitionGateway();
    _Script_Engine::ParticleSystemComponent*& get_ParticleSystem();
    _Script_Engine::ParticleSystemComponent*& get_P_Lightsaber_Magnetic_Stand();
    _Script_Engine::StaticMeshComponent*& get_Saber_Stand_02();
    _Script_Engine::StaticMeshComponent*& get_Lightsaber_Workbend_Stand_Open();
    _Script_Engine::ArrowComponent*& get_Arrow();
    _Script_Engine::SceneComponent*& get_SingleSaberRoot();
    _Script_Engine::TextRenderComponent*& get_TextRender();
    _Script_Engine::CameraComponent*& get_Camera();
    _Script_Engine::SceneComponent*& get_StaffSaberRoot();
    _Script_Engine::StaticMeshComponent*& get_Workbench_Mesh();
    float& get_LerpToLocation_Alpha_7DC4AEB64B9842814F113F827A116A3A();
    void* get_LerpToLocation__Direction_7DC4AEB64B9842814F113F827A116A3A();
    _Script_Engine::TimelineComponent*& get_LerpToLocation();
    _Game_Characters_Hero_Logic_Components_General_HC_Cosmetics::HC_Cosmetics_C*& get_HC_Cosmetics();
    void* get_StoredCosmeticLoadout();
    bool get_hideTemp();
    void set_hideTemp(bool value);
    void* get_BladeExtendTimer();
    bool get_SetSyncPointOnGround();
    void set_SetSyncPointOnGround(bool value);
    void* get_SyncPointOffsetIfNotOnGround();
    float& get_SaberSpinRate();
    void* get_SaberRootBaseRotation();
    _Game_UI_UI_CosmeticCustomization::UI_CosmeticCustomization_C*& get_UI_Cosmetics();
    static _Script_CoreUObject::Class* static_class();
    void CheckAchievements();
    void UserConstructionScript0();
    void LerpToLocation__FinishedFunc();
    void LerpToLocation__UpdateFunc();
    void ReceiveBeginPlay0();
    void BeginCustomization();
    void ApplyEmitterMesh(void* Enum);
    void ApplySleeveMesh(void* Enum);
    void ApplySwitchMesh(void* Enum);
    void EndCustomization();
    void SyncEnded0(_Script_Engine::AnimMontage* Montage, bool bInterrupted);
    void HideTempMesh();
    void ApplySaberMetal(void* Enum);
    void ApplySaberColor(void* Color);
    void LVL_RefreshCosmetics();
    void ExtendBlades();
    void ApplyCereMesh(void* Enum);
    void ContinueInteractSyncAnim0();
    void ReceiveTick(float DeltaSeconds);
    void SetLightsaberStandVisibility(bool bNewVisibility);
    void Interacted();
    void ReceiveEndPlay(void* EndPlayReason);
    void ExecuteUbergraph_BP_CustomizationWorkbench(int32_t EntryPoint);
}; // Size: 0x568
#pragma pack(pop)
}
