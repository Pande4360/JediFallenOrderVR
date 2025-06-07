#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "DatasmithStaticMeshCADImportData.hpp"
#include "DatasmithStaticMeshImportData.hpp"
_Script_CoreUObject::Class* _Script_DatasmithContent::DatasmithStaticMeshCADImportData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/DatasmithContent.DatasmithStaticMeshCADImportData");
    return result;
}
