#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "RsAIPatrolPath.hpp"
void* _Script_RsGameTechRT::RsAIPatrolPath::get_PatrolPointInstances() {
    return (void*)((uintptr_t)this + 0x360);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsAIPatrolPath::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsAIPatrolPath");
    return result;
}
