#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "PropertyBinding.hpp"
void* _Script_UMG::PropertyBinding::get_SourceObject() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_UMG::PropertyBinding::get_SourcePath() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_UMG::PropertyBinding::get_DestinationProperty() {
    return (void*)((uintptr_t)this + 0x58);
}
_Script_CoreUObject::Class* _Script_UMG::PropertyBinding::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/UMG.PropertyBinding");
    return result;
}
