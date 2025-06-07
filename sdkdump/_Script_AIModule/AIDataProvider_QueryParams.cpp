#include "..\FUObjectArray.hpp"
#include "AIDataProvider.hpp"
#include "AIDataProvider_QueryParams.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AIModule::AIDataProvider_QueryParams::get_ParamName() {
    return (void*)((uintptr_t)this + 0x28);
}
float& _Script_AIModule::AIDataProvider_QueryParams::get_FloatValue() {
    return *(float*)((uintptr_t)this + 0x30);
}
bool _Script_AIModule::AIDataProvider_QueryParams::get_BoolValue() {
    return (*(uint8_t*)((uintptr_t)this + 0x38 + 0)) & 1 != 0;
}
int32_t& _Script_AIModule::AIDataProvider_QueryParams::get_IntValue() {
    return *(int32_t*)((uintptr_t)this + 0x34);
}
void _Script_AIModule::AIDataProvider_QueryParams::set_BoolValue(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x38 + 0);
    *(uint8_t*)((uintptr_t)this + 0x38 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_AIModule::AIDataProvider_QueryParams::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AIModule.AIDataProvider_QueryParams");
    return result;
}
