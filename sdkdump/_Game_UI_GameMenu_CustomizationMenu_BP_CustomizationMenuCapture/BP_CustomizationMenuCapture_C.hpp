#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Game_GlobalData_Cosmetics_Struct_CosmeticLoadout\Struct_CosmeticLoadout.hpp"
#include "..\_Script_SwGame\R4GameplayTagActor.hpp"
namespace _Script_Engine {
struct ArrowComponent;
}
namespace _Script_Engine {
struct PointLightComponent;
}
namespace _Script_Engine {
struct SpotLightComponent;
}
namespace _Script_Engine {
struct SceneCaptureComponent2D;
}
namespace _Script_Engine {
struct StaticMeshComponent;
}
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_Engine {
struct SkeletalMeshComponent;
}
namespace _Script_Engine {
struct SkyLightComponent;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_Engine {
struct TextureRenderTarget2D;
}
namespace _Game_UI_GameMenu_CustomizationMenu_AB_Hero_Customization {
struct AB_Hero_Customization_C;
}
namespace _Script_Engine {
struct SkeletalMesh;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct PrimitiveComponent;
}
namespace _Game_UI_GameMenu_CustomizationMenu_BP_CustomizationMenuCapture {
#pragma pack(push, 1)
struct BP_CustomizationMenuCapture_C : public _Script_SwGame::R4GameplayTagActor {
    private: char pad_388[0x2c8]; public:
    void* get_UberGraphFrame();
    _Script_Engine::PointLightComponent*& get_Lower_Fill();
    _Script_Engine::SpotLightComponent*& get_Eyez_Light();
    _Script_Engine::SpotLightComponent*& get_Mntis_Rim();
    _Script_Engine::SpotLightComponent*& get_Mantis_Top();
    _Script_Engine::StaticMeshComponent*& get_mantisLOD2staticLanded();
    _Script_Engine::SpotLightComponent*& get_Bounce();
    _Script_Engine::SpotLightComponent*& get_Mantis_Fill();
    _Script_Engine::PointLightComponent*& get_BD_Shoulder_Light();
    _Script_Engine::SpotLightComponent*& get_CAL_Rim_R();
    _Script_Engine::SpotLightComponent*& get_CAL_Rim_L();
    _Script_Engine::SpotLightComponent*& get_CAL_Top();
    _Script_Engine::SkeletalMeshComponent*& get_BD_1();
    _Script_Engine::ArrowComponent*& get_AllCamHolder();
    _Script_Engine::SceneComponent*& get_AllCamAnchor();
    _Script_Engine::ArrowComponent*& get_MantisCamHolder();
    _Script_Engine::SceneComponent*& get_MantisCamAnchor();
    _Script_Engine::ArrowComponent*& get_BD_1CamHolder();
    _Script_Engine::SceneComponent*& get_BD_1CamAnchor();
    _Script_Engine::ArrowComponent*& get_HeroCamHolder();
    _Script_Engine::SceneComponent*& get_HeroCamAnchor();
    _Script_Engine::SceneCaptureComponent2D*& get_SceneCaptureComponent2D();
    _Script_Engine::SkyLightComponent*& get_Menu_Sky();
    _Script_Engine::SkeletalMeshComponent*& get_Poncho();
    _Script_Engine::SkeletalMeshComponent*& get_face();
    _Script_Engine::ArrowComponent*& get_CamHolder();
    _Script_Engine::SceneComponent*& get_CameraAnchor();
    _Script_Engine::SceneComponent*& get_HeroRotation();
    _Script_Engine::SkeletalMeshComponent*& get_Hero();
    _Script_Engine::SceneComponent*& get_Scene();
    _Script_Engine::SceneComponent*& get_DefaultSceneRoot();
    bool get_DEVUseCustomScene();
    void set_DEVUseCustomScene(bool value);
    void* get_TargetAnchorTransform();
    void* get_SceneTransform();
    void* get_MantisRigTransform();
    void* get_TargetCameraTransform();
    float& get_AnchorInterpSpeed();
    float& get_HolderInterpSpeed();
    float& get_MantisLightTargetIntensity();
    float& get_MantisLightsCurrentIntensity();
    float& get_SkylightTargetIntensity();
    float& get_SceneRotatationZ();
    bool get_IsPlayingAnim();
    void set_IsPlayingAnim(bool value);
    float& get_FOVTarget();
    _Script_Engine::TextureRenderTarget2D*& get_RenderTarget();
    _Game_UI_GameMenu_CustomizationMenu_AB_Hero_Customization::AB_Hero_Customization_C*& get_AB_Hero_Customziation();
    bool get_Enabled();
    void set_Enabled(bool value);
    void* get_MantisMaterials();
    void* get_LoadingMantis();
    void* get_SelectedMantis();
    void* get_BD1Materials();
    void* get_LoadingBD1();
    void* get_SelectedBD1();
    _Script_Engine::SkeletalMesh*& get_PonchoSkeleton();
    void* get_PonchoMaterials();
    void* get_LoadingPoncho();
    void* get_SelectedPoncho();
    void* get_PreviewSettings();
    void* get_OutfitMaterials();
    void* get_LoadingOutfit();
    void* get_SelectedOutfit();
    void* get_MantisLightToBaseIntensity();
    float& get_SkylightMantisTargetIntensity();
    float& get_SkylightHeroTargetIntensity();
    bool get_InquisitorCalActive();
    void set_InquisitorCalActive(bool value);
    static _Script_CoreUObject::Class* static_class();
    void SetMantisLightIntensity(float IntensityMultiplier);
    void SetFocusSettings(void* CosmeticType);
    void SnapFocusSettings();
    void SetEnabled(bool NewEnabeld);
    void UserConstructionScript();
    void OnLoaded_2A3DC9B64B92D8F305ECC294991B38CE(_Script_CoreUObject::Object* Loaded);
    void OnLoaded_1E627C89468AD162488D779F06F8832A(_Script_CoreUObject::Object* Loaded);
    void OnLoaded_F70053BE4C1EA30B1408B6B083429A73(_Script_CoreUObject::Object* Loaded);
    void OnLoaded_FD3A735743F1B555FD068BB4A6D4173B(_Script_CoreUObject::Object* Loaded);
    void OnLoaded_78C03D3947E6A0F5377889A3D5A7C066(_Script_CoreUObject::Object* Loaded);
    void OnLoaded_2CF8FF9946E2EAB32BE90894F25A9C48(_Script_CoreUObject::Object* Loaded);
    void OnLoaded_515FC7C444B61EBABC5DD9925A6A22B1(_Script_CoreUObject::Object* Loaded);
    void OnLoaded_0A08A662446966F69FBCFAAD6498DB9D(_Script_CoreUObject::Object* Loaded);
    void OnLoaded_2576C52B4BE4741E5973B3A18C3D4C94(_Script_CoreUObject::Object* Loaded);
    void OnLoaded_44F9644B46EF036BA5A06CA4E73EEA5F(_Script_CoreUObject::Object* Loaded);
    void OnLoaded_6712D84C4C5673B1956CA08DD1608158(_Script_CoreUObject::Object* Loaded);
    void OnLoaded_BD082C814070B872D58C8DBD9AE1E947(_Script_CoreUObject::Object* Loaded);
    void OnLoaded_8DE6ACB2464B3BCB2C6BFCACF07A79E7(_Script_CoreUObject::Object* Loaded);
    void OnLoaded_1043DF8D4101EBC796097EA66D396A23(_Script_CoreUObject::Object* Loaded);
    void OnLoaded_2F423E6346591B06B2862B9A1920EAE6(_Script_CoreUObject::Object* Loaded);
    void OnLoaded_97A19D184B57DA14F722589E689AFF82(_Script_CoreUObject::Object* Loaded);
    void OnLoaded_19E2ABB04456F141C390208DF9528EAA(_Script_CoreUObject::Object* Loaded);
    void OnLoaded_BC1C90AB45926874F68FC099E63BA6FD(_Script_CoreUObject::Object* Loaded);
    void OnLoaded_CA031F8B444A86D74BE48B9BC5E4602C(_Script_CoreUObject::Object* Loaded);
    void OnLoaded_915402AD485C75EC3C718883DDCF4A0C(_Script_CoreUObject::Object* Loaded);
    void OnLoaded_0BB917224FBA33AA1F79F099EB9DCBFF(_Script_CoreUObject::Object* Loaded);
    void ReceiveTick(float DeltaSeconds);
    void SetPonchoVisible(bool IsVisible);
    void Initialize(_Game_GlobalData_Cosmetics_Struct_CosmeticLoadout::Struct_CosmeticLoadout CustomizationLoadout);
    void ApplyBD1Skin(void* Enum);
    void ReceiveBeginPlay();
    void LVL_ApplyPonchoSkin(void* Enum);
    void ApplyMantisSkin(void* Enum);
    void LoadMantisRig();
    void UnloadMantisRig();
    void ResetFocus();
    void SetCustomizationFocus(void* CosmeticType);
    void iApplyMantisSkin(void* Skin);
    void iApplyBD1Skin(void* Cosmetic);
    void iResetFocus();
    void iApplyPonchoSkin(void* Skin);
    void iSetPonchoVisible(bool Visible);
    void iSetCustomizationFocus(void* CosmeticType);
    void iPlayHeroPonchoAnim(bool On);
    void iEnableMantis(bool Enabled);
    void iApplyOutfit(void* Enum);
    void SetInquisitorCalActiveState(bool NewActive, bool PonchoOn);
    void SkinSwapReapplyMaterials(_Script_Engine::SkeletalMesh* LoadedMesh, _Script_Engine::PrimitiveComponent* TargetedComponent);
    void iSetInquisitorCalActiveState(bool NewActiveState, bool PonchoOn);
    void ExecuteUbergraph_BP_CustomizationMenuCapture(int32_t EntryPoint);
}; // Size: 0x650
#pragma pack(pop)
}
