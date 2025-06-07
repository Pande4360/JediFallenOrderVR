#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "Variant.hpp"
#include "VariantSet.hpp"
void* _Script_VariantManagerContent::VariantSet::GetDisplayText() {
    return;
}
void _Script_VariantManagerContent::VariantSet::SetDisplayText(void*& NewDisplayText) {
    return;
}
void* _Script_VariantManagerContent::VariantSet::get_DisplayText() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_VariantManagerContent::VariantSet::get_Variants() {
    return (void*)((uintptr_t)this + 0x40);
}
_Script_CoreUObject::Class* _Script_VariantManagerContent::VariantSet::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/VariantManagerContent.VariantSet");
    return result;
}
_Script_VariantManagerContent::Variant* _Script_VariantManagerContent::VariantSet::GetVariant(int32_t VariantIndex) {
    return;
}
int32_t _Script_VariantManagerContent::VariantSet::GetNumVariants() {
    return;
}
