#include "..\FUObjectArray.hpp"
#include "Class.hpp"
#include "DelegateFunction.hpp"
#include "Function.hpp"
_Script_CoreUObject::Class* _Script_CoreUObject::DelegateFunction::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/CoreUObject.DelegateFunction");
    return result;
}
