#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "DatasmithCADImportSceneData.hpp"
#include "DatasmithSceneImportData.hpp"
_Script_CoreUObject::Class* _Script_DatasmithContent::DatasmithCADImportSceneData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/DatasmithContent.DatasmithCADImportSceneData");
    return result;
}
