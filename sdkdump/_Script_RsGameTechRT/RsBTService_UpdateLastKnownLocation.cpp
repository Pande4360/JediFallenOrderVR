#include "..\FUObjectArray.hpp"
#include "..\_Script_AIModule\BTService.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsBTService_UpdateLastKnownLocation.hpp"
void* _Script_RsGameTechRT::RsBTService_UpdateLastKnownLocation::get_LastKnownLocationKey() {
    return (void*)((uintptr_t)this + 0x70);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsBTService_UpdateLastKnownLocation::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsBTService_UpdateLastKnownLocation");
    return result;
}
