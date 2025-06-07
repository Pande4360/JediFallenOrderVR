#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimSequence.hpp"
#include "RsAIAnimMoveTransitionCondition.hpp"
void* _Script_RsGameTechRT::RsAIAnimMoveTransitionCondition::get_ParameterName() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_Engine::AnimSequence*& _Script_RsGameTechRT::RsAIAnimMoveTransitionCondition::get_AnimationAsset() {
    return *(_Script_Engine::AnimSequence**)((uintptr_t)this + 0x8);
}
void* _Script_RsGameTechRT::RsAIAnimMoveTransitionCondition::get_Op() {
    return (void*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsAIAnimMoveTransitionCondition::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RsAIAnimMoveTransitionCondition");
    return result;
}
