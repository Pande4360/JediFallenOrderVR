#include "..\FUObjectArray.hpp"
#include "Class.hpp"
#include "ClassProperty.hpp"
#include "ObjectProperty.hpp"
_Script_CoreUObject::Class* _Script_CoreUObject::ClassProperty::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/CoreUObject.ClassProperty");
    return result;
}
