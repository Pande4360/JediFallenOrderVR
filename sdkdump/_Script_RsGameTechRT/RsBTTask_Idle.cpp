#include "..\FUObjectArray.hpp"
#include "..\_Script_AIModule\BTTaskNode.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsBTTask_Idle.hpp"
float& _Script_RsGameTechRT::RsBTTask_Idle::get_Timeout() {
    return *(float*)((uintptr_t)this + 0x70);
}
void _Script_RsGameTechRT::RsBTTask_Idle::set_bUseTimeOut(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x78 + 0);
    *(uint8_t*)((uintptr_t)this + 0x78 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_RsGameTechRT::RsBTTask_Idle::get_RandomDeviation() {
    return *(float*)((uintptr_t)this + 0x74);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsBTTask_Idle::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsBTTask_Idle");
    return result;
}
bool _Script_RsGameTechRT::RsBTTask_Idle::get_bUseTimeOut() {
    return (*(uint8_t*)((uintptr_t)this + 0x78 + 0)) & 1 != 0;
}
