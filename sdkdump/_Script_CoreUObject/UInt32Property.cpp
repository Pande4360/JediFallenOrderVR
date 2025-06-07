#include "..\FUObjectArray.hpp"
#include "Class.hpp"
#include "NumericProperty.hpp"
#include "UInt32Property.hpp"
_Script_CoreUObject::Class* _Script_CoreUObject::UInt32Property::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/CoreUObject.UInt32Property");
    return result;
}
