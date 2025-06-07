#include "..\FUObjectArray.hpp"
#include "BPFX_LowHP_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\PostProcessComponent.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_Engine\TimelineComponent.hpp"
void* _Game_Effects_Blueprints_BPFX_LowHP::BPFX_LowHP_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x360);
}
_Script_Engine::TimelineComponent*& _Game_Effects_Blueprints_BPFX_LowHP::BPFX_LowHP_C::get_Timeline_1() {
    return *(_Script_Engine::TimelineComponent**)((uintptr_t)this + 0x380);
}
_Script_Engine::PostProcessComponent*& _Game_Effects_Blueprints_BPFX_LowHP::BPFX_LowHP_C::get_PostProcess() {
    return *(_Script_Engine::PostProcessComponent**)((uintptr_t)this + 0x368);
}
_Script_Engine::SceneComponent*& _Game_Effects_Blueprints_BPFX_LowHP::BPFX_LowHP_C::get_DefaultSceneRoot() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x370);
}
float& _Game_Effects_Blueprints_BPFX_LowHP::BPFX_LowHP_C::get_Timeline_1_NewTrack_1_49E3164D408C864B91840B8F15C2E17A() {
    return *(float*)((uintptr_t)this + 0x378);
}
void* _Game_Effects_Blueprints_BPFX_LowHP::BPFX_LowHP_C::get_Timeline_1__Direction_49E3164D408C864B91840B8F15C2E17A() {
    return (void*)((uintptr_t)this + 0x37c);
}
void* _Game_Effects_Blueprints_BPFX_LowHP::BPFX_LowHP_C::get_Timeline_0__Direction_7126FD4443EF269E73FAFFA25C0DE2C2() {
    return (void*)((uintptr_t)this + 0x38c);
}
float& _Game_Effects_Blueprints_BPFX_LowHP::BPFX_LowHP_C::get_Timeline_0_NewTrack_0_7126FD4443EF269E73FAFFA25C0DE2C2() {
    return *(float*)((uintptr_t)this + 0x388);
}
_Script_Engine::TimelineComponent*& _Game_Effects_Blueprints_BPFX_LowHP::BPFX_LowHP_C::get_Timeline_0() {
    return *(_Script_Engine::TimelineComponent**)((uintptr_t)this + 0x390);
}
float& _Game_Effects_Blueprints_BPFX_LowHP::BPFX_LowHP_C::get_Blend() {
    return *(float*)((uintptr_t)this + 0x398);
}
_Script_CoreUObject::Class* _Game_Effects_Blueprints_BPFX_LowHP::BPFX_LowHP_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Effects/Blueprints/BPFX_LowHP.BPFX_LowHP_C");
    return result;
}
void _Game_Effects_Blueprints_BPFX_LowHP::BPFX_LowHP_C::UserConstructionScript0() {
    return;
}
void _Game_Effects_Blueprints_BPFX_LowHP::BPFX_LowHP_C::Timeline_0__FinishedFunc() {
    return;
}
void _Game_Effects_Blueprints_BPFX_LowHP::BPFX_LowHP_C::Timeline_0__UpdateFunc() {
    return;
}
void _Game_Effects_Blueprints_BPFX_LowHP::BPFX_LowHP_C::Timeline_1__FinishedFunc() {
    return;
}
void _Game_Effects_Blueprints_BPFX_LowHP::BPFX_LowHP_C::Timeline_1__UpdateFunc() {
    return;
}
void _Game_Effects_Blueprints_BPFX_LowHP::BPFX_LowHP_C::Desaturate() {
    return;
}
void _Game_Effects_Blueprints_BPFX_LowHP::BPFX_LowHP_C::ExecuteUbergraph_BPFX_LowHP(int32_t EntryPoint) {
    return;
}
