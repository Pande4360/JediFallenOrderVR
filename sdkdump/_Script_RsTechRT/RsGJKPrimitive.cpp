#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsGJKPrimitive.hpp"
_Script_CoreUObject::Class* _Script_RsTechRT::RsGJKPrimitive::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsTechRT.RsGJKPrimitive");
    return result;
}
