#include "..\FUObjectArray.hpp"
#include "AnimNode_Root.hpp"
#include "AnimNode_StateResult.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_CoreUObject::Class* _Script_AnimGraphRuntime::AnimNode_StateResult::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AnimGraphRuntime.AnimNode_StateResult");
    return result;
}
