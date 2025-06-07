#include "..\FUObjectArray.hpp"
#include "..\_Game_Narrative_Interactables_BP_DroidScan\BP_DroidScan_C.hpp"
#include "BP_DroidScan_LocationMarker_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\BillboardComponent.hpp"
#include "..\_Script_RsGameTechRT\RsBitfield_HeroLoadoutFlags.hpp"
_Script_CoreUObject::Class* _Game_Narrative_Interactables_BP_DroidScan_LocationMarker::BP_DroidScan_LocationMarker_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Narrative/Interactables/BP_DroidScan_LocationMarker.BP_DroidScan_LocationMarker_C");
    return result;
}
void* _Game_Narrative_Interactables_BP_DroidScan_LocationMarker::BP_DroidScan_LocationMarker_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x710);
}
bool _Game_Narrative_Interactables_BP_DroidScan_LocationMarker::BP_DroidScan_LocationMarker_C::get_supressMessage() {
    return (*(uint8_t*)((uintptr_t)this + 0x723 + 0)) & 1 != 0;
}
_Script_Engine::BillboardComponent*& _Game_Narrative_Interactables_BP_DroidScan_LocationMarker::BP_DroidScan_LocationMarker_C::get_UIPlacement() {
    return *(_Script_Engine::BillboardComponent**)((uintptr_t)this + 0x718);
}
void* _Game_Narrative_Interactables_BP_DroidScan_LocationMarker::BP_DroidScan_LocationMarker_C::get_UnlockFlag() {
    return (void*)((uintptr_t)this + 0x720);
}
void _Game_Narrative_Interactables_BP_DroidScan_LocationMarker::BP_DroidScan_LocationMarker_C::set_supressMessage(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x723 + 0);
    *(uint8_t*)((uintptr_t)this + 0x723 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Narrative_Interactables_BP_DroidScan_LocationMarker::BP_DroidScan_LocationMarker_C::HeroLoadoutChanged(_Script_RsGameTechRT::RsBitfield_HeroLoadoutFlags OldFlags, _Script_RsGameTechRT::RsBitfield_HeroLoadoutFlags NewFlags) {
    return;
}
void* _Game_Narrative_Interactables_BP_DroidScan_LocationMarker::BP_DroidScan_LocationMarker_C::get_ScannableGate() {
    return (void*)((uintptr_t)this + 0x721);
}
void* _Game_Narrative_Interactables_BP_DroidScan_LocationMarker::BP_DroidScan_LocationMarker_C::get_Planet() {
    return (void*)((uintptr_t)this + 0x722);
}
void _Game_Narrative_Interactables_BP_DroidScan_LocationMarker::BP_DroidScan_LocationMarker_C::UserConstructionScript() {
    return;
}
void _Game_Narrative_Interactables_BP_DroidScan_LocationMarker::BP_DroidScan_LocationMarker_C::ReceiveBeginPlay() {
    return;
}
void _Game_Narrative_Interactables_BP_DroidScan_LocationMarker::BP_DroidScan_LocationMarker_C::ScanCompleted() {
    return;
}
void _Game_Narrative_Interactables_BP_DroidScan_LocationMarker::BP_DroidScan_LocationMarker_C::ExecuteUbergraph_BP_DroidScan_LocationMarker(int32_t EntryPoint) {
    return;
}
