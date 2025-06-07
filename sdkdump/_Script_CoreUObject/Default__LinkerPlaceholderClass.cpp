#include "..\FUObjectArray.hpp"
#include "Class.hpp"
#include "Default__LinkerPlaceholderClass.hpp"
_Script_CoreUObject::Class* _Script_CoreUObject::Default__LinkerPlaceholderClass::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"LinkerPlaceholderClass /Script/CoreUObject.Default__LinkerPlaceholderClass");
    return result;
}
