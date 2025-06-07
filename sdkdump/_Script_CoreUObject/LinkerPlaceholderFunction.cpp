#include "..\FUObjectArray.hpp"
#include "Class.hpp"
#include "Function.hpp"
#include "LinkerPlaceholderFunction.hpp"
_Script_CoreUObject::Class* _Script_CoreUObject::LinkerPlaceholderFunction::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/CoreUObject.LinkerPlaceholderFunction");
    return result;
}
