#include "..\FUObjectArray.hpp"
#include "BoolProperty.hpp"
#include "Class.hpp"
#include "Property.hpp"
_Script_CoreUObject::Class* _Script_CoreUObject::BoolProperty::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/CoreUObject.BoolProperty");
    return result;
}
