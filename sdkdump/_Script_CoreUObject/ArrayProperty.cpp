#include "..\FUObjectArray.hpp"
#include "ArrayProperty.hpp"
#include "Class.hpp"
#include "Property.hpp"
_Script_CoreUObject::Class* _Script_CoreUObject::ArrayProperty::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/CoreUObject.ArrayProperty");
    return result;
}
