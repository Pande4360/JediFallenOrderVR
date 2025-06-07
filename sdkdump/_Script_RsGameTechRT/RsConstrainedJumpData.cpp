#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimSequenceBase.hpp"
#include "RsConstrainedJumpData.hpp"
_Script_Engine::AnimSequenceBase*& _Script_RsGameTechRT::RsConstrainedJumpData::get_JumpAnimation() {
    return *(_Script_Engine::AnimSequenceBase**)((uintptr_t)this + 0x10);
}
void* _Script_RsGameTechRT::RsConstrainedJumpData::get_JumpImpulse() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsConstrainedJumpData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RsConstrainedJumpData");
    return result;
}
