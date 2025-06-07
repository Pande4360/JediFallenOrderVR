#include "..\FUObjectArray.hpp"
#include "BPFX_SaveBeacon_PP_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\PostProcessComponent.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_Engine\TimelineComponent.hpp"
float& _Game_Effects_Blueprints_BPFX_SaveBeacon_PP::BPFX_SaveBeacon_PP_C::get_Blend() {
    return *(float*)((uintptr_t)this + 0x388);
}
void* _Game_Effects_Blueprints_BPFX_SaveBeacon_PP::BPFX_SaveBeacon_PP_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x360);
}
_Script_Engine::PostProcessComponent*& _Game_Effects_Blueprints_BPFX_SaveBeacon_PP::BPFX_SaveBeacon_PP_C::get_PostProcess() {
    return *(_Script_Engine::PostProcessComponent**)((uintptr_t)this + 0x368);
}
_Script_Engine::SceneComponent*& _Game_Effects_Blueprints_BPFX_SaveBeacon_PP::BPFX_SaveBeacon_PP_C::get_DefaultSceneRoot() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x370);
}
_Script_CoreUObject::Class* _Game_Effects_Blueprints_BPFX_SaveBeacon_PP::BPFX_SaveBeacon_PP_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Effects/Blueprints/BPFX_SaveBeacon_PP.BPFX_SaveBeacon_PP_C");
    return result;
}
float& _Game_Effects_Blueprints_BPFX_SaveBeacon_PP::BPFX_SaveBeacon_PP_C::get_Timeline_0_NewTrack_0_AE5BCB1C4E324B10DFDF72BE35222CC4() {
    return *(float*)((uintptr_t)this + 0x378);
}
void* _Game_Effects_Blueprints_BPFX_SaveBeacon_PP::BPFX_SaveBeacon_PP_C::get_Timeline_0__Direction_AE5BCB1C4E324B10DFDF72BE35222CC4() {
    return (void*)((uintptr_t)this + 0x37c);
}
_Script_Engine::TimelineComponent*& _Game_Effects_Blueprints_BPFX_SaveBeacon_PP::BPFX_SaveBeacon_PP_C::get_Timeline_0() {
    return *(_Script_Engine::TimelineComponent**)((uintptr_t)this + 0x380);
}
void _Game_Effects_Blueprints_BPFX_SaveBeacon_PP::BPFX_SaveBeacon_PP_C::UserConstructionScript0() {
    return;
}
void _Game_Effects_Blueprints_BPFX_SaveBeacon_PP::BPFX_SaveBeacon_PP_C::Timeline_0__FinishedFunc() {
    return;
}
void _Game_Effects_Blueprints_BPFX_SaveBeacon_PP::BPFX_SaveBeacon_PP_C::Timeline_0__UpdateFunc() {
    return;
}
void _Game_Effects_Blueprints_BPFX_SaveBeacon_PP::BPFX_SaveBeacon_PP_C::PauseMenuToggled(bool PauseMenuOpened) {
    return;
}
void _Game_Effects_Blueprints_BPFX_SaveBeacon_PP::BPFX_SaveBeacon_PP_C::ReceiveBeginPlay0() {
    return;
}
void _Game_Effects_Blueprints_BPFX_SaveBeacon_PP::BPFX_SaveBeacon_PP_C::PlayStartingTimeLine() {
    return;
}
void _Game_Effects_Blueprints_BPFX_SaveBeacon_PP::BPFX_SaveBeacon_PP_C::ExecuteUbergraph_BPFX_SaveBeacon_PP(int32_t EntryPoint) {
    return;
}
