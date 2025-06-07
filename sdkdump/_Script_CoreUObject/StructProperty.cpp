#include "..\FUObjectArray.hpp"
#include "Class.hpp"
#include "Property.hpp"
#include "StructProperty.hpp"
_Script_CoreUObject::Class* _Script_CoreUObject::StructProperty::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/CoreUObject.StructProperty");
    return result;
}
