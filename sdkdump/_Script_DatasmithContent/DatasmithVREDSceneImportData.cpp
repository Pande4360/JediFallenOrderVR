#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "DatasmithSceneImportData.hpp"
#include "DatasmithVREDSceneImportData.hpp"
_Script_CoreUObject::Class* _Script_DatasmithContent::DatasmithVREDSceneImportData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/DatasmithContent.DatasmithVREDSceneImportData");
    return result;
}
