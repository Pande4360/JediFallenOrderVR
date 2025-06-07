#include "..\FUObjectArray.hpp"
#include "AnimNode_MeshSpaceRefPose.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimNode_Base.hpp"
_Script_CoreUObject::Class* _Script_AnimGraphRuntime::AnimNode_MeshSpaceRefPose::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AnimGraphRuntime.AnimNode_MeshSpaceRefPose");
    return result;
}
