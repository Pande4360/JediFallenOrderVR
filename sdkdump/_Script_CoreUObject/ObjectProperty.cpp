#include "..\FUObjectArray.hpp"
#include "Class.hpp"
#include "ObjectProperty.hpp"
#include "ObjectPropertyBase.hpp"
_Script_CoreUObject::Class* _Script_CoreUObject::ObjectProperty::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/CoreUObject.ObjectProperty");
    return result;
}
