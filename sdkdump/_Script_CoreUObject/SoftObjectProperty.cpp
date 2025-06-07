#include "..\FUObjectArray.hpp"
#include "Class.hpp"
#include "ObjectPropertyBase.hpp"
#include "SoftObjectProperty.hpp"
_Script_CoreUObject::Class* _Script_CoreUObject::SoftObjectProperty::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/CoreUObject.SoftObjectProperty");
    return result;
}
