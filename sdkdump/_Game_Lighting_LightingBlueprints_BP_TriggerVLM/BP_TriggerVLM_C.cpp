#include "..\FUObjectArray.hpp"
#include "BP_TriggerVLM_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\TriggerBox.hpp"
void* _Game_Lighting_LightingBlueprints_BP_TriggerVLM::BP_TriggerVLM_C::get_VLM() {
    return (void*)((uintptr_t)this + 0x370);
}
void* _Game_Lighting_LightingBlueprints_BP_TriggerVLM::BP_TriggerVLM_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x368);
}
void _Game_Lighting_LightingBlueprints_BP_TriggerVLM::BP_TriggerVLM_C::ReceiveActorEndOverlap(_Script_Engine::Actor* OtherActor) {
    return;
}
_Script_CoreUObject::Class* _Game_Lighting_LightingBlueprints_BP_TriggerVLM::BP_TriggerVLM_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Lighting/LightingBlueprints/BP_TriggerVLM.BP_TriggerVLM_C");
    return result;
}
void _Game_Lighting_LightingBlueprints_BP_TriggerVLM::BP_TriggerVLM_C::ReceiveActorBeginOverlap(_Script_Engine::Actor* OtherActor) {
    return;
}
void _Game_Lighting_LightingBlueprints_BP_TriggerVLM::BP_TriggerVLM_C::UserConstructionScript() {
    return;
}
void _Game_Lighting_LightingBlueprints_BP_TriggerVLM::BP_TriggerVLM_C::ExecuteUbergraph_BP_TriggerVLM(int32_t EntryPoint) {
    return;
}
