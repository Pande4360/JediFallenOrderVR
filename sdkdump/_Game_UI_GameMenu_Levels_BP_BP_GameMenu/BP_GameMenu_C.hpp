#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "..\_Script_Engine\Actor.hpp"
namespace _Script_Engine {
struct StaticMeshComponent;
}
namespace _Script_Engine {
struct PointLightComponent;
}
namespace _Script_Engine {
struct PostProcessComponent;
}
namespace _Script_Engine {
struct ParticleSystemComponent;
}
namespace _Script_Engine {
struct BoxComponent;
}
namespace _Script_Engine {
struct ChildActorComponent;
}
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_Engine {
struct CurveFloat;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct MeshComponent;
}
namespace _Game_UI_GameMenu_Levels_BP_BP_GameMenu {
#pragma pack(push, 1)
struct BP_GameMenu_C : public _Script_Engine::Actor {
    private: char pad_360[0x1f8]; public:
    void* get_UberGraphFrame();
    _Script_Engine::StaticMeshComponent*& get_CircleMesh();
    _Script_Engine::StaticMeshComponent*& get_StaticMesh();
    _Script_Engine::StaticMeshComponent*& get_Floor();
    _Script_Engine::PointLightComponent*& get_UIMenuLight();
    _Script_Engine::StaticMeshComponent*& get_SurroundingCube();
    _Script_Engine::PostProcessComponent*& get_PPC_GameMenu();
    _Script_Engine::BoxComponent*& get_PPV_GameMenu();
    _Script_Engine::ParticleSystemComponent*& get_P_Void_Save_Ambient();
    _Script_Engine::ChildActorComponent*& get_RotatingSpheres();
    _Script_Engine::ParticleSystemComponent*& get_Stars();
    _Script_Engine::StaticMeshComponent*& get_Tertiary();
    _Script_Engine::StaticMeshComponent*& get_Secondary();
    _Script_Engine::StaticMeshComponent*& get_MainShape();
    _Script_Engine::SceneComponent*& get_DefaultSceneRoot();
    void* get_MainStartingLocation();
    void* get_MainEndingLocation();
    void* get_SecondaryStartingLocation();
    void* get_SecondaryEndingLocation();
    void* get_TertiaryStartingLocation();
    void* get_TertiaryEndingLocation();
    float& get_LocationLerp();
    bool get_run();
    void set_run(bool value);
    float& get_FloatLerpAmount();
    void* get_RingRotation();
    bool get_Update_Start_Location();
    void set_Update_Start_Location(bool value);
    bool get_Update_End_Location();
    void set_Update_End_Location(bool value);
    bool get_Update_Locations();
    void set_Update_Locations(bool value);
    void* get_SecondaryRelativeRingRotation();
    void* get_MainRelativeRingRotation();
    void* get_TertiaryRelativeRingRotation();
    float& get_MainStartingScale();
    float& get_MainEndingScale();
    float& get_SecondaryStartingScale();
    float& get_SecondaryEndingScale();
    float& get_TeriaryStartingScale();
    float& get_TeriaryEndingScale();
    float& get_ScaleLerp();
    _Script_Engine::CurveFloat*& get_Curve();
    void* get_MainRingColor();
    float& get_MainEmissiveMultiplier();
    float& get_MainOpacity();
    void* get_SecondaryRingColor();
    float& get_SecondaryEmissiveMultiplier();
    float& get_SecondaryOpacity();
    void* get_TertiaryRingColor();
    float& get_TertiaryEmissiveMultiplier();
    float& get_TertiaryOpacity();
    float& get_Overall_Temperature();
    float& get_Saturation();
    float& get_Contrast();
    float& get_ChromaticAbberationIntensity();
    float& get_FocalDistance();
    float& get_FocalRegion();
    float& get_NearTransitionRegion();
    float& get_FarTransitionRegion();
    float& get_BlurScale();
    float& get_ChromaticAbberationIntensity_Internal();
    float& get_IntroSpeed();
    float& get_MainRotationSpeed();
    float& get_SecondaryRotationSpeed();
    float& get_TertiaryRotationSpeed();
    void* get_SubtractVectorAmount();
    void* get_MovementForCamera();
    float& get_MovementLerp();
    void* get_MovementForNoise();
    void* get_CircleMeshLocation();
    void* get_CameraMovement();
    void* get_CameraMode();
    float& get_FOV();
    static _Script_CoreUObject::Class* static_class();
    void ChangeBlur(void* Method, float Blur_Scale);
    void SetPostProcessValues(float Temp, float Saturation, float Contrast, float ChromaticAbberationIntensity, float Focal_Distance, float Focal_Region, float Near_Transition_Region, float Far_Transition_Region, float Blur_Scale);
    void SetRingMaterialParameters(_Script_Engine::MeshComponent* Target, _Script_CoreUObject::LinearColor RingColor, float Emissive, float Opacity);
    void UserConstructionScript0();
    void ReceiveBeginPlay0();
    void ReceiveTick0(float DeltaSeconds);
    void TEsting(bool Filler);
    void MoveSpheres();
    void SetRingLocations();
    void SetRingScale();
    void SetTickable();
    void OnMenuOpen();
    void PostProcessTick();
    void SetRingRotation();
    void Initialize();
    void SetParticleSystemParams();
    void AnimateCamera();
    void MoveNoiseVector();
    void ExecuteUbergraph_BP_GameMenu(int32_t EntryPoint);
}; // Size: 0x558
#pragma pack(pop)
}
