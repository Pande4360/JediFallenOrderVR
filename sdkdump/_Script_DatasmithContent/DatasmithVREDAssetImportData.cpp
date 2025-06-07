#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "DatasmithAssetImportData.hpp"
#include "DatasmithVREDAssetImportData.hpp"
_Script_CoreUObject::Class* _Script_DatasmithContent::DatasmithVREDAssetImportData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/DatasmithContent.DatasmithVREDAssetImportData");
    return result;
}
