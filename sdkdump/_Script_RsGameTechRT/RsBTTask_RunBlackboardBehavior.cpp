#include "..\FUObjectArray.hpp"
#include "..\_Script_AIModule\BTTask_RunBehaviorDynamic.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsBTTask_RunBlackboardBehavior.hpp"
bool _Script_RsGameTechRT::RsBTTask_RunBlackboardBehavior::get_bClearBlackboardKeyOnInjection() {
    return (*(uint8_t*)((uintptr_t)this + 0xb8 + 0)) & 1 != 0;
}
void* _Script_RsGameTechRT::RsBTTask_RunBlackboardBehavior::get_BehaviorAssetKey() {
    return (void*)((uintptr_t)this + 0x90);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsBTTask_RunBlackboardBehavior::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsBTTask_RunBlackboardBehavior");
    return result;
}
void _Script_RsGameTechRT::RsBTTask_RunBlackboardBehavior::set_bClearBlackboardKeyOnInjection(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb8 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
