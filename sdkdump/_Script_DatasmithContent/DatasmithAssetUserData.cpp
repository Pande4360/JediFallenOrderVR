#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "DatasmithAssetUserData.hpp"
#include "..\_Script_Engine\AssetUserData.hpp"
void* _Script_DatasmithContent::DatasmithAssetUserData::get_MetaData() {
    return (void*)((uintptr_t)this + 0x28);
}
_Script_CoreUObject::Class* _Script_DatasmithContent::DatasmithAssetUserData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/DatasmithContent.DatasmithAssetUserData");
    return result;
}
