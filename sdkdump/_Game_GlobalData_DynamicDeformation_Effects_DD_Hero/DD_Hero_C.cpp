#include "..\FUObjectArray.hpp"
#include "DD_Hero_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_RsTechRT\RsDynamicDeformerParticleSystem.hpp"
void* _Game_GlobalData_DynamicDeformation_Effects_DD_Hero::DD_Hero_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x368);
}
_Script_CoreUObject::Class* _Game_GlobalData_DynamicDeformation_Effects_DD_Hero::DD_Hero_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/GlobalData/DynamicDeformation/Effects/DD_Hero.DD_Hero_C");
    return result;
}
void _Game_GlobalData_DynamicDeformation_Effects_DD_Hero::DD_Hero_C::UserConstructionScript() {
    return;
}
void _Game_GlobalData_DynamicDeformation_Effects_DD_Hero::DD_Hero_C::NavStateChanged(void* NewState, void* PrevState) {
    return;
}
void _Game_GlobalData_DynamicDeformation_Effects_DD_Hero::DD_Hero_C::ReceiveBeginPlay() {
    return;
}
void _Game_GlobalData_DynamicDeformation_Effects_DD_Hero::DD_Hero_C::SwimStateChanged(void* previousSwimState, void* newSwimState) {
    return;
}
void _Game_GlobalData_DynamicDeformation_Effects_DD_Hero::DD_Hero_C::ExecuteUbergraph_DD_Hero(int32_t EntryPoint) {
    return;
}
