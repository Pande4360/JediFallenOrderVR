#include "..\FUObjectArray.hpp"
#include "AnimNode_ResetRoot.hpp"
#include "AnimNode_SkeletalControlBase.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_CoreUObject::Class* _Script_AnimGraphRuntime::AnimNode_ResetRoot::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AnimGraphRuntime.AnimNode_ResetRoot");
    return result;
}
