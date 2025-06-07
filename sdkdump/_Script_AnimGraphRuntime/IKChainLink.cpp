#include "..\FUObjectArray.hpp"
#include "IKChainLink.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_CoreUObject::Class* _Script_AnimGraphRuntime::IKChainLink::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AnimGraphRuntime.IKChainLink");
    return result;
}
