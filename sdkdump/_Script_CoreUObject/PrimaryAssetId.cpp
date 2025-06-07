#include "..\FUObjectArray.hpp"
#include "Class.hpp"
#include "PrimaryAssetId.hpp"
void* _Script_CoreUObject::PrimaryAssetId::get_PrimaryAssetType() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_CoreUObject::PrimaryAssetId::get_PrimaryAssetName() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_CoreUObject::PrimaryAssetId::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/CoreUObject.PrimaryAssetId");
    return result;
}
