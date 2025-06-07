#include "..\FUObjectArray.hpp"
#include "IKChain.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_CoreUObject::Class* _Script_AnimGraphRuntime::IKChain::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AnimGraphRuntime.IKChain");
    return result;
}
