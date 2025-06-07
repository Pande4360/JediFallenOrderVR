#include "..\FUObjectArray.hpp"
#include "AIDataProvider_QueryParams.hpp"
#include "AIDataProvider_Random.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
float& _Script_AIModule::AIDataProvider_Random::get_Min() {
    return *(float*)((uintptr_t)this + 0x40);
}
void _Script_AIModule::AIDataProvider_Random::set_bInteger(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x48 + 0);
    *(uint8_t*)((uintptr_t)this + 0x48 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_AIModule::AIDataProvider_Random::get_Max() {
    return *(float*)((uintptr_t)this + 0x44);
}
bool _Script_AIModule::AIDataProvider_Random::get_bInteger() {
    return (*(uint8_t*)((uintptr_t)this + 0x48 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_AIModule::AIDataProvider_Random::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AIModule.AIDataProvider_Random");
    return result;
}
