#include "..\FUObjectArray.hpp"
#include "Class.hpp"
#include "SoftClassProperty.hpp"
#include "SoftObjectProperty.hpp"
_Script_CoreUObject::Class* _Script_CoreUObject::SoftClassProperty::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/CoreUObject.SoftClassProperty");
    return result;
}
