#include "..\FUObjectArray.hpp"
#include "Class.hpp"
#include "Function.hpp"
#include "Struct.hpp"
_Script_CoreUObject::Class* _Script_CoreUObject::Function::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/CoreUObject.Function");
    return result;
}
