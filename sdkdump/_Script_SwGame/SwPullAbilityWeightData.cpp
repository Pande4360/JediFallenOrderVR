#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\TableRowBase.hpp"
#include "SwPullAbilityWeightData.hpp"
float& _Script_SwGame::SwPullAbilityWeightData::get_LinearStiffness() {
    return *(float*)((uintptr_t)this + 0x1c);
}
float& _Script_SwGame::SwPullAbilityWeightData::get_SpringDampening() {
    return *(float*)((uintptr_t)this + 0x14);
}
void* _Script_SwGame::SwPullAbilityWeightData::get_CameraMode() {
    return (void*)((uintptr_t)this + 0x8);
}
float& _Script_SwGame::SwPullAbilityWeightData::get_Springiness() {
    return *(float*)((uintptr_t)this + 0x10);
}
float& _Script_SwGame::SwPullAbilityWeightData::get_LinearDampening() {
    return *(float*)((uintptr_t)this + 0x18);
}
float& _Script_SwGame::SwPullAbilityWeightData::get_InterpolationSpeed() {
    return *(float*)((uintptr_t)this + 0x20);
}
bool _Script_SwGame::SwPullAbilityWeightData::get_bShouldYank() {
    return (*(uint8_t*)((uintptr_t)this + 0x24 + 0)) & 1 != 0;
}
void _Script_SwGame::SwPullAbilityWeightData::set_bShouldYank(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x24 + 0);
    *(uint8_t*)((uintptr_t)this + 0x24 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_SwGame::SwPullAbilityWeightData::get_YankSpeed() {
    return *(float*)((uintptr_t)this + 0x28);
}
_Script_CoreUObject::Class* _Script_SwGame::SwPullAbilityWeightData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SwGame.SwPullAbilityWeightData");
    return result;
}
