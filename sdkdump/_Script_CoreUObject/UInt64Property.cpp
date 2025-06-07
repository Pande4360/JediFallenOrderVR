#include "..\FUObjectArray.hpp"
#include "Class.hpp"
#include "NumericProperty.hpp"
#include "UInt64Property.hpp"
_Script_CoreUObject::Class* _Script_CoreUObject::UInt64Property::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/CoreUObject.UInt64Property");
    return result;
}
