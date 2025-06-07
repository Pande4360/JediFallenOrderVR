#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "VariantObjectBinding.hpp"
void* _Script_VariantManagerContent::VariantObjectBinding::get_ObjectPtr() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_VariantManagerContent::VariantObjectBinding::get_LazyObjectPtr() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_VariantManagerContent::VariantObjectBinding::get_CapturedProperties() {
    return (void*)((uintptr_t)this + 0x60);
}
_Script_CoreUObject::Class* _Script_VariantManagerContent::VariantObjectBinding::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/VariantManagerContent.VariantObjectBinding");
    return result;
}
