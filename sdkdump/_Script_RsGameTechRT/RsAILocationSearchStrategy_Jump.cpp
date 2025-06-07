#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsAILocationSearchStrategy.hpp"
#include "RsAILocationSearchStrategy_Jump.hpp"
bool _Script_RsGameTechRT::RsAILocationSearchStrategy_Jump::get_bPreferFlanking() {
    return (*(uint8_t*)((uintptr_t)this + 0x8 + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsAILocationSearchStrategy_Jump::set_bPreferFlanking(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsAILocationSearchStrategy_Jump::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RsAILocationSearchStrategy_Jump");
    return result;
}
