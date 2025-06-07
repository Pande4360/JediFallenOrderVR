#include "..\FUObjectArray.hpp"
#include "BP_NarrativeLabelComponent_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_Engine\TextRenderComponent.hpp"
float& _Game_Narrative_Interactables_BP_NarrativeLabelComponent::BP_NarrativeLabelComponent_C::get_CustomTextSize() {
    return *(float*)((uintptr_t)this + 0x378);
}
void* _Game_Narrative_Interactables_BP_NarrativeLabelComponent::BP_NarrativeLabelComponent_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x360);
}
float& _Game_Narrative_Interactables_BP_NarrativeLabelComponent::BP_NarrativeLabelComponent_C::get_CustomEditorRotation() {
    return *(float*)((uintptr_t)this + 0x37c);
}
_Script_Engine::SceneComponent*& _Game_Narrative_Interactables_BP_NarrativeLabelComponent::BP_NarrativeLabelComponent_C::get_Root() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x368);
}
_Script_Engine::TextRenderComponent*& _Game_Narrative_Interactables_BP_NarrativeLabelComponent::BP_NarrativeLabelComponent_C::get_LabelText() {
    return *(_Script_Engine::TextRenderComponent**)((uintptr_t)this + 0x370);
}
bool _Game_Narrative_Interactables_BP_NarrativeLabelComponent::BP_NarrativeLabelComponent_C::get_ShouldShow() {
    return (*(uint8_t*)((uintptr_t)this + 0x380 + 0)) & 1 != 0;
}
void _Game_Narrative_Interactables_BP_NarrativeLabelComponent::BP_NarrativeLabelComponent_C::set_ShouldShow(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x380 + 0);
    *(uint8_t*)((uintptr_t)this + 0x380 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Game_Narrative_Interactables_BP_NarrativeLabelComponent::BP_NarrativeLabelComponent_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Narrative/Interactables/BP_NarrativeLabelComponent.BP_NarrativeLabelComponent_C");
    return result;
}
void _Game_Narrative_Interactables_BP_NarrativeLabelComponent::BP_NarrativeLabelComponent_C::AttemptChangeVisibility(bool NewVisibility) {
    return;
}
void _Game_Narrative_Interactables_BP_NarrativeLabelComponent::BP_NarrativeLabelComponent_C::UpdateRotation() {
    return;
}
void _Game_Narrative_Interactables_BP_NarrativeLabelComponent::BP_NarrativeLabelComponent_C::ReceiveBeginPlay0() {
    return;
}
void _Game_Narrative_Interactables_BP_NarrativeLabelComponent::BP_NarrativeLabelComponent_C::SetUpNarrativeLabel(_Script_Engine::Actor* Owner, bool Construction) {
    return;
}
void _Game_Narrative_Interactables_BP_NarrativeLabelComponent::BP_NarrativeLabelComponent_C::UserConstructionScript0() {
    return;
}
void _Game_Narrative_Interactables_BP_NarrativeLabelComponent::BP_NarrativeLabelComponent_C::ExecuteUbergraph_BP_NarrativeLabelComponent(int32_t EntryPoint) {
    return;
}
