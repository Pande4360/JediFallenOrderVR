#include "..\FUObjectArray.hpp"
#include "CustomFieldData.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_BuildPatchServices::CustomFieldData::get_Key() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_BuildPatchServices::CustomFieldData::get_Value() {
    return (void*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_BuildPatchServices::CustomFieldData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/BuildPatchServices.CustomFieldData");
    return result;
}
