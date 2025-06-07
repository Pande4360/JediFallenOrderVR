#include "..\FUObjectArray.hpp"
#include "..\_Game_Characters_Bogling_Logic_AB_Bogling\AB_Bogling_C.hpp"
#include "BP_Bogling_C.hpp"
#include "..\_Script_AkAudio\AkBankLoadComponent.hpp"
#include "..\_Script_AkAudio\AkComponent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\MaterialInstanceDynamic.hpp"
#include "..\_Script_Engine\ParticleSystemComponent.hpp"
#include "..\_Script_Engine\PointLightComponent.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_Engine\SkeletalMeshComponent.hpp"
#include "..\_Script_Engine\StaticMeshComponent.hpp"
#include "..\_Script_Engine\TimelineComponent.hpp"
_Script_Engine::PointLightComponent*& _Game_Levels_Bogano_BP_Bogling::BP_Bogling_C::get_PointLight1() {
    return *(_Script_Engine::PointLightComponent**)((uintptr_t)this + 0x398);
}
void* _Game_Levels_Bogano_BP_Bogling::BP_Bogling_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x360);
}
_Script_Engine::ParticleSystemComponent*& _Game_Levels_Bogano_BP_Bogling::BP_Bogling_C::get_P_BoglingPopDustThick() {
    return *(_Script_Engine::ParticleSystemComponent**)((uintptr_t)this + 0x368);
}
_Script_AkAudio::AkBankLoadComponent*& _Game_Levels_Bogano_BP_Bogling::BP_Bogling_C::get_AkBankLoad() {
    return *(_Script_AkAudio::AkBankLoadComponent**)((uintptr_t)this + 0x378);
}
_Script_AkAudio::AkComponent*& _Game_Levels_Bogano_BP_Bogling::BP_Bogling_C::get_Ak() {
    return *(_Script_AkAudio::AkComponent**)((uintptr_t)this + 0x370);
}
_Script_Engine::SkeletalMeshComponent*& _Game_Levels_Bogano_BP_Bogling::BP_Bogling_C::get_Bogling_rig() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x380);
}
void _Game_Levels_Bogano_BP_Bogling::BP_Bogling_C::RandomizeAnimRateAndScale() {
    return;
}
_Script_Engine::StaticMeshComponent*& _Game_Levels_Bogano_BP_Bogling::BP_Bogling_C::get_StaticMesh() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x388);
}
_Script_Engine::SceneComponent*& _Game_Levels_Bogano_BP_Bogling::BP_Bogling_C::get_Transform() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x390);
}
_Script_Engine::PointLightComponent*& _Game_Levels_Bogano_BP_Bogling::BP_Bogling_C::get_PointLight() {
    return *(_Script_Engine::PointLightComponent**)((uintptr_t)this + 0x3a0);
}
_Script_Engine::SceneComponent*& _Game_Levels_Bogano_BP_Bogling::BP_Bogling_C::get_DefaultSceneRoot() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x3a8);
}
float& _Game_Levels_Bogano_BP_Bogling::BP_Bogling_C::get_TL_PopUp_progress_6AAAF51D4E601361650657A975BF091E() {
    return *(float*)((uintptr_t)this + 0x3b0);
}
_Script_Engine::MaterialInstanceDynamic*& _Game_Levels_Bogano_BP_Bogling::BP_Bogling_C::get_FurMaterial() {
    return *(_Script_Engine::MaterialInstanceDynamic**)((uintptr_t)this + 0x3e0);
}
void* _Game_Levels_Bogano_BP_Bogling::BP_Bogling_C::get_TL_PopUp__Direction_6AAAF51D4E601361650657A975BF091E() {
    return (void*)((uintptr_t)this + 0x3b4);
}
_Script_Engine::TimelineComponent*& _Game_Levels_Bogano_BP_Bogling::BP_Bogling_C::get_TL_PopUp() {
    return *(_Script_Engine::TimelineComponent**)((uintptr_t)this + 0x3b8);
}
bool _Game_Levels_Bogano_BP_Bogling::BP_Bogling_C::get_startDown() {
    return (*(uint8_t*)((uintptr_t)this + 0x3c0 + 0)) & 1 != 0;
}
float& _Game_Levels_Bogano_BP_Bogling::BP_Bogling_C::get_timelineProgress() {
    return *(float*)((uintptr_t)this + 0x3c4);
}
void _Game_Levels_Bogano_BP_Bogling::BP_Bogling_C::set_startDown(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3c0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3c0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Game_Levels_Bogano_BP_Bogling::BP_Bogling_C::get_popDepth() {
    return *(float*)((uintptr_t)this + 0x3c8);
}
_Game_Characters_Bogling_Logic_AB_Bogling::AB_Bogling_C*& _Game_Levels_Bogano_BP_Bogling::BP_Bogling_C::get_REF_AB_Bogling() {
    return *(_Game_Characters_Bogling_Logic_AB_Bogling::AB_Bogling_C**)((uintptr_t)this + 0x3d0);
}
_Script_Engine::MaterialInstanceDynamic*& _Game_Levels_Bogano_BP_Bogling::BP_Bogling_C::get_HairMaterial() {
    return *(_Script_Engine::MaterialInstanceDynamic**)((uintptr_t)this + 0x3d8);
}
_Script_CoreUObject::Class* _Game_Levels_Bogano_BP_Bogling::BP_Bogling_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Levels/Bogano/BP_Bogling.BP_Bogling_C");
    return result;
}
void _Game_Levels_Bogano_BP_Bogling::BP_Bogling_C::UserConstructionScript0() {
    return;
}
void _Game_Levels_Bogano_BP_Bogling::BP_Bogling_C::TL_PopUp__FinishedFunc() {
    return;
}
void _Game_Levels_Bogano_BP_Bogling::BP_Bogling_C::TL_PopUp__UpdateFunc() {
    return;
}
void _Game_Levels_Bogano_BP_Bogling::BP_Bogling_C::ReceiveBeginPlay0() {
    return;
}
void _Game_Levels_Bogano_BP_Bogling::BP_Bogling_C::LVL_PopUp(float Seconds) {
    return;
}
void _Game_Levels_Bogano_BP_Bogling::BP_Bogling_C::LVL_PopDown(float Seconds) {
    return;
}
void _Game_Levels_Bogano_BP_Bogling::BP_Bogling_C::Set_New_Time() {
    return;
}
void _Game_Levels_Bogano_BP_Bogling::BP_Bogling_C::ExecuteUbergraph_BP_Bogling(int32_t EntryPoint) {
    return;
}
