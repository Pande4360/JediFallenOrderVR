#include "..\FUObjectArray.hpp"
#include "Class.hpp"
#include "DelegateProperty.hpp"
#include "Property.hpp"
_Script_CoreUObject::Class* _Script_CoreUObject::DelegateProperty::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/CoreUObject.DelegateProperty");
    return result;
}
