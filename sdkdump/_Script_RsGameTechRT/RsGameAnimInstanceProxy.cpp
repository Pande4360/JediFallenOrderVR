#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsGameAnimInstanceProxy.hpp"
#include "..\_Script_RsTechRT\RsAnimInstanceProxy.hpp"
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsGameAnimInstanceProxy::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RsGameAnimInstanceProxy");
    return result;
}
