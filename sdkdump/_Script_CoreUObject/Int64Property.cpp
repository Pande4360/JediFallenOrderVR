#include "..\FUObjectArray.hpp"
#include "Class.hpp"
#include "Int64Property.hpp"
#include "NumericProperty.hpp"
_Script_CoreUObject::Class* _Script_CoreUObject::Int64Property::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/CoreUObject.Int64Property");
    return result;
}
