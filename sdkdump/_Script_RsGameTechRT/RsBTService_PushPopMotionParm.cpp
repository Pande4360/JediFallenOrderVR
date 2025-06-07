#include "..\FUObjectArray.hpp"
#include "..\_Script_AIModule\BTService.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsBTService_PushPopMotionParm.hpp"
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsBTService_PushPopMotionParm::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsBTService_PushPopMotionParm");
    return result;
}
void* _Script_RsGameTechRT::RsBTService_PushPopMotionParm::get_MotionParmName() {
    return (void*)((uintptr_t)this + 0x70);
}
void* _Script_RsGameTechRT::RsBTService_PushPopMotionParm::get_MotionParmNameKey() {
    return (void*)((uintptr_t)this + 0x78);
}
bool _Script_RsGameTechRT::RsBTService_PushPopMotionParm::get_bUseBlackboardKeyForName() {
    return (*(uint8_t*)((uintptr_t)this + 0xa0 + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsBTService_PushPopMotionParm::set_bUseBlackboardKeyForName(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xa0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
