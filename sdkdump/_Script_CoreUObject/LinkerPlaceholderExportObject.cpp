#include "..\FUObjectArray.hpp"
#include "Class.hpp"
#include "LinkerPlaceholderExportObject.hpp"
#include "Object.hpp"
_Script_CoreUObject::Class* _Script_CoreUObject::LinkerPlaceholderExportObject::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/CoreUObject.LinkerPlaceholderExportObject");
    return result;
}
