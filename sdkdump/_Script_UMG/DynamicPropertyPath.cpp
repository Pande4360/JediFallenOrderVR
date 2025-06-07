#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_PropertyPath\CachedPropertyPath.hpp"
#include "DynamicPropertyPath.hpp"
_Script_CoreUObject::Class* _Script_UMG::DynamicPropertyPath::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/UMG.DynamicPropertyPath");
    return result;
}
