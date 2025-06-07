#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimInstanceProxy.hpp"
#include "RsAnimInstanceProxy.hpp"
_Script_CoreUObject::Class* _Script_RsTechRT::RsAnimInstanceProxy::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsTechRT.RsAnimInstanceProxy");
    return result;
}
