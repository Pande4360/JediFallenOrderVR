#include "..\FUObjectArray.hpp"
#include "BP_GameMenu_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\BoxComponent.hpp"
#include "..\_Script_Engine\ChildActorComponent.hpp"
#include "..\_Script_Engine\CurveFloat.hpp"
#include "..\_Script_Engine\MeshComponent.hpp"
#include "..\_Script_Engine\ParticleSystemComponent.hpp"
#include "..\_Script_Engine\PointLightComponent.hpp"
#include "..\_Script_Engine\PostProcessComponent.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_Engine\StaticMeshComponent.hpp"
_Script_Engine::StaticMeshComponent*& _Game_UI_GameMenu_Levels_BP_BP_GameMenu::BP_GameMenu_C::get_Floor() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x378);
}
float& _Game_UI_GameMenu_Levels_BP_BP_GameMenu::BP_GameMenu_C::get_TeriaryStartingScale() {
    return *(float*)((uintptr_t)this + 0x470);
}
float& _Game_UI_GameMenu_Levels_BP_BP_GameMenu::BP_GameMenu_C::get_MainEndingScale() {
    return *(float*)((uintptr_t)this + 0x464);
}
void* _Game_UI_GameMenu_Levels_BP_BP_GameMenu::BP_GameMenu_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x360);
}
_Script_Engine::StaticMeshComponent*& _Game_UI_GameMenu_Levels_BP_BP_GameMenu::BP_GameMenu_C::get_CircleMesh() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x368);
}
void _Game_UI_GameMenu_Levels_BP_BP_GameMenu::BP_GameMenu_C::set_Update_End_Location(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x439 + 0);
    *(uint8_t*)((uintptr_t)this + 0x439 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::StaticMeshComponent*& _Game_UI_GameMenu_Levels_BP_BP_GameMenu::BP_GameMenu_C::get_StaticMesh() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x370);
}
float& _Game_UI_GameMenu_Levels_BP_BP_GameMenu::BP_GameMenu_C::get_Overall_Temperature() {
    return *(float*)((uintptr_t)this + 0x4d0);
}
_Script_Engine::PointLightComponent*& _Game_UI_GameMenu_Levels_BP_BP_GameMenu::BP_GameMenu_C::get_UIMenuLight() {
    return *(_Script_Engine::PointLightComponent**)((uintptr_t)this + 0x380);
}
_Script_Engine::StaticMeshComponent*& _Game_UI_GameMenu_Levels_BP_BP_GameMenu::BP_GameMenu_C::get_SurroundingCube() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x388);
}
void _Game_UI_GameMenu_Levels_BP_BP_GameMenu::BP_GameMenu_C::ExecuteUbergraph_BP_GameMenu(int32_t EntryPoint) {
    return;
}
_Script_Engine::PostProcessComponent*& _Game_UI_GameMenu_Levels_BP_BP_GameMenu::BP_GameMenu_C::get_PPC_GameMenu() {
    return *(_Script_Engine::PostProcessComponent**)((uintptr_t)this + 0x390);
}
float& _Game_UI_GameMenu_Levels_BP_BP_GameMenu::BP_GameMenu_C::get_TertiaryRotationSpeed() {
    return *(float*)((uintptr_t)this + 0x504);
}
_Script_Engine::BoxComponent*& _Game_UI_GameMenu_Levels_BP_BP_GameMenu::BP_GameMenu_C::get_PPV_GameMenu() {
    return *(_Script_Engine::BoxComponent**)((uintptr_t)this + 0x398);
}
float& _Game_UI_GameMenu_Levels_BP_BP_GameMenu::BP_GameMenu_C::get_FloatLerpAmount() {
    return *(float*)((uintptr_t)this + 0x428);
}
_Script_Engine::ParticleSystemComponent*& _Game_UI_GameMenu_Levels_BP_BP_GameMenu::BP_GameMenu_C::get_P_Void_Save_Ambient() {
    return *(_Script_Engine::ParticleSystemComponent**)((uintptr_t)this + 0x3a0);
}
_Script_Engine::ChildActorComponent*& _Game_UI_GameMenu_Levels_BP_BP_GameMenu::BP_GameMenu_C::get_RotatingSpheres() {
    return *(_Script_Engine::ChildActorComponent**)((uintptr_t)this + 0x3a8);
}
void _Game_UI_GameMenu_Levels_BP_BP_GameMenu::BP_GameMenu_C::set_Update_Locations(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x43a + 0);
    *(uint8_t*)((uintptr_t)this + 0x43a + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::ParticleSystemComponent*& _Game_UI_GameMenu_Levels_BP_BP_GameMenu::BP_GameMenu_C::get_Stars() {
    return *(_Script_Engine::ParticleSystemComponent**)((uintptr_t)this + 0x3b0);
}
_Script_Engine::StaticMeshComponent*& _Game_UI_GameMenu_Levels_BP_BP_GameMenu::BP_GameMenu_C::get_Tertiary() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x3b8);
}
bool _Game_UI_GameMenu_Levels_BP_BP_GameMenu::BP_GameMenu_C::get_run() {
    return (*(uint8_t*)((uintptr_t)this + 0x424 + 0)) & 1 != 0;
}
_Script_Engine::StaticMeshComponent*& _Game_UI_GameMenu_Levels_BP_BP_GameMenu::BP_GameMenu_C::get_Secondary() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x3c0);
}
void* _Game_UI_GameMenu_Levels_BP_BP_GameMenu::BP_GameMenu_C::get_CircleMeshLocation() {
    return (void*)((uintptr_t)this + 0x530);
}
_Script_Engine::StaticMeshComponent*& _Game_UI_GameMenu_Levels_BP_BP_GameMenu::BP_GameMenu_C::get_MainShape() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x3c8);
}
_Script_Engine::SceneComponent*& _Game_UI_GameMenu_Levels_BP_BP_GameMenu::BP_GameMenu_C::get_DefaultSceneRoot() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x3d0);
}
void* _Game_UI_GameMenu_Levels_BP_BP_GameMenu::BP_GameMenu_C::get_MainStartingLocation() {
    return (void*)((uintptr_t)this + 0x3d8);
}
float& _Game_UI_GameMenu_Levels_BP_BP_GameMenu::BP_GameMenu_C::get_IntroSpeed() {
    return *(float*)((uintptr_t)this + 0x4f8);
}
void* _Game_UI_GameMenu_Levels_BP_BP_GameMenu::BP_GameMenu_C::get_MainEndingLocation() {
    return (void*)((uintptr_t)this + 0x3e4);
}
float& _Game_UI_GameMenu_Levels_BP_BP_GameMenu::BP_GameMenu_C::get_MainEmissiveMultiplier() {
    return *(float*)((uintptr_t)this + 0x498);
}
void* _Game_UI_GameMenu_Levels_BP_BP_GameMenu::BP_GameMenu_C::get_TertiaryStartingLocation() {
    return (void*)((uintptr_t)this + 0x408);
}
void* _Game_UI_GameMenu_Levels_BP_BP_GameMenu::BP_GameMenu_C::get_SecondaryStartingLocation() {
    return (void*)((uintptr_t)this + 0x3f0);
}
void* _Game_UI_GameMenu_Levels_BP_BP_GameMenu::BP_GameMenu_C::get_SecondaryEndingLocation() {
    return (void*)((uintptr_t)this + 0x3fc);
}
float& _Game_UI_GameMenu_Levels_BP_BP_GameMenu::BP_GameMenu_C::get_ChromaticAbberationIntensity() {
    return *(float*)((uintptr_t)this + 0x4dc);
}
void* _Game_UI_GameMenu_Levels_BP_BP_GameMenu::BP_GameMenu_C::get_TertiaryEndingLocation() {
    return (void*)((uintptr_t)this + 0x414);
}
void _Game_UI_GameMenu_Levels_BP_BP_GameMenu::BP_GameMenu_C::TEsting(bool Filler) {
    return;
}
float& _Game_UI_GameMenu_Levels_BP_BP_GameMenu::BP_GameMenu_C::get_LocationLerp() {
    return *(float*)((uintptr_t)this + 0x420);
}
float& _Game_UI_GameMenu_Levels_BP_BP_GameMenu::BP_GameMenu_C::get_SecondaryOpacity() {
    return *(float*)((uintptr_t)this + 0x4b4);
}
void _Game_UI_GameMenu_Levels_BP_BP_GameMenu::BP_GameMenu_C::set_run(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x424 + 0);
    *(uint8_t*)((uintptr_t)this + 0x424 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_UI_GameMenu_Levels_BP_BP_GameMenu::BP_GameMenu_C::get_RingRotation() {
    return (void*)((uintptr_t)this + 0x42c);
}
float& _Game_UI_GameMenu_Levels_BP_BP_GameMenu::BP_GameMenu_C::get_FarTransitionRegion() {
    return *(float*)((uintptr_t)this + 0x4ec);
}
bool _Game_UI_GameMenu_Levels_BP_BP_GameMenu::BP_GameMenu_C::get_Update_Start_Location() {
    return (*(uint8_t*)((uintptr_t)this + 0x438 + 0)) & 1 != 0;
}
void _Game_UI_GameMenu_Levels_BP_BP_GameMenu::BP_GameMenu_C::set_Update_Start_Location(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x438 + 0);
    *(uint8_t*)((uintptr_t)this + 0x438 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_UI_GameMenu_Levels_BP_BP_GameMenu::BP_GameMenu_C::get_Update_End_Location() {
    return (*(uint8_t*)((uintptr_t)this + 0x439 + 0)) & 1 != 0;
}
_Script_Engine::CurveFloat*& _Game_UI_GameMenu_Levels_BP_BP_GameMenu::BP_GameMenu_C::get_Curve() {
    return *(_Script_Engine::CurveFloat**)((uintptr_t)this + 0x480);
}
bool _Game_UI_GameMenu_Levels_BP_BP_GameMenu::BP_GameMenu_C::get_Update_Locations() {
    return (*(uint8_t*)((uintptr_t)this + 0x43a + 0)) & 1 != 0;
}
float& _Game_UI_GameMenu_Levels_BP_BP_GameMenu::BP_GameMenu_C::get_MainStartingScale() {
    return *(float*)((uintptr_t)this + 0x460);
}
void* _Game_UI_GameMenu_Levels_BP_BP_GameMenu::BP_GameMenu_C::get_SecondaryRelativeRingRotation() {
    return (void*)((uintptr_t)this + 0x43c);
}
float& _Game_UI_GameMenu_Levels_BP_BP_GameMenu::BP_GameMenu_C::get_SecondaryEndingScale() {
    return *(float*)((uintptr_t)this + 0x46c);
}
void* _Game_UI_GameMenu_Levels_BP_BP_GameMenu::BP_GameMenu_C::get_MainRelativeRingRotation() {
    return (void*)((uintptr_t)this + 0x448);
}
void* _Game_UI_GameMenu_Levels_BP_BP_GameMenu::BP_GameMenu_C::get_TertiaryRelativeRingRotation() {
    return (void*)((uintptr_t)this + 0x454);
}
float& _Game_UI_GameMenu_Levels_BP_BP_GameMenu::BP_GameMenu_C::get_SecondaryStartingScale() {
    return *(float*)((uintptr_t)this + 0x468);
}
float& _Game_UI_GameMenu_Levels_BP_BP_GameMenu::BP_GameMenu_C::get_TeriaryEndingScale() {
    return *(float*)((uintptr_t)this + 0x474);
}
float& _Game_UI_GameMenu_Levels_BP_BP_GameMenu::BP_GameMenu_C::get_ScaleLerp() {
    return *(float*)((uintptr_t)this + 0x478);
}
void* _Game_UI_GameMenu_Levels_BP_BP_GameMenu::BP_GameMenu_C::get_MainRingColor() {
    return (void*)((uintptr_t)this + 0x488);
}
float& _Game_UI_GameMenu_Levels_BP_BP_GameMenu::BP_GameMenu_C::get_MainOpacity() {
    return *(float*)((uintptr_t)this + 0x49c);
}
void* _Game_UI_GameMenu_Levels_BP_BP_GameMenu::BP_GameMenu_C::get_SecondaryRingColor() {
    return (void*)((uintptr_t)this + 0x4a0);
}
float& _Game_UI_GameMenu_Levels_BP_BP_GameMenu::BP_GameMenu_C::get_SecondaryEmissiveMultiplier() {
    return *(float*)((uintptr_t)this + 0x4b0);
}
void* _Game_UI_GameMenu_Levels_BP_BP_GameMenu::BP_GameMenu_C::get_TertiaryRingColor() {
    return (void*)((uintptr_t)this + 0x4b8);
}
float& _Game_UI_GameMenu_Levels_BP_BP_GameMenu::BP_GameMenu_C::get_TertiaryEmissiveMultiplier() {
    return *(float*)((uintptr_t)this + 0x4c8);
}
float& _Game_UI_GameMenu_Levels_BP_BP_GameMenu::BP_GameMenu_C::get_TertiaryOpacity() {
    return *(float*)((uintptr_t)this + 0x4cc);
}
float& _Game_UI_GameMenu_Levels_BP_BP_GameMenu::BP_GameMenu_C::get_Contrast() {
    return *(float*)((uintptr_t)this + 0x4d8);
}
float& _Game_UI_GameMenu_Levels_BP_BP_GameMenu::BP_GameMenu_C::get_Saturation() {
    return *(float*)((uintptr_t)this + 0x4d4);
}
float& _Game_UI_GameMenu_Levels_BP_BP_GameMenu::BP_GameMenu_C::get_FocalDistance() {
    return *(float*)((uintptr_t)this + 0x4e0);
}
float& _Game_UI_GameMenu_Levels_BP_BP_GameMenu::BP_GameMenu_C::get_FocalRegion() {
    return *(float*)((uintptr_t)this + 0x4e4);
}
float& _Game_UI_GameMenu_Levels_BP_BP_GameMenu::BP_GameMenu_C::get_NearTransitionRegion() {
    return *(float*)((uintptr_t)this + 0x4e8);
}
float& _Game_UI_GameMenu_Levels_BP_BP_GameMenu::BP_GameMenu_C::get_BlurScale() {
    return *(float*)((uintptr_t)this + 0x4f0);
}
float& _Game_UI_GameMenu_Levels_BP_BP_GameMenu::BP_GameMenu_C::get_ChromaticAbberationIntensity_Internal() {
    return *(float*)((uintptr_t)this + 0x4f4);
}
float& _Game_UI_GameMenu_Levels_BP_BP_GameMenu::BP_GameMenu_C::get_MainRotationSpeed() {
    return *(float*)((uintptr_t)this + 0x4fc);
}
float& _Game_UI_GameMenu_Levels_BP_BP_GameMenu::BP_GameMenu_C::get_SecondaryRotationSpeed() {
    return *(float*)((uintptr_t)this + 0x500);
}
void* _Game_UI_GameMenu_Levels_BP_BP_GameMenu::BP_GameMenu_C::get_SubtractVectorAmount() {
    return (void*)((uintptr_t)this + 0x508);
}
void* _Game_UI_GameMenu_Levels_BP_BP_GameMenu::BP_GameMenu_C::get_MovementForCamera() {
    return (void*)((uintptr_t)this + 0x514);
}
float& _Game_UI_GameMenu_Levels_BP_BP_GameMenu::BP_GameMenu_C::get_MovementLerp() {
    return *(float*)((uintptr_t)this + 0x520);
}
void* _Game_UI_GameMenu_Levels_BP_BP_GameMenu::BP_GameMenu_C::get_MovementForNoise() {
    return (void*)((uintptr_t)this + 0x524);
}
void* _Game_UI_GameMenu_Levels_BP_BP_GameMenu::BP_GameMenu_C::get_CameraMovement() {
    return (void*)((uintptr_t)this + 0x53c);
}
void* _Game_UI_GameMenu_Levels_BP_BP_GameMenu::BP_GameMenu_C::get_CameraMode() {
    return (void*)((uintptr_t)this + 0x548);
}
float& _Game_UI_GameMenu_Levels_BP_BP_GameMenu::BP_GameMenu_C::get_FOV() {
    return *(float*)((uintptr_t)this + 0x550);
}
_Script_CoreUObject::Class* _Game_UI_GameMenu_Levels_BP_BP_GameMenu::BP_GameMenu_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/UI/GameMenu/Levels/BP/BP_GameMenu.BP_GameMenu_C");
    return result;
}
void _Game_UI_GameMenu_Levels_BP_BP_GameMenu::BP_GameMenu_C::ChangeBlur(void* Method, float Blur_Scale) {
    return;
}
void _Game_UI_GameMenu_Levels_BP_BP_GameMenu::BP_GameMenu_C::SetPostProcessValues(float Temp, float Saturation, float Contrast, float ChromaticAbberationIntensity, float Focal_Distance, float Focal_Region, float Near_Transition_Region, float Far_Transition_Region, float Blur_Scale) {
    return;
}
void _Game_UI_GameMenu_Levels_BP_BP_GameMenu::BP_GameMenu_C::SetRingMaterialParameters(_Script_Engine::MeshComponent* Target, _Script_CoreUObject::LinearColor RingColor, float Emissive, float Opacity) {
    return;
}
void _Game_UI_GameMenu_Levels_BP_BP_GameMenu::BP_GameMenu_C::UserConstructionScript0() {
    return;
}
void _Game_UI_GameMenu_Levels_BP_BP_GameMenu::BP_GameMenu_C::ReceiveBeginPlay0() {
    return;
}
void _Game_UI_GameMenu_Levels_BP_BP_GameMenu::BP_GameMenu_C::ReceiveTick0(float DeltaSeconds) {
    return;
}
void _Game_UI_GameMenu_Levels_BP_BP_GameMenu::BP_GameMenu_C::MoveSpheres() {
    return;
}
void _Game_UI_GameMenu_Levels_BP_BP_GameMenu::BP_GameMenu_C::SetRingLocations() {
    return;
}
void _Game_UI_GameMenu_Levels_BP_BP_GameMenu::BP_GameMenu_C::SetRingScale() {
    return;
}
void _Game_UI_GameMenu_Levels_BP_BP_GameMenu::BP_GameMenu_C::SetTickable() {
    return;
}
void _Game_UI_GameMenu_Levels_BP_BP_GameMenu::BP_GameMenu_C::OnMenuOpen() {
    return;
}
void _Game_UI_GameMenu_Levels_BP_BP_GameMenu::BP_GameMenu_C::PostProcessTick() {
    return;
}
void _Game_UI_GameMenu_Levels_BP_BP_GameMenu::BP_GameMenu_C::SetRingRotation() {
    return;
}
void _Game_UI_GameMenu_Levels_BP_BP_GameMenu::BP_GameMenu_C::Initialize() {
    return;
}
void _Game_UI_GameMenu_Levels_BP_BP_GameMenu::BP_GameMenu_C::SetParticleSystemParams() {
    return;
}
void _Game_UI_GameMenu_Levels_BP_BP_GameMenu::BP_GameMenu_C::AnimateCamera() {
    return;
}
void _Game_UI_GameMenu_Levels_BP_BP_GameMenu::BP_GameMenu_C::MoveNoiseVector() {
    return;
}
