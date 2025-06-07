#include "..\FUObjectArray.hpp"
#include "AnimNode_PoseHandler.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimNode_AssetPlayerBase.hpp"
#include "..\_Script_Engine\PoseAsset.hpp"
_Script_CoreUObject::Class* _Script_AnimGraphRuntime::AnimNode_PoseHandler::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AnimGraphRuntime.AnimNode_PoseHandler");
    return result;
}
_Script_Engine::PoseAsset*& _Script_AnimGraphRuntime::AnimNode_PoseHandler::get_PoseAsset() {
    return *(_Script_Engine::PoseAsset**)((uintptr_t)this + 0x60);
}
