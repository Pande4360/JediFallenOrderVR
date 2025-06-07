#include "..\FUObjectArray.hpp"
#include "EQSTestingPawn.hpp"
#include "EnvQuery.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Character.hpp"
_Script_AIModule::EnvQuery*& _Script_AIModule::EQSTestingPawn::get_QueryTemplate() {
    return *(_Script_AIModule::EnvQuery**)((uintptr_t)this + 0x788);
}
void _Script_AIModule::EQSTestingPawn::set_bDrawLabels(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x7bc + 0);
    *(uint8_t*)((uintptr_t)this + 0x7bc + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_AIModule::EQSTestingPawn::get_QueryParams() {
    return (void*)((uintptr_t)this + 0x790);
}
void* _Script_AIModule::EQSTestingPawn::get_HighlightMode() {
    return (void*)((uintptr_t)this + 0x7b8);
}
int32_t& _Script_AIModule::EQSTestingPawn::get_StepToDebugDraw() {
    return *(int32_t*)((uintptr_t)this + 0x7b4);
}
void* _Script_AIModule::EQSTestingPawn::get_QueryConfig() {
    return (void*)((uintptr_t)this + 0x7a0);
}
float& _Script_AIModule::EQSTestingPawn::get_TimeLimitPerStep() {
    return *(float*)((uintptr_t)this + 0x7b0);
}
bool _Script_AIModule::EQSTestingPawn::get_bDrawLabels() {
    return (*(uint8_t*)((uintptr_t)this + 0x7bc + 0)) & 1 != 0;
}
bool _Script_AIModule::EQSTestingPawn::get_bDrawFailedItems() {
    return (*(uint8_t*)((uintptr_t)this + 0x7bc + 0)) & 2 != 0;
}
void _Script_AIModule::EQSTestingPawn::set_bDrawFailedItems(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x7bc + 0);
    *(uint8_t*)((uintptr_t)this + 0x7bc + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_AIModule::EQSTestingPawn::get_bReRunQueryOnlyOnFinishedMove() {
    return (*(uint8_t*)((uintptr_t)this + 0x7bc + 0)) & 4 != 0;
}
void _Script_AIModule::EQSTestingPawn::set_bReRunQueryOnlyOnFinishedMove(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x7bc + 0);
    *(uint8_t*)((uintptr_t)this + 0x7bc + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_AIModule::EQSTestingPawn::get_bShouldBeVisibleInGame() {
    return (*(uint8_t*)((uintptr_t)this + 0x7bc + 0)) & 8 != 0;
}
void _Script_AIModule::EQSTestingPawn::set_bShouldBeVisibleInGame(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x7bc + 0);
    *(uint8_t*)((uintptr_t)this + 0x7bc + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
bool _Script_AIModule::EQSTestingPawn::get_bTickDuringGame() {
    return (*(uint8_t*)((uintptr_t)this + 0x7bc + 0)) & 16 != 0;
}
void _Script_AIModule::EQSTestingPawn::set_bTickDuringGame(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x7bc + 0);
    *(uint8_t*)((uintptr_t)this + 0x7bc + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
void* _Script_AIModule::EQSTestingPawn::get_QueryingMode() {
    return (void*)((uintptr_t)this + 0x7c0);
}
void* _Script_AIModule::EQSTestingPawn::get_NavAgentProperties() {
    return (void*)((uintptr_t)this + 0x7c8);
}
_Script_CoreUObject::Class* _Script_AIModule::EQSTestingPawn::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AIModule.EQSTestingPawn");
    return result;
}
