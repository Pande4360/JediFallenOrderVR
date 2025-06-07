#include "..\FUObjectArray.hpp"
#include "..\_Script_AIModule\BTService.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsBTService_POIRootBehavior.hpp"
void* _Script_RsGameTechRT::RsBTService_POIRootBehavior::get_POIKey() {
    return (void*)((uintptr_t)this + 0x70);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsBTService_POIRootBehavior::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsBTService_POIRootBehavior");
    return result;
}
void* _Script_RsGameTechRT::RsBTService_POIRootBehavior::get_POISyncRotationKey() {
    return (void*)((uintptr_t)this + 0x98);
}
bool _Script_RsGameTechRT::RsBTService_POIRootBehavior::get_bShouldTickPOIKeyUpdate() {
    return (*(uint8_t*)((uintptr_t)this + 0xc0 + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsBTService_POIRootBehavior::set_bShouldTickPOIKeyUpdate(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xc0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_RsGameTechRT::RsBTService_POIRootBehavior::get_bUsePOIWhenDeactivated() {
    return (*(uint8_t*)((uintptr_t)this + 0xf0 + 0)) & 1 != 0;
}
void* _Script_RsGameTechRT::RsBTService_POIRootBehavior::get_MotionParmNameKey() {
    return (void*)((uintptr_t)this + 0xc8);
}
void _Script_RsGameTechRT::RsBTService_POIRootBehavior::set_bUsePOIWhenDeactivated(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xf0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xf0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
