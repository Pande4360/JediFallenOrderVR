#include "..\FUObjectArray.hpp"
#include "..\_Script_AIModule\BTService.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsBTService_UpdateLOS.hpp"
void* _Script_RsGameTechRT::RsBTService_UpdateLOS::get_HasLOSToTargetKey() {
    return (void*)((uintptr_t)this + 0x70);
}
void* _Script_RsGameTechRT::RsBTService_UpdateLOS::get_HasClearLOSToTargetKey() {
    return (void*)((uintptr_t)this + 0x98);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsBTService_UpdateLOS::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsBTService_UpdateLOS");
    return result;
}
