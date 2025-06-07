#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "DatasmithAssetImportData.hpp"
#include "DatasmithDeltaGenAssetImportData.hpp"
_Script_CoreUObject::Class* _Script_DatasmithContent::DatasmithDeltaGenAssetImportData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/DatasmithContent.DatasmithDeltaGenAssetImportData");
    return result;
}
