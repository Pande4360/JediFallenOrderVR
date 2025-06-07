#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "DatasmithAssetImportData.hpp"
#include "..\_Script_Engine\AssetImportData.hpp"
_Script_CoreUObject::Class* _Script_DatasmithContent::DatasmithAssetImportData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/DatasmithContent.DatasmithAssetImportData");
    return result;
}
