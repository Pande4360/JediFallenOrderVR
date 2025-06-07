#include "..\FUObjectArray.hpp"
#include "Class.hpp"
#include "EnumProperty.hpp"
#include "Property.hpp"
_Script_CoreUObject::Class* _Script_CoreUObject::EnumProperty::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/CoreUObject.EnumProperty");
    return result;
}
