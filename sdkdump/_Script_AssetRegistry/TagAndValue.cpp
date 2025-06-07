#include "..\FUObjectArray.hpp"
#include "TagAndValue.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AssetRegistry::TagAndValue::get_Tag() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_AssetRegistry::TagAndValue::get_Value() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_AssetRegistry::TagAndValue::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AssetRegistry.TagAndValue");
    return result;
}
