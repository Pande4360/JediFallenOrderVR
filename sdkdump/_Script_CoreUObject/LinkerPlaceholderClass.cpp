#include "..\FUObjectArray.hpp"
#include "Class.hpp"
#include "LinkerPlaceholderClass.hpp"
_Script_CoreUObject::Class* _Script_CoreUObject::LinkerPlaceholderClass::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/CoreUObject.LinkerPlaceholderClass");
    return result;
}
