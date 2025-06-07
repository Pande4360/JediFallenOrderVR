#include "..\FUObjectArray.hpp"
#include "Class.hpp"
#include "FloatProperty.hpp"
#include "NumericProperty.hpp"
_Script_CoreUObject::Class* _Script_CoreUObject::FloatProperty::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/CoreUObject.FloatProperty");
    return result;
}
