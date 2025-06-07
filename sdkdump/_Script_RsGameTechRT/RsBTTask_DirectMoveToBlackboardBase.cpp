#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsBTTask_DirectMoveToBase.hpp"
#include "RsBTTask_DirectMoveToBlackboardBase.hpp"
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsBTTask_DirectMoveToBlackboardBase::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsBTTask_DirectMoveToBlackboardBase");
    return result;
}
void* _Script_RsGameTechRT::RsBTTask_DirectMoveToBlackboardBase::get_TargetBlackboardKey() {
    return (void*)((uintptr_t)this + 0x88);
}
