#include "..\FUObjectArray.hpp"
#include "ClothingAssetBase.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
void* _Script_ClothingSystemRuntimeInterface::ClothingAssetBase::get_ImportedFilePath() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_ClothingSystemRuntimeInterface::ClothingAssetBase::get_AssetGuid() {
    return (void*)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Script_ClothingSystemRuntimeInterface::ClothingAssetBase::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/ClothingSystemRuntimeInterface.ClothingAssetBase");
    return result;
}
