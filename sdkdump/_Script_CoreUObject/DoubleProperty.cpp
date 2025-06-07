#include "..\FUObjectArray.hpp"
#include "Class.hpp"
#include "DoubleProperty.hpp"
#include "NumericProperty.hpp"
_Script_CoreUObject::Class* _Script_CoreUObject::DoubleProperty::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/CoreUObject.DoubleProperty");
    return result;
}
