#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsScriptVariable.hpp"
_Script_CoreUObject::Class* _Script_RsTechRT::RsScriptVariable::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsTechRT.RsScriptVariable");
    return result;
}
