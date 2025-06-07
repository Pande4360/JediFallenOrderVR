#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "DatasmithAssetImportOptions.hpp"
void* _Script_DatasmithContent::DatasmithAssetImportOptions::get_PackagePath() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_DatasmithContent::DatasmithAssetImportOptions::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/DatasmithContent.DatasmithAssetImportOptions");
    return result;
}
