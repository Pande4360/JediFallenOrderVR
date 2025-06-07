#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "TimeStretchCurveInstance.hpp"
bool _Script_Engine::TimeStretchCurveInstance::get_bHasValidData() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_Engine::TimeStretchCurveInstance::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.TimeStretchCurveInstance");
    return result;
}
void _Script_Engine::TimeStretchCurveInstance::set_bHasValidData(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
