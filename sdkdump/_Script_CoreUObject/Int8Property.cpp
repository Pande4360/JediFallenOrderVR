#include "..\FUObjectArray.hpp"
#include "Class.hpp"
#include "Int8Property.hpp"
#include "NumericProperty.hpp"
_Script_CoreUObject::Class* _Script_CoreUObject::Int8Property::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/CoreUObject.Int8Property");
    return result;
}
