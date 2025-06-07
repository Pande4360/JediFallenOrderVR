#include "..\FUObjectArray.hpp"
#include "Class.hpp"
#include "Int16Property.hpp"
#include "NumericProperty.hpp"
_Script_CoreUObject::Class* _Script_CoreUObject::Int16Property::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/CoreUObject.Int16Property");
    return result;
}
