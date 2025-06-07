#include "..\FUObjectArray.hpp"
#include "..\_Script_AIModule\BTTaskNode.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsBTTask_GetHomeLocation.hpp"
void* _Script_RsGameTechRT::RsBTTask_GetHomeLocation::get_HomeLocationKey() {
    return (void*)((uintptr_t)this + 0x70);
}
void* _Script_RsGameTechRT::RsBTTask_GetHomeLocation::get_HomeRotationKey() {
    return (void*)((uintptr_t)this + 0x98);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsBTTask_GetHomeLocation::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsBTTask_GetHomeLocation");
    return result;
}
