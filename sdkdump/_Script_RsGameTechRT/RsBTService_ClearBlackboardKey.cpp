#include "..\FUObjectArray.hpp"
#include "..\_Script_AIModule\BTService.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsBTService_ClearBlackboardKey.hpp"
void* _Script_RsGameTechRT::RsBTService_ClearBlackboardKey::get_BlackboardKey() {
    return (void*)((uintptr_t)this + 0x70);
}
bool _Script_RsGameTechRT::RsBTService_ClearBlackboardKey::get_bClearOnDeactivation() {
    return (*(uint8_t*)((uintptr_t)this + 0x98 + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsBTService_ClearBlackboardKey::set_bClearOnDeactivation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x98 + 0);
    *(uint8_t*)((uintptr_t)this + 0x98 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsBTService_ClearBlackboardKey::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsBTService_ClearBlackboardKey");
    return result;
}
