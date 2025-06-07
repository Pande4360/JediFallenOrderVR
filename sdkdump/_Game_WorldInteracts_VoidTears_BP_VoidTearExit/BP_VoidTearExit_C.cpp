#include "..\FUObjectArray.hpp"
#include "..\_Game_WorldInteracts_VoidTears_BP_VoidTearEntrance\BP_VoidTearEntrance_C.hpp"
#include "BP_VoidTearExit_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\ArrowComponent.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
void* _Game_WorldInteracts_VoidTears_BP_VoidTearExit::BP_VoidTearExit_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x360);
}
_Script_Engine::ArrowComponent*& _Game_WorldInteracts_VoidTears_BP_VoidTearExit::BP_VoidTearExit_C::get_TeleportLocation() {
    return *(_Script_Engine::ArrowComponent**)((uintptr_t)this + 0x368);
}
_Script_CoreUObject::Class* _Game_WorldInteracts_VoidTears_BP_VoidTearExit::BP_VoidTearExit_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/WorldInteracts/VoidTears/BP_VoidTearExit.BP_VoidTearExit_C");
    return result;
}
_Script_Engine::SceneComponent*& _Game_WorldInteracts_VoidTears_BP_VoidTearExit::BP_VoidTearExit_C::get_DefaultSceneRoot() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x370);
}
void* _Game_WorldInteracts_VoidTears_BP_VoidTearExit::BP_VoidTearExit_C::get_LVL_FadeInComplete() {
    return (void*)((uintptr_t)this + 0x380);
}
void _Game_WorldInteracts_VoidTears_BP_VoidTearExit::BP_VoidTearExit_C::UserConstructionScript0() {
    return;
}
void _Game_WorldInteracts_VoidTears_BP_VoidTearExit::BP_VoidTearExit_C::LVL_FadeInComplete__DelegateSignature() {
    return;
}
_Game_WorldInteracts_VoidTears_BP_VoidTearEntrance::BP_VoidTearEntrance_C*& _Game_WorldInteracts_VoidTears_BP_VoidTearExit::BP_VoidTearExit_C::get_VoidTearEntrance() {
    return *(_Game_WorldInteracts_VoidTears_BP_VoidTearEntrance::BP_VoidTearEntrance_C**)((uintptr_t)this + 0x378);
}
void _Game_WorldInteracts_VoidTears_BP_VoidTearExit::BP_VoidTearExit_C::ExitVoid() {
    return;
}
void _Game_WorldInteracts_VoidTears_BP_VoidTearExit::BP_VoidTearExit_C::FadeInComplete() {
    return;
}
void _Game_WorldInteracts_VoidTears_BP_VoidTearExit::BP_VoidTearExit_C::LVL_Enable() {
    return;
}
void _Game_WorldInteracts_VoidTears_BP_VoidTearExit::BP_VoidTearExit_C::LVL_Disable() {
    return;
}
void _Game_WorldInteracts_VoidTears_BP_VoidTearExit::BP_VoidTearExit_C::ExecuteUbergraph_BP_VoidTearExit(int32_t EntryPoint) {
    return;
}
