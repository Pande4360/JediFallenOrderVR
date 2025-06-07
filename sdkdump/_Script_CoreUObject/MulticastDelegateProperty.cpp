#include "..\FUObjectArray.hpp"
#include "Class.hpp"
#include "MulticastDelegateProperty.hpp"
#include "Property.hpp"
_Script_CoreUObject::Class* _Script_CoreUObject::MulticastDelegateProperty::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/CoreUObject.MulticastDelegateProperty");
    return result;
}
