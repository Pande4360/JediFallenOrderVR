#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "LevelVariantSets.hpp"
#include "LevelVariantSetsActor.hpp"
void* _Script_VariantManagerContent::LevelVariantSetsActor::get_LevelVariantSets() {
    return (void*)((uintptr_t)this + 0x360);
}
void _Script_VariantManagerContent::LevelVariantSetsActor::SetLevelVariantSets(_Script_VariantManagerContent::LevelVariantSets* InVariantSets) {
    return;
}
_Script_CoreUObject::Class* _Script_VariantManagerContent::LevelVariantSetsActor::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/VariantManagerContent.LevelVariantSetsActor");
    return result;
}
bool _Script_VariantManagerContent::LevelVariantSetsActor::SwitchOnVariantByName(void* VariantSetName, void* VariantName) {
    return;
}
bool _Script_VariantManagerContent::LevelVariantSetsActor::SwitchOnVariantByIndex(int32_t VariantSetIndex, int32_t VariantIndex) {
    return;
}
_Script_VariantManagerContent::LevelVariantSets* _Script_VariantManagerContent::LevelVariantSetsActor::GetLevelVariantSets(bool bLoad) {
    return;
}
