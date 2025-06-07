#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "DatasmithAssetUserData.hpp"
#include "DatasmithContentBlueprintLibrary.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
_Script_CoreUObject::Class* _Script_DatasmithContent::DatasmithContentBlueprintLibrary::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/DatasmithContent.DatasmithContentBlueprintLibrary");
    return result;
}
void* _Script_DatasmithContent::DatasmithContentBlueprintLibrary::GetDatasmithUserDataValueForKey(_Script_CoreUObject::Object* Object, void* Key) {
    return;
}
void _Script_DatasmithContent::DatasmithContentBlueprintLibrary::GetDatasmithUserDataKeysAndValuesForValue(_Script_CoreUObject::Object* Object, void* StringToMatch, void*& OutKeys, void*& OutValues) {
    return;
}
_Script_DatasmithContent::DatasmithAssetUserData* _Script_DatasmithContent::DatasmithContentBlueprintLibrary::GetDatasmithUserData(_Script_CoreUObject::Object* Object) {
    return;
}
