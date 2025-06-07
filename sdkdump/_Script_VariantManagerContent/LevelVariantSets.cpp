#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "LevelVariantSets.hpp"
#include "VariantSet.hpp"
void* _Script_VariantManagerContent::LevelVariantSets::get_VariantSets() {
    return (void*)((uintptr_t)this + 0x28);
}
_Script_VariantManagerContent::VariantSet* _Script_VariantManagerContent::LevelVariantSets::GetVariantSet(int32_t VariantSetIndex) {
    return;
}
void* _Script_VariantManagerContent::LevelVariantSets::get_DisplayNodeExpansionStates() {
    return (void*)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Script_VariantManagerContent::LevelVariantSets::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/VariantManagerContent.LevelVariantSets");
    return result;
}
int32_t _Script_VariantManagerContent::LevelVariantSets::GetNumVariantSets() {
    return;
}
