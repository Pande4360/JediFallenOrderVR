#include "..\FUObjectArray.hpp"
#include "Class.hpp"
#include "PrimaryAssetType.hpp"
void* _Script_CoreUObject::PrimaryAssetType::get_Name() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_CoreUObject::PrimaryAssetType::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/CoreUObject.PrimaryAssetType");
    return result;
}
