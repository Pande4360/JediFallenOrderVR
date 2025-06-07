#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsAIAnimationDefinition.hpp"
#include "RsBTTask_PlayAnimationBase.hpp"
#include "RsBTTask_PlayAnimationDefinition.hpp"
_Script_RsGameTechRT::RsAIAnimationDefinition*& _Script_RsGameTechRT::RsBTTask_PlayAnimationDefinition::get_AnimationDefinition() {
    return *(_Script_RsGameTechRT::RsAIAnimationDefinition**)((uintptr_t)this + 0x90);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsBTTask_PlayAnimationDefinition::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsBTTask_PlayAnimationDefinition");
    return result;
}
